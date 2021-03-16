#include "txm_board.h"
#include "app_fifo.h"


#define APP_BLE_CONN_CFG_TAG            1                                           /**< A tag identifying the SoftDevice BLE configuration. */

#define DEVICE_NAME                     "Sinar TXM"                                 /**< Name of device. Will be included in the advertising data. */
#define NUS_SERVICE_UUID_TYPE           BLE_UUID_TYPE_VENDOR_BEGIN                  /**< UUID type for the Nordic UART Service (vendor specific). */

#define APP_BLE_OBSERVER_PRIO           3                                           /**< Application's BLE observer priority. You shouldn't need to modify this value. */

#define APP_FAST_ADV_INTERVAL                480                                          /**< The advertising interval (in units of 0.625 ms. This value corresponds to 200 ms). */
#define APP_FAST_ADV_DURATION                000                                       /**< The advertising duration (600 seconds) in units of 10 milliseconds. */


#define APP_SLOW_ADV_INTERVAL                480                                          /**< The advertising interval (in units of 0.625 ms. This value corresponds to 300 ms). */
#define APP_SLOW_ADV_DURATION                00                                          /**< The advertising duration (1800 seconds) in units of 10 milliseconds. */

#define MIN_CONN_INTERVAL               MSEC_TO_UNITS(20, UNIT_1_25_MS)             /**< Minimum acceptable connection interval (20 ms), Connection interval uses 1.25 ms units. */
#define MAX_CONN_INTERVAL               MSEC_TO_UNITS(75, UNIT_1_25_MS)             /**< Maximum acceptable connection interval (75 ms), Connection interval uses 1.25 ms units. */
#define SLAVE_LATENCY                   0                                           /**< Slave latency. */
#define CONN_SUP_TIMEOUT                MSEC_TO_UNITS(4000, UNIT_10_MS)             /**< Connection supervisory timeout (4 seconds), Supervision Timeout uses 10 ms units. */
#define FIRST_CONN_PARAMS_UPDATE_DELAY  APP_TIMER_TICKS(5000)                       /**< Time from initiating event (connect or start of notification) to first time sd_ble_gap_conn_param_update is called (5 seconds). */
#define NEXT_CONN_PARAMS_UPDATE_DELAY   APP_TIMER_TICKS(30000)                      /**< Time between each call to sd_ble_gap_conn_param_update after the first call (30 seconds). */
#define MAX_CONN_PARAMS_UPDATE_COUNT    3                                           /**< Number of attempts before giving up the connection parameter negotiation. */

#define DEAD_BEEF                       0xDEADBEEF                                  /**< Value used as error code on stack dump, can be used to identify stack location on stack unwind. */

#define TX_POWER_LEVEL                  (0)                                    /**< TX Power Level value. This will be set both in the TX Power service, in the advertising data, and also used to set the radio transmit power. */

extern app_fifo_t    m_receive_fifo;

BLE_NUS_DEF(m_nus, NRF_SDH_BLE_TOTAL_LINK_COUNT);                                   /**< BLE NUS service instance. */
NRF_BLE_GATT_DEF(m_gatt);                                                           /**< GATT module instance. */
NRF_BLE_QWR_DEF(m_qwr);                                                             /**< Context for the Queued Write module.*/
BLE_ADVERTISING_DEF(m_advertising);                                                 /**< Advertising module instance. */

static uint16_t   m_conn_handle          = BLE_CONN_HANDLE_INVALID;                 /**< Handle of the current connection. */
static uint16_t   m_ble_nus_max_data_len = BLE_GATT_ATT_MTU_DEFAULT - 3;            /**< Maximum length of data (in bytes) that can be transmitted to the peer by the Nordic UART service module. */
static ble_uuid_t m_adv_uuids[]          =                                          /**< Universally unique service identifier. */
{
    {BLE_UUID_NUS_SERVICE, NUS_SERVICE_UUID_TYPE}
};
static ble_gap_addr_t m_my_addr;
static uint8_t ble_advertising_on = 0;
static txm_ble_info_t txm_ble_info;



