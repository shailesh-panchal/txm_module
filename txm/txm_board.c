
#include "nrf_delay.h"
#include "txm_board.h"


#define ADC_REF_VOLTAGE_IN_MILLIVOLTS   600                                     /**< Reference voltage (in milli volts) used by ADC while doing conversion. */
#define ADC_PRE_SCALING_COMPENSATION    6                                       /**< The ADC is configured to use VDD with 1/3 prescaling as input. And hence the result of conversion is to be multiplied by 3 to get the actual value of the battery voltage.*/
#define ADC_RES_10BIT                   1024                                    /**< Maximum digital value for 10-bit ADC conversion. */

/**@brief Macro to convert the result of ADC conversion in millivolts.
 *
 * @param[in]  ADC_VALUE   ADC result.
 *
 * @retval     Result converted to millivolts.
 */
#define ADC_RESULT_IN_MILLI_VOLTS(ADC_VALUE)\
        ((((ADC_VALUE) * ADC_REF_VOLTAGE_IN_MILLIVOLTS) / ADC_RES_10BIT) * ADC_PRE_SCALING_COMPENSATION)



/* system adc parameter */
static txm_adc_info_t txm_adc_info;

/* system led cadense parameter control one led cadense only at time*/
static txm_led_cadense_info_t led_cadense_info;
static txm_buzzer_cadense_info_t buzzer_cadense_info;
static uint8_t ledtogglebit = 1;
//
static uint16_t sleep_wait_timer_handle = TIMER_INVALID_HANDLE;
static uint16_t poweroff_wait_timer_handle = TIMER_INVALID_HANDLE;
/**@brief Function for initializing the nrf log module.
 */
static void log_init(void)
{
    ret_code_t err_code = NRF_LOG_INIT(NULL);
    APP_ERROR_CHECK(err_code);

    NRF_LOG_DEFAULT_BACKENDS_INIT();
}


/* led control function */

static void leds_init(void)
{
    nrf_gpio_cfg_output(LED_GREEN);
    nrf_gpio_cfg_output(LED_RED);
    led_cadense_info.timer_handle = TIMER_INVALID_HANDLE;
}

static void led_green(uint8_t status)
{
    nrf_gpio_pin_write(LED_RED,0);
    if(status == 1)
    {
      nrf_gpio_pin_write(LED_GREEN,1);
    }
    else
    {
      nrf_gpio_pin_write(LED_GREEN,0);
    }
}
static void led_red(uint8_t status)
{
   nrf_gpio_pin_write(LED_GREEN,0);
   if(status == 1)
   {
     nrf_gpio_pin_write(LED_RED,1);
   }
   else
   {
    nrf_gpio_pin_write(LED_RED,0);
   }
}
static void led_yellow(uint8_t status)
{
   if(status == 1)
   {
    nrf_gpio_pin_write(LED_GREEN,1);
    nrf_gpio_pin_write(LED_RED,1);
   }
   else
   {
    nrf_gpio_pin_write(LED_GREEN,0);
    nrf_gpio_pin_write(LED_RED,0);
   }

}
void led_all_off(void)
{
  nrf_gpio_pin_write(LED_GREEN,0);
   nrf_gpio_pin_write(LED_RED,0);
}
void led_all_on(void)
{
   nrf_gpio_pin_write(LED_GREEN,1);
   nrf_gpio_pin_write(LED_RED,1);
}

static void led_cadense_proc(void)
{

    if(led_cadense_info.color == LED_COLOR_RED)
    {
        led_red(ledtogglebit);
    }
    else if (led_cadense_info.color == LED_COLOR_GREEN)
    {
        led_green(ledtogglebit);
    }
    else if(led_cadense_info.color == LED_COLOR_YELLOW)
    {
        led_yellow(ledtogglebit);
    }
    else
    {
        TXM_LOG_ERROR("Faied with Invalid color Error %d @ %d in %s\n",led_cadense_info.color,__LINE__,__FILE__);
    }
    
    if(ledtogglebit == 0) // off cadense
    {
          ledtogglebit = 1;
          
          if(led_cadense_info.replay == 0xff)
          {
              txm_reload_task(led_cadense_info.timer_handle,led_cadense_info.offtime);
          }
          else
          {
            led_cadense_info.replay--;

            if(led_cadense_info.replay <= 0)
            {
                //change the timer mode to unique
                txm_timer_mode_change(led_cadense_info.timer_handle,0);
            }
            else
            {
                txm_reload_task(led_cadense_info.timer_handle,led_cadense_info.offtime);
            }
          }
    }
    else // on cadense
    {
        ledtogglebit = 0;
        txm_reload_task(led_cadense_info.timer_handle,led_cadense_info.ontime);
    }
}
static void register_led_task(LED_COLOR_e ledcolor,LED_CADENSE_e cadense,uint8_t ontime,uint8_t offtime,uint8_t replay)
{
    if(led_cadense_info.timer_handle != TIMER_INVALID_HANDLE)
    {
       txm_remove_task(led_cadense_info.timer_handle);
       
    }
    led_cadense_info.timer_handle = TIMER_INVALID_HANDLE;
    led_cadense_info.color = ledcolor;
    led_cadense_info.cadense = cadense;
    led_cadense_info.offtime = offtime;
    led_cadense_info.ontime = ontime;
    led_cadense_info.replay = replay;
    led_cadense_info.callback = led_cadense_proc;
    ledtogglebit = 1; //set on led on
    //load timer for 1 second and it is cyclic 
    led_cadense_info.timer_handle = txm_add_task(2,1,led_cadense_info.callback);
    if(led_cadense_info.timer_handle == TIMER_INVALID_HANDLE)
    {
        TXM_LOG_ERROR("Faied with Error %d in %s\n",__LINE__,__FILE__);
    }
}

