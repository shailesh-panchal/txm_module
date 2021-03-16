
#include "txm_board.h"
#include "app_fifo.h"

#define UART_TX_BUF_SIZE                128                                         /**< UART TX buffer size. */
#define UART_RX_BUF_SIZE                128                                         /**< UART RX buffer size. */

#define MAX_UART_DATA_BUFFER_SIZE     2048

#define FIRST_CHAR_OF_MESSAGE         '>'
#define LAST_CHAR_OF_MESSAGE          '\n'
#define SECOND_LAST_CHAR_OF_MESSAGE   '\r'

#define FIRST_CHAR_INDEX              0
#define LAST_CHAR_INDEX               (MAX_UART_MESSAGE_SIZE - 1)
#define SECOND_LAST_CHAR_INDEX        (MAX_UART_MESSAGE_SIZE - 2)


app_fifo_t    m_receive_fifo;
static uint8_t receive_data[MAX_UART_DATA_BUFFER_SIZE];

/* system uarat parameter */
static txm_uart_info_t txm_uart_info;
static void register_uart_task(void);

static void uart_data_wait_timout(void)
{
    // go into sleep mode and send sleep mode message to Mobile device if connected.
    char data[]="TXM Poweroff\n\r";
    uint8_t datalen = strlen(data);
    uint32_t       err_code;

#if 1
   if(0 != txm_send_data_over_ble(data,datalen))
   {
      TXM_LOG_ERROR("Faied to send data over ble @ %d in %s\n",__LINE__,__FILE__);
   }

#else
    for (uint32_t i = 0; i < datalen; i++)
    {
      do
      {
          err_code = app_uart_put(data[i]);
          if ((err_code != NRF_SUCCESS) && (err_code != NRF_ERROR_BUSY))
          {
              NRF_LOG_ERROR("Failed receiving NUS message. Error 0x%x. ", err_code);
          }
      } while (err_code == NRF_ERROR_BUSY);

    }
#endif
    //play buzzer for second
   BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF);
   Put_device_insleep(1);
}


static void register_uart_task(void)
{

    if(txm_uart_info.timer_task != TIMER_INVALID_HANDLE)
    {
        txm_remove_task(txm_uart_info.timer_task);
    }
    txm_uart_info.timer_task = TIMER_INVALID_HANDLE;
  
    //add the 30 minute task to get adc value;
    // 500 x 2 = 1 s
    // 60 X 1s = 1 minute
    // 30 x1min = 30 minute
    // 30 minute = 30 x 60 x 2 = 3600
    // it is perodic task
    txm_uart_info.timer_task = txm_add_task(3600,1,&uart_data_wait_timout);
    if(txm_uart_info.timer_task == TIMER_INVALID_HANDLE)
    {
        TXM_LOG_ERROR("Faied with Error @ %d in %s\n",__LINE__,__FILE__);
    }
}

/*uart interupt handler */
static void uart_event_handle(app_uart_evt_t * p_event)
{
    static uint8_t rxdata[MAX_UART_MESSAGE_SIZE];
    static uint8_t index = 0;
    uint32_t       err_code;
    uint32_t length = MAX_UART_MESSAGE_SIZE;

    switch (p_event->evt_type)
    {
        case APP_UART_DATA_READY:

            //reload the uart data wait timer 
            txm_reload_task(txm_uart_info.timer_task,3600);
            
            err_code = app_uart_get(&rxdata[index]);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_ERROR("Faied to read data from uart @ %d in %s\n",__LINE__,__FILE__);
                return;
            }
#if 0          
            /*remove below code after testing*/
            length = index+1;
            err_code = app_fifo_write(&m_receive_fifo,&rxdata[0],&length);
            if(err_code != NRF_SUCCESS)
            {
                TXM_LOG_ERROR("Faied to write data to fifo @ %d in %s\n",__LINE__,__FILE__);
            }
            else
            {
               if(0 == txm_send_data_over_ble(NULL,0))
               {
                   TXM_LOG_ERROR("Faied to send data over ble @ %d in %s\n",__LINE__,__FILE__);
               }
            }
            index = 0;
            return;
#endif
            /*remove above code after testing*/
            if(rxdata[index] == FIRST_CHAR_OF_MESSAGE) //start of message
            {
                //remove the old data from buffer
                memset(&rxdata,0,sizeof(rxdata));
                index = 0;
                rxdata[index] = '>';
            }
            index++;

            if(index >= MAX_UART_MESSAGE_SIZE)
            {
               if((rxdata[FIRST_CHAR_INDEX] == FIRST_CHAR_OF_MESSAGE) && //second last char of message
                  (rxdata[SECOND_LAST_CHAR_INDEX] == SECOND_LAST_CHAR_OF_MESSAGE) && //second last char of message
                  ((rxdata[LAST_CHAR_INDEX] == LAST_CHAR_OF_MESSAGE) || (rxdata[LAST_CHAR_INDEX] == SECOND_LAST_CHAR_OF_MESSAGE))) //second last char of message
                {
                   //valid message recevied put to fifo
                    err_code = app_fifo_write(&m_receive_fifo,&rxdata[0],&length);
                    if(err_code != NRF_SUCCESS)
                    {
                        TXM_LOG_ERROR("Faied to write data to fifo @ %d in %s\n",__LINE__,__FILE__);
                    }
                    else
                    {
                       if(0 == txm_send_data_over_ble(NULL,0))
                       {
                           TXM_LOG_ERROR("Faied to send data over ble @ %d in %s\n",__LINE__,__FILE__);
                       }
                    }
                }
                //remove the old data from buffer
                memset(&rxdata,0,sizeof(rxdata));
                index = 0;
            }
            break;

        case APP_UART_COMMUNICATION_ERROR:
            
            TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",p_event->data.error_communication,__LINE__,__FILE__);
            break;

        case APP_UART_FIFO_ERROR:
            TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",p_event->data.error_code,__LINE__,__FILE__);
            break;

        default:
            break;
    }
}

void txm_uart_init(void)
{
    uint32_t                     err_code;
    app_uart_comm_params_t const comm_params =
    {
        .rx_pin_no    = RX_PIN_NUMBER,
        .tx_pin_no    = TX_PIN_NUMBER,
        .rts_pin_no   = RTS_PIN_NUMBER,
        .cts_pin_no   = CTS_PIN_NUMBER,
        .flow_control = APP_UART_FLOW_CONTROL_DISABLED,
        .use_parity   = false,
        .baud_rate    = NRF_UART_BAUDRATE_300
    };

    APP_UART_FIFO_INIT(&comm_params,
                       UART_RX_BUF_SIZE,
                       UART_TX_BUF_SIZE,
                       uart_event_handle,
                       APP_IRQ_PRIORITY_LOWEST,
                       err_code);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return;
    }

    //init the application fifo
    // Configure buffer RX buffer.
    err_code = app_fifo_init(&m_receive_fifo,&receive_data[0],sizeof(receive_data));
    if (err_code != NRF_SUCCESS) 
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return;
    }

    //register_uart_task();

}