static uint8_t SendDataOverBle(void);
static void register_ble_task(void);
/**@brief Function for assert macro callback.
 *
 * @details This function will be called in case of an assert in the SoftDevice.
 *
 * @warning This handler is an example only and does not fit a final product. You need to analyse
 *          how your product is supposed to react in case of Assert.
 * @warning On assert from the SoftDevice, the system can only recover on reset.
 *
 * @param[in] line_num    Line number of the failing ASSERT call.
 * @param[in] p_file_name File name of the failing ASSERT call.
 */
void assert_nrf_callback(uint16_t line_num, const uint8_t * p_file_name)
{
    app_error_handler(DEAD_BEEF, line_num, p_file_name);

    printf("%d %s\n\r",line_num,p_file_name);
    //TODO shailesh reset the device
}


/**@brief Function for handling BLE events.
 *
 * @param[in]   p_ble_evt   Bluetooth stack event.
 * @param[in]   p_context   Unused.
 */
static void ble_evt_handler(ble_evt_t const * p_ble_evt, void * p_context)
{
    uint32_t err_code;

    switch (p_ble_evt->header.evt_id)
    {
        case BLE_GAP_EVT_CONNECTED:

            TXM_LOG_INFO("Connected");

            m_conn_handle = p_ble_evt->evt.gap_evt.conn_handle;
            err_code = nrf_ble_qwr_conn_handle_assign(&m_qwr, m_conn_handle);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
                err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gattc_evt.conn_handle,
                                             BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
                if(err_code != NRF_SUCCESS)
                {
                    TXM_LOG_DEBUG("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
                }
            }
            else
            {
              txm_ble_advertising_stop();              
            }
            break;

        case BLE_GAP_EVT_DISCONNECTED:
            TXM_LOG_INFO("Disconnected");
            m_conn_handle = BLE_CONN_HANDLE_INVALID;
            txm_ble_advertising_start();
            break;

        case BLE_GAP_EVT_PHY_UPDATE_REQUEST:
        {
            TXM_LOG_INFO("PHY update request.");
            ble_gap_phys_t const phys =
            {
                .rx_phys = BLE_GAP_PHY_AUTO,
                .tx_phys = BLE_GAP_PHY_AUTO,
            };
            err_code = sd_ble_gap_phy_update(p_ble_evt->evt.gap_evt.conn_handle, &phys);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_DEBUG("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
            }
        } break;

        case BLE_GAP_EVT_SEC_PARAMS_REQUEST:
            // Pairing not supported
            err_code = sd_ble_gap_sec_params_reply(m_conn_handle, BLE_GAP_SEC_STATUS_PAIRING_NOT_SUPP, NULL, NULL);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
                err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gattc_evt.conn_handle,
                                             BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);

                if(err_code != NRF_SUCCESS)
                {
                    TXM_LOG_DEBUG("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
                }
                else
                {
                    m_conn_handle = BLE_CONN_HANDLE_INVALID;
                    txm_ble_advertising_start();
                }
            }
            break;

        case BLE_GATTS_EVT_SYS_ATTR_MISSING:
            // No system attributes have been stored.
            err_code = sd_ble_gatts_sys_attr_set(m_conn_handle, NULL, 0, 0);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
                err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gattc_evt.conn_handle,
                                             BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);

               if(err_code != NRF_SUCCESS)
              {
                  TXM_LOG_DEBUG("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
              }
              else
                {
                    m_conn_handle = BLE_CONN_HANDLE_INVALID;
                    txm_ble_advertising_start();
                }
            }
            break;

        case BLE_GATTC_EVT_TIMEOUT:
            // Disconnect on GATT Client timeout event.
            err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gattc_evt.conn_handle,
                                             BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
            }
            m_conn_handle = BLE_CONN_HANDLE_INVALID;
            txm_ble_advertising_start();
            break;
        
        case BLE_GATTS_EVT_TIMEOUT:
            // Disconnect on GATT Server timeout event.
            err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gatts_evt.conn_handle,
                                             BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
            }
            m_conn_handle = BLE_CONN_HANDLE_INVALID;
            txm_ble_advertising_start();
            break;

        default:
            // No implementation needed.
            break;
    }
}