void LedCadense(LED_COLOR_e ledcolor,LED_CADENSE_e cadense)
{
    switch(cadense)
    {
      case LED_CADENSE_OFF:
        if(ledcolor == LED_COLOR_RED)
          led_red(0);
        else if(ledcolor == LED_COLOR_GREEN)
          led_green(0);
        else if(ledcolor == LED_COLOR_YELLOW)
          led_yellow(0);

      break;

      case LED_CADENSE_ON:
        if(ledcolor == LED_COLOR_RED)
          led_red(1);
        else if(ledcolor == LED_COLOR_GREEN)
          led_green(1);
        else if(ledcolor == LED_COLOR_YELLOW)
          led_yellow(1);

      break;

      case LED_CADENSE_1S_ON_1S_OFF:
        register_led_task(ledcolor,cadense,1,1,1);
      break;

      case LED_CADENSE_4S_ON_4S_OFF:
        register_led_task(ledcolor,cadense,1,1,4);
      break;

      case LED_CADENSE_ON_OFF:
        register_led_task(ledcolor,cadense,1,1,0xff);
      break;

      default:
      break;
    }
}

/* buzzer control function */
static void buzzer_init(void)
{
  nrf_gpio_cfg_output(BUZZER);

  buzzer_cadense_info.timer_handle = TIMER_INVALID_HANDLE;
}

static void buzzer_on(void)
{
    nrf_gpio_pin_write(BUZZER,1);
}

static void buzzer_off(void)
{
    nrf_gpio_pin_write(BUZZER,0);
}

static void buzzer_cadense_proc(void)
{
    static uint8_t togglebit = 1;
        
    if(togglebit == 0) // off cadense
    {
          buzzer_off();
          togglebit = 1;
          
          if(buzzer_cadense_info.replay == 0xff)
          {
              txm_reload_task(buzzer_cadense_info.timer_handle,buzzer_cadense_info.offtime);
          }
          else
          {
            buzzer_cadense_info.replay--;

            if(buzzer_cadense_info.replay <= 0)
            {
                //change the timer mode to unique
                txm_timer_mode_change(buzzer_cadense_info.timer_handle,0);
            }
            else
            {
                txm_reload_task(buzzer_cadense_info.timer_handle,buzzer_cadense_info.offtime);
            }
          }
    }
    else // on cadense
    {
        buzzer_on();
        togglebit = 0;
        txm_reload_task(buzzer_cadense_info.timer_handle,buzzer_cadense_info.ontime);
    }
}
#if 0
static void register_buzzer_task(BUZZER_CADENSE_e cadense,uint8_t ontime,uint8_t offtime,uint8_t replay)
{
    if(buzzer_cadense_info.timer_handle != TIMER_INVALID_HANDLE)
    {
       txm_remove_task(buzzer_cadense_info.timer_handle);
    }
    buzzer_cadense_info.timer_handle = TIMER_INVALID_HANDLE;
    buzzer_cadense_info.cadense = cadense;
    buzzer_cadense_info.offtime = offtime;
    buzzer_cadense_info.ontime = ontime;
    buzzer_cadense_info.replay = replay;
    buzzer_cadense_info.callback = buzzer_cadense_proc;
    //load timer for 1 second and it is cyclic 
    buzzer_cadense_info.timer_handle = txm_add_task(2,1,buzzer_cadense_info.callback);
    if(buzzer_cadense_info.timer_handle == TIMER_INVALID_HANDLE)
    {
        TXM_LOG_ERROR("Faied with Error @ %d in %s\n",__LINE__,__FILE__);
    }
}

