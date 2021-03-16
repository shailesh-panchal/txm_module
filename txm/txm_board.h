
#ifndef TXM_BOARD_H
#define TXM_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include "nrf.h"
#include "nrf_drv_timer.h"
#include "nordic_common.h"
#include "nrf_gpio.h"
#include "nrf_saadc.h"
#include "nrf_drv_saadc.h"
#include "nrf_gpio.h"
#include "ble_hci.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "nrf_ble_gatt.h"
#include "nrf_ble_qwr.h"
#include "ble_nus.h"
#include "app_uart.h"
#include "app_util_platform.h"
#include "nrf_pwr_mgmt.h"
#include "app_timer.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#if defined (UART_PRESENT)
#include "nrf_uart.h"
#endif
#if defined (UARTE_PRESENT)
#include "nrf_uarte.h"
#endif

#include "txm_ble.h"
#include "txm_uart.h"
#include "txm_timer.h"

/* LED PIN */
#define LED_GREEN      NRF_GPIO_PIN_MAP(0,14)
#define LED_RED        NRF_GPIO_PIN_MAP(0,13)

/* UART PIN */
#define RX_PIN_NUMBER  8
#define TX_PIN_NUMBER  6
#define CTS_PIN_NUMBER 7
#define RTS_PIN_NUMBER 5
#define HWFC           true


/* BUZZER PIN */
#define BUZZER      NRF_GPIO_PIN_MAP(1,4) 

/* enable disable Regulator PIN */
#define REGULATOR_CONTROL_PIN     NRF_GPIO_PIN_MAP(0,11) 

/* control the MAX3232 */
#define ENABLE_MAX3232_PIN NRF_GPIO_PIN_MAP(0,12)

/* ADC Chanel */
#define ADC_CHANNEL_PIN 3

/* DEBUG MACRO */

#define MAX_UART_MESSAGE_SIZE            71

#define TXM_LOG_OVER_BLE 1


#define TXM_LOG_INFO(...)  if(TXM_LOG_OVER_BLE){NRF_LOG_INFO(__VA_ARGS__);}\
else{NRF_LOG_INFO(__VA_ARGS__);}

#define TXM_LOG_DEBUG(...)  if(TXM_LOG_OVER_BLE){NRF_LOG_DEBUG(__VA_ARGS__);}\
else{NRF_LOG_DEBUG(__VA_ARGS__);}

#define TXM_LOG_ERROR(...)  if(TXM_LOG_OVER_BLE){NRF_LOG_ERROR(__VA_ARGS__);}\
else{NRF_LOG_ERROR(__VA_ARGS__);}
    
/* adc data structure */
#define ADC_SAMPLES_IN_BUFFER 1
#define ADC_VALUE_MAX_SIZE 1

typedef struct
{
  nrf_saadc_value_t     value[ADC_VALUE_MAX_SIZE][ADC_SAMPLES_IN_BUFFER];
  uint16_t timer_task;;
  void (*conversion_done) (uint16_t );
}txm_adc_info_t;

/* led cadense data structure */
typedef enum
{
    LED_COLOR_RED = 0,
    LED_COLOR_GREEN,
    LED_COLOR_YELLOW,
    LED_COLOR_INVALID= 0xFF
}LED_COLOR_e;

typedef enum
{
    LED_CADENSE_OFF = 0,
    LED_CADENSE_ON,
    LED_CADENSE_1S_ON_1S_OFF,
    LED_CADENSE_4S_ON_4S_OFF,
    LED_CADENSE_ON_OFF,
    LED_CADENSE_INVALID= 0xFF
}LED_CADENSE_e;

typedef struct
{
  LED_COLOR_e color;
  LED_CADENSE_e cadense;
  uint8_t ontime; /* it is second only*/
  uint8_t offtime; /* it is second only*/
  uint8_t replay; /*how many time repeart cadance */
  uint16_t timer_handle;
  void (*callback) (void);

}txm_led_cadense_info_t;


typedef enum
{
    BUZZER_CADENSE_OFF = 0,
    BUZZER_CADENSE_ON,
    BUZZER_CADENSE_1S_ON_1S_OFF,
    BUZZER_CADENSE_3S_ON_3S_OFF,
    BUZZER_CADENSE_INVALID= 0xFF
}BUZZER_CADENSE_e;

typedef struct
{
  BUZZER_CADENSE_e cadense;
  uint8_t ontime; /* it is second only*/
  uint8_t offtime; /* it is second only*/
  uint8_t replay; /*how many time repeart cadance */
  uint16_t timer_handle;
  void (*callback) (void);
}txm_buzzer_cadense_info_t;



uint8_t txm_board_init(void);
void led_all_off(void);
void led_all_on(void);
void LedCadense(LED_COLOR_e ledcolor,LED_CADENSE_e cadense);
void BuzzerCadense(BUZZER_CADENSE_e cadense);
void regulator_on(void);
void regulator_off(void);
void max323_on(void);
void max323_off(void);
void Put_device_insleep(uint8_t second);
void Put_device_inOff(void);
void power_off(void);

#ifdef __cplusplus
}
#endif

#endif // TXM_BOARD_H