/**@brief Function for the SoftDevice initialization.
 *
 * @details This function initializes the SoftDevice and the BLE event interrupt.
 */
static uint8_t ble_stack_init(void)
{
    ret_code_t err_code;

    /* send request to enable soft device library */
    err_code = nrf_sdh_enable_request();
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    // Configure the BLE stack using the default settings.
    // Fetch the start address of the application RAM.
    uint32_t ram_start = 0;
    err_code = nrf_sdh_ble_default_cfg_set(APP_BLE_CONN_CFG_TAG, &ram_start);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    // Enable BLE stack.
    err_code = nrf_sdh_ble_enable(&ram_start);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }
    // Register a handler for BLE events.
    NRF_SDH_BLE_OBSERVER(m_ble_observer, APP_BLE_OBSERVER_PRIO, ble_evt_handler, NULL);

    return 1;
}


/**@brief Function for handling events from the GATT library. */
static void gatt_evt_handler(nrf_ble_gatt_t * p_gatt, nrf_ble_gatt_evt_t const * p_evt)
{
    if ((m_conn_handle == p_evt->conn_handle) && (p_evt->evt_id == NRF_BLE_GATT_EVT_ATT_MTU_UPDATED))
    {
        m_ble_nus_max_data_len = p_evt->params.att_mtu_effective - OPCODE_LENGTH - HANDLE_LENGTH;
        TXM_LOG_INFO("Data len is set to 0x%X(%d)", m_ble_nus_max_data_len, m_ble_nus_max_data_len);
    }
    TXM_LOG_DEBUG("ATT MTU exchange completed. central 0x%x peripheral 0x%x",
                  p_gatt->att_mtu_desired_central,
                  p_gatt->att_mtu_desired_periph);
}


/**@brief Function for initializing the GATT library. */
static uint8_t gatt_init(void)
{
    ret_code_t err_code;

    err_code = nrf_ble_gatt_init(&m_gatt, gatt_evt_handler);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    err_code = nrf_ble_gatt_att_mtu_periph_set(&m_gatt, NRF_SDH_BLE_GATT_MAX_MTU_SIZE);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    return 1;
}


/**@brief Function for handling advertising events.
 *
 * @details This function will be called for advertising events which are passed to the application.
 *
 * @param[in] ble_adv_evt  Advertising event.
 */
static void on_adv_evt(ble_adv_evt_t ble_adv_evt)
{
    uint32_t err_code;
    switch (ble_adv_evt)
    {
        case BLE_ADV_EVT_FAST:
        case BLE_ADV_EVT_SLOW:
            //NOTE nothing to do
            break;
        case BLE_ADV_EVT_IDLE:
            //play buzzer 
            BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF);
            Put_device_insleep(1);
            break;
        default:
            break;
    }
}


/**@brief Function for changing the tx power.
 */
static void tx_power_set(void)
{
    ret_code_t err_code = sd_ble_gap_tx_power_set(BLE_GAP_TX_POWER_ROLE_ADV, m_advertising.adv_handle, TX_POWER_LEVEL);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
    }
}

/**@brief Function for initializing the Advertising functionality.
 */
static uint8_t advertising_init(void)
{
    uint32_t               err_code;
    ble_advertising_init_t init;

    memset(&init, 0, sizeof(init));

    init.advdata.name_type          = BLE_ADVDATA_FULL_NAME;
    init.advdata.include_appearance = false;
    init.advdata.flags              = BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE;

    init.srdata.uuids_complete.uuid_cnt = sizeof(m_adv_uuids) / sizeof(m_adv_uuids[0]);
    init.srdata.uuids_complete.p_uuids  = m_adv_uuids;

    init.config.ble_adv_fast_enabled  = true;
    init.config.ble_adv_fast_interval = APP_FAST_ADV_INTERVAL;
    init.config.ble_adv_fast_timeout  = APP_FAST_ADV_DURATION;
    init.config.ble_adv_slow_enabled  = true;
    init.config.ble_adv_slow_interval = APP_SLOW_ADV_INTERVAL;
    init.config.ble_adv_slow_timeout  = APP_SLOW_ADV_DURATION;
    init.evt_handler = on_adv_evt;

    err_code = ble_advertising_init(&m_advertising, &init);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    ble_advertising_conn_cfg_tag_set(&m_advertising, APP_BLE_CONN_CFG_TAG);
    return 1;
}