#endif
static void PlayBuzzer(uint8_t sec)
{
    uint32_t index = 0;
    //loop one iteration is 2 ms 
    //so second  it will be 1000/6 = 166
    for(index; index < (sec * 500 * 10); index++)
    {
      buzzer_on();
      nrf_delay_us(100);
      buzzer_off();
      nrf_delay_us(100);
    }
}
void BuzzerCadense(BUZZER_CADENSE_e cadense)
{
    switch(cadense)
    {
      case BUZZER_CADENSE_OFF:
       buzzer_off();
      break;

      case BUZZER_CADENSE_ON:
        buzzer_on();

      break;

      case BUZZER_CADENSE_1S_ON_1S_OFF:
        PlayBuzzer(1);
        //register_buzzer_task(cadense,1,1,1);
      break;

      case BUZZER_CADENSE_3S_ON_3S_OFF:
        PlayBuzzer(3);
        break;

      default:
      break;
    }
}

/* regulator control function */
static void regulator_init(void)
{
  nrf_gpio_cfg_output(REGULATOR_CONTROL_PIN);
}

void regulator_on(void)
{
    nrf_gpio_pin_write(REGULATOR_CONTROL_PIN,1);
}

void regulator_off(void)
{
    nrf_gpio_pin_write(REGULATOR_CONTROL_PIN,0);
}

/* Max3232 control function */
static void max3232_init(void)
{
  nrf_gpio_cfg_output(ENABLE_MAX3232_PIN);
}

void max323_on(void)
{
    nrf_gpio_pin_write(ENABLE_MAX3232_PIN,1);
}

void max323_off(void)
{
    nrf_gpio_pin_write(ENABLE_MAX3232_PIN,0);
}

static void sense_input_voltage(uint16_t data)
{
      //check the input voltage
      //function is called for every 500ms 
      static uint16_t longpress_count = 0;
      char message[20] = "Change Battery";

      //equaltion for adc voltage 
      // Input = 9.0 v then output = 2.3 to 2.2 v  (as per voltage divider circuit R1 = 51k and R2 = 18K)
      // Input = 6.0 v then output = 1.6 to 1.5 v
      // Input = 5.1 v then output = 1.4 to 1.3 v
      // Input = 4.5 v then output = 1.2 to 1.1 v
      // Input = 3.3 v then output = 0.9 to 0.7 v 
      // Input = 0.0 v then output = 0.5 to 0.0 v
      // long press more the 5 second then put device in power off state

      //voltage between 0 to 500 mv 1
      if(data >= 00 && data <= 500)
      {
          longpress_count++;

          //equal to 3 second 
          if(longpress_count >= 6) 
          {
              longpress_count = 0;
              //put system in power off state
              power_off();
          }
          else
          { 
              //wake up device from sleep
              //check if device in sleep mode then wake of it
              //TODO shailesh

          }
      }
      //voltage between 1000 mv to 1500 mv //input voltage is 6.0v
      else if(data >=1500 && data <= 1600)
      {
          //flash read lead four time
          LedCadense(LED_COLOR_RED,LED_CADENSE_4S_ON_4S_OFF);
          //send the message to handset "change Battery"
         if(0 == txm_send_data_over_ble(message,strlen(message)))
         {
             TXM_LOG_ERROR("Faied to send data over ble @ %d in %s\n",__LINE__,__FILE__);
         }
         
         Put_device_insleep(2);
          //put device in sleep mode
      }
      //voltage between 1100 mv to 1400 mv  //input voltage is 4.5 to 5.1 v
      else if(data >=1100 && data <= 1400)
      {
         BuzzerCadense(BUZZER_CADENSE_3S_ON_3S_OFF);
         //send the message to handset "Battery Dead"
         strcpy(message,"Battery Dead");
         if(0 == txm_send_data_over_ble(message,strlen(message)))
         {
             TXM_LOG_ERROR("Faied to send data over ble @ %d in %s\n",__LINE__,__FILE__);
         }
          Put_device_insleep(2);
      }
      else
      {
          longpress_count = 0;
      }
}


static void txm_trigger_saadc(void)
{
    ret_code_t err_code;
    err_code = nrfx_saadc_sample();
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
    }
}

static void register_adc_task(void)
{

    if(txm_adc_info.timer_task != TIMER_INVALID_HANDLE)
    {
        txm_remove_task(txm_adc_info.timer_task);
    }
    txm_adc_info.timer_task = TIMER_INVALID_HANDLE;
    memset(&txm_adc_info.value,0x00, (sizeof(nrf_saadc_value_t)*ADC_VALUE_MAX_SIZE*ADC_SAMPLES_IN_BUFFER));
  
    //add the 500ms task to get adc value;
    // it is perodic task
    txm_adc_info.timer_task = txm_add_task(1,0,&txm_trigger_saadc);
    if(txm_adc_info.timer_task == TIMER_INVALID_HANDLE)
    {
        TXM_LOG_ERROR("Faied with Error @ %d in %s\n",__LINE__,__FILE__);
    }
}

