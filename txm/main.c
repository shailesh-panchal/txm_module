
#include <stdint.h>
#include <string.h>
#include "nrf_delay.h"
#include "txm_board.h"




/**@brief Function for handling the idle state (main loop).
 *
 * @details If there is no pending log operation, then sleep until next the next event occurs.
 */
static void idle_state_handle(void)
{
    if (NRF_LOG_PROCESS() == false)
    {
        nrf_pwr_mgmt_run();
    }
}

static void poweron_indication(void)
{
  BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF);
  LedCadense(LED_COLOR_GREEN,LED_CADENSE_1S_ON_1S_OFF);
}
#if 0
static void test_code(void)
{
    LedCadense(LED_COLOR_RED,LED_CADENSE_ON_OFF);
    nrf_delay_ms(2000);
    LedCadense(LED_COLOR_GREEN,LED_CADENSE_1S_ON_1S_OFF);
    nrf_delay_ms(3000);
}
#endif
/**@brief Application main function.
 */
int main(void)
{

    // Initialize.
    if(0 == txm_board_init())
    {
        BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF); //play buzzer on erro
        Put_device_insleep(1);
    }

    poweron_indication();
#if 1
    // Start execution
    if(0 == txm_ble_advertising_start())
    {
        BuzzerCadense(BUZZER_CADENSE_1S_ON_1S_OFF); //play buzzer on error
        Put_device_insleep(1);
    }
#endif
    // Enter main loop.
    for (;;)
    {
       txm_perform_task(); 
        idle_state_handle();
    }
}


/**
 * @}
 */