/**@brief Function for the GAP initialization.
 *
 * @details This function will set up all the necessary GAP (Generic Access Profile) parameters of
 *          the device. It also sets the permissions and appearance.
 */
static uint8_t gap_params_init(void)
{
    uint32_t                err_code;
    ble_gap_conn_params_t   gap_conn_params;
    ble_gap_conn_sec_mode_t sec_mode;
    static uint8_t device_name[250] = {0};


    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&sec_mode);


    err_code = sd_ble_gap_addr_get(&m_my_addr);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    sprintf(device_name,"%s%x%x",DEVICE_NAME,m_my_addr.addr[1],m_my_addr.addr[0]);

    //sprintf(device_name,"%s",DEVICE_NAME);

    err_code = sd_ble_gap_device_name_set(&sec_mode,
                                          (const uint8_t *) device_name,
                                          strlen(device_name));
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    memset(&gap_conn_params, 0, sizeof(gap_conn_params));

    gap_conn_params.min_conn_interval = MIN_CONN_INTERVAL;
    gap_conn_params.max_conn_interval = MAX_CONN_INTERVAL;
    gap_conn_params.slave_latency     = SLAVE_LATENCY;
    gap_conn_params.conn_sup_timeout  = CONN_SUP_TIMEOUT;

    err_code = sd_ble_gap_ppcp_set(&gap_conn_params);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    return 1;
}


/**@brief Function for handling Queued Write Module errors.
 *
 * @details A pointer to this function will be passed to each service which may need to inform the
 *          application about an error.
 *
 * @param[in]   nrf_error   Error code containing information about what went wrong.
 */
static void nrf_qwr_error_handler(uint32_t nrf_error)
{
    TXM_LOG_ERROR("failed with Error %d\n",nrf_error);
    //TODO shailesh
}


/**@brief Function for handling the data from the Nordic UART Service.
 *
 * @details This function will process the data received from the Nordic UART BLE Service and send
 *          it to the UART module.
 *
 * @param[in] p_evt       Nordic UART Service event.
 */
/**@snippet [Handling the data received over BLE] */
static void nus_data_handler(ble_nus_evt_t * p_evt)
{
    char receivedata[6] = {0};
    uint32_t length = 6;
    
    if (p_evt->type == BLE_NUS_EVT_RX_DATA)
    {
        if(length > p_evt->params.rx_data.length)
          length = p_evt->params.rx_data.length;
        
        for (uint32_t i = 0; i < length; i++)
        {
            receivedata[i] = p_evt->params.rx_data.p_data[i];
        }

        if(0 == strncasecmp("ACK",receivedata,3))
        {
            //flash the green led 
            LedCadense(LED_COLOR_GREEN,LED_CADENSE_1S_ON_1S_OFF);
        }
    }
    else if(p_evt->type == BLE_NUS_EVT_COMM_STARTED)
    {
        TXM_LOG_DEBUG("Notification has been enabled");
    }
    else if(p_evt->type == BLE_NUS_EVT_COMM_STOPPED)
    {
        TXM_LOG_DEBUG("Notification has been disabled");
    }
    else if(p_evt->type == BLE_NUS_EVT_TX_RDY)
    {
        TXM_LOG_DEBUG("ready to send data over ble");
    }
}
/**@snippet [Handling the data received over BLE] */


/**@brief Function for initializing services that will be used by the application.
 */
static uint8_t services_init(void)
{
    uint32_t           err_code;
    ble_nus_init_t     nus_init;
    nrf_ble_qwr_init_t qwr_init = {0};

    // Initialize Queued Write Module.
    qwr_init.error_handler = nrf_qwr_error_handler;

    err_code = nrf_ble_qwr_init(&m_qwr, &qwr_init);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    // Initialize NUS.
    memset(&nus_init, 0, sizeof(nus_init));

    nus_init.data_handler = nus_data_handler;

    err_code = ble_nus_init(&m_nus, &nus_init);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }
    return  1;
}