static void saadc_callback(nrf_drv_saadc_evt_t const * p_event)
{
    nrf_saadc_value_t adc_result;
    uint16_t milli_volts = 0;


    if (p_event->type == NRF_DRV_SAADC_EVT_DONE)
    {
         ret_code_t err_code;

        adc_result = p_event->data.done.p_buffer[0];
        err_code = nrf_drv_saadc_buffer_convert(p_event->data.done.p_buffer, ADC_SAMPLES_IN_BUFFER);
        if(err_code != NRF_SUCCESS)
        {
            TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        }
        else
        {

          milli_volts = ADC_RESULT_IN_MILLI_VOLTS(adc_result);
          txm_adc_info.conversion_done(milli_volts);
        }
        register_adc_task();
    }
}
static uint8_t sense_input_volatge_init(void)
{
  ret_code_t err_code;
  nrf_saadc_channel_config_t channel_config =
      NRF_DRV_SAADC_DEFAULT_CHANNEL_CONFIG_SE(NRF_SAADC_INPUT_AIN1);

  err_code = nrf_drv_saadc_init(NULL, saadc_callback);
  if(err_code != NRF_SUCCESS)
  {
      TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
      return 0;
  }

//init the adc channel 3
  err_code = nrf_drv_saadc_channel_init(1, &channel_config);
  if(err_code != NRF_SUCCESS)
  {
      TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
      return 0;
  }

  err_code = nrf_drv_saadc_buffer_convert(txm_adc_info.value[0], ADC_SAMPLES_IN_BUFFER);
  if(err_code != NRF_SUCCESS)
  {
      TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
      return 0;
  }

  //init the adc paramater
  txm_adc_info.timer_task = TIMER_INVALID_HANDLE;
  memset(&txm_adc_info.value,0x00, (sizeof(nrf_saadc_value_t)*ADC_VALUE_MAX_SIZE*ADC_SAMPLES_IN_BUFFER));
  txm_adc_info.conversion_done = sense_input_voltage;
  register_adc_task();

  return 1;

}

static uint8_t power_management_init(void)
{
    ret_code_t err_code;
    err_code = nrf_pwr_mgmt_init();
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    return  1;
}

static void sleep_mode_enter(void)
{
     uint32_t err_code;
     //TODO shailesh
    Put_device_inOff();
}

void Put_device_insleep(uint8_t second)
{
    //run timer as per input parameter
    if(sleep_wait_timer_handle != TIMER_INVALID_HANDLE)
    {
       txm_remove_task(sleep_wait_timer_handle);
    }
    sleep_wait_timer_handle = TIMER_INVALID_HANDLE;
  
    //add the second task to put system in sleep state
    sleep_wait_timer_handle = txm_add_task((2*second),0,&sleep_mode_enter);
    if(sleep_wait_timer_handle == TIMER_INVALID_HANDLE)
    {
        TXM_LOG_ERROR("Faied with Error @ %d in %s\n",__LINE__,__FILE__);
    }
}

void Put_device_inOff(void)
{
    
    //start 15 minute timer to which help to put sytem in power off if any activity is not occur in duration.
    //run timer as per input parameter
    if(poweroff_wait_timer_handle != TIMER_INVALID_HANDLE)
    {
       txm_remove_task(poweroff_wait_timer_handle);
    }
    poweroff_wait_timer_handle = TIMER_INVALID_HANDLE;
  
    //add the second task to put system in poweroff
    poweroff_wait_timer_handle = txm_add_task(450,0,&power_off);
    if(poweroff_wait_timer_handle == TIMER_INVALID_HANDLE)
    {
        TXM_LOG_ERROR("Faied with Error @ %d in %s\n",__LINE__,__FILE__);
    }
}

void power_off(void)
{
  //play buzzer for twice before power off
  BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF);
  BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF);
  regulator_off();
}

uint8_t txm_get_battery_status(void)
{
    //TODO shailesh
}

uint8_t txm_board_init(void)
{
  uint8_t ret_value = 0;

  leds_init();

  regulator_init();

  regulator_on();

  log_init();

  //enable power managment
  nrf_pwr_mgmt_init();

  ret_value = txm_timer_init();
  if(ret_value == 0)
    return ret_value;

  power_management_init();

  txm_uart_init();
  
  buzzer_init();

  max3232_init();
  max323_on();

  ret_value = sense_input_volatge_init();
  if(ret_value == 0)
    return ret_value;

  ret_value = txm_ble_init();

  return ret_value;
}