/**@brief Function for handling an event from the Connection Parameters Module.
 *
 * @details This function will be called for all events in the Connection Parameters Module
 *          which are passed to the application.
 *
 * @note All this function does is to disconnect. This could have been done by simply setting
 *       the disconnect_on_fail config parameter, but instead we use the event handler
 *       mechanism to demonstrate its use.
 *
 * @param[in] p_evt  Event received from the Connection Parameters Module.
 */
static void on_conn_params_evt(ble_conn_params_evt_t * p_evt)
{
    uint32_t           err_code;
    if (p_evt->evt_type == BLE_CONN_PARAMS_EVT_FAILED)
    {
        err_code = sd_ble_gap_disconnect(m_conn_handle, BLE_HCI_CONN_INTERVAL_UNACCEPTABLE);
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
    }
}


/**@brief Function for handling errors from the Connection Parameters module.
 *
 * @param[in] nrf_error  Error code containing information about what went wrong.
 */
static void conn_params_error_handler(uint32_t nrf_error)
{
    TXM_LOG_ERROR("failed with Error %d\n",nrf_error);
   // txm_ble_advertising_start();
}


/**@brief Function for initializing the Connection Parameters module.
 */
static uint8_t conn_params_init(void)
{
    uint32_t               err_code;
    ble_conn_params_init_t cp_init;

    memset(&cp_init, 0, sizeof(cp_init));

    cp_init.p_conn_params                  = NULL;
    cp_init.first_conn_params_update_delay = FIRST_CONN_PARAMS_UPDATE_DELAY;
    cp_init.next_conn_params_update_delay  = NEXT_CONN_PARAMS_UPDATE_DELAY;
    cp_init.max_conn_params_update_count   = MAX_CONN_PARAMS_UPDATE_COUNT;
    cp_init.start_on_notify_cccd_handle    = BLE_GATT_HANDLE_INVALID;
    cp_init.disconnect_on_fail             = true;
    cp_init.evt_handler                    = on_conn_params_evt;
    cp_init.error_handler                  = conn_params_error_handler;

    err_code = ble_conn_params_init(&cp_init);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }
    return 1;
}


/**@brief Function for starting advertising.
 */
uint8_t txm_ble_advertising_start(void)
{

    if(ble_advertising_on == 0)
    {
      uint32_t err_code = ble_advertising_start(&m_advertising, BLE_ADV_MODE_FAST);
      if(err_code != NRF_SUCCESS)
      {
          TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
          return 0;
      }
      ble_advertising_on = 1;
    }
    //start the RED Led for indication Advertising start but still not connected with BLE device 
    LedCadense(LED_COLOR_RED,LED_CADENSE_ON_OFF);
    register_ble_task();
    return 1;
}
void txm_ble_advertising_stop(void)
{
 #if 0
  if(ble_advertising_on == 1)
  {
      uint32_t err_code = sd_ble_gap_adv_stop(m_advertising.adv_handle);
     if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }
  }
    ble_advertising_on = 0;
  #endif

  BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF);
  LedCadense(LED_COLOR_GREEN,LED_CADENSE_1S_ON_1S_OFF);

  if(txm_ble_info.timer_task != TIMER_INVALID_HANDLE)
  {
      txm_remove_task(txm_ble_info.timer_task);
  }
}

static uint8_t SendDataOverBle(void)
{
    uint32_t pendingData = 0;
    uint8_t tmpdata[MAX_UART_MESSAGE_SIZE];
    uint32_t length = MAX_UART_MESSAGE_SIZE;
    uint16_t tmplength = MAX_UART_MESSAGE_SIZE;
    uint32_t err_code;

    //first get the ble connection staus
    if(m_conn_handle == BLE_CONN_HANDLE_INVALID)
       return 0;

    while(1)
    {
      pendingData = app_fifo_read_size(&m_receive_fifo);

      if(pendingData >= MAX_UART_MESSAGE_SIZE)
      {
           err_code = app_fifo_read(&m_receive_fifo,tmpdata,&length);
           if(err_code != NRF_SUCCESS)
           {
                  TXM_LOG_ERROR("Faied read data from fifo %d @ %d in %s\n",err_code,__LINE__,__FILE__);
                  return 0;
           }
           do
           { 
      
              err_code = ble_nus_data_send(&m_nus, &tmpdata[0], &tmplength, m_conn_handle);
              if(err_code == NRF_SUCCESS)
              {
                  //TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
              }
              else if ((err_code != NRF_ERROR_INVALID_STATE) &&
                  (err_code != NRF_ERROR_RESOURCES) &&
                  (err_code != NRF_ERROR_NOT_FOUND))
              {
                  TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
                  return 0;
              }
           }while (err_code == NRF_ERROR_RESOURCES);
      }
      else
        break;
    }

    return 1;
}

uint8_t txm_send_data_over_ble(char *data, uint32_t len)
{
    uint32_t err_code;
    uint8_t tmpdata[MAX_UART_MESSAGE_SIZE];
    uint32_t length = MAX_UART_MESSAGE_SIZE;
    uint16_t tmplength = MAX_UART_MESSAGE_SIZE;
   //first get the ble connection staus
    if(m_conn_handle == BLE_CONN_HANDLE_INVALID)
       return 0;

    if(data != NULL)
    {
      strcpy(tmpdata,data);
      tmplength = (uint16_t)len;
    }
    else
    {      
      if(1 == SendDataOverBle())
        return 0;
    }
    do
    { 
        err_code = ble_nus_data_send(&m_nus, &tmpdata[0], &tmplength, m_conn_handle);

        if(err_code == NRF_SUCCESS)
        {
          TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        }
        else if ((err_code != NRF_ERROR_INVALID_STATE) &&
        (err_code != NRF_ERROR_RESOURCES) &&
        (err_code != NRF_ERROR_NOT_FOUND))
        {
          TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
          return 0;
        }

    }while (err_code == NRF_ERROR_RESOURCES);

    return 1;
}

static void ble_device_wait_timeout(void)
{
   // stop advertise ment.
  if(ble_advertising_on == 1)
  {
    uint32_t err_code = sd_ble_gap_adv_stop(m_advertising.adv_handle);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
    }
  }
    ble_advertising_on = 0;

    txm_ble_advertising_stop();

    //now put device in sleep state
    Put_device_insleep(1);
}


static void register_ble_task(void)
{
    if(txm_ble_info.timer_task != TIMER_INVALID_HANDLE)
    {
        txm_remove_task(txm_ble_info.timer_task);
    }
    txm_ble_info.timer_task = TIMER_INVALID_HANDLE;
  
    //add the 15 minute task to get adc value;
    // 500 x 2 = 1 s
    // 60 X 1s = 1 minute
    // 15 x1min = 30 minute
    // 15 minute = 15 x 60 x 2 = 1800
    // it is perodic task
    txm_ble_info.timer_task = txm_add_task(1800,1,&ble_device_wait_timeout);
    if(txm_ble_info.timer_task == TIMER_INVALID_HANDLE)
    {
        TXM_LOG_ERROR("Faied with Error @ %d in %s\n",__LINE__,__FILE__);
    }
}

uint8_t txm_ble_init(void)
{
    uint8_t ret_value = 1;
    ret_value = ble_stack_init();
    if(ret_value != 1)
    {
      return ret_value;
    }
    ret_value = gap_params_init();
    if(ret_value != 1)
    {
      return ret_value;
    }
    ret_value = gatt_init();
    if(ret_value != 1)
    {
      return ret_value;
    }
    ret_value = services_init();
    if(ret_value != 1)
    {
      return ret_value;
    }
    ret_value = advertising_init();
    if(ret_value != 1)
    {
      return ret_value;
    }
    ret_value = conn_params_init();
    if(ret_value != 1)
    {
      return ret_value;
    }
    txm_ble_info.timer_task = TIMER_INVALID_HANDLE;
    return ret_value;
}