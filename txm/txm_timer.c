
#include "txm_timer.h"

#define TXM_TIMER_TICK_MS   500
#define MAX_TIMER_TASK_LIST 12


/* system timer with 100ms tick */
const nrf_drv_timer_t txm_timer = NRF_DRV_TIMER_INSTANCE(1);
static txm_timer_info_t timer_info[MAX_TIMER_TASK_LIST];

static uint8_t elpase_500ms = 0;

static void txm_timer_handler(nrf_timer_event_t event_type, void * p_context)
{
    switch (event_type)
    {
        case NRF_TIMER_EVENT_COMPARE0:
        
            elpase_500ms++;
            //txm_perform_task(); 
            break;

        default:
            //Do nothing.
            break;
    }
}

uint8_t txm_timer_init(void)
{
    ret_code_t err_code;

    nrf_drv_timer_config_t timer_cfg = NRF_DRV_TIMER_DEFAULT_CONFIG;
    timer_cfg.bit_width = NRF_TIMER_BIT_WIDTH_32;
    err_code = nrf_drv_timer_init(&txm_timer, &timer_cfg, txm_timer_handler);
    if(err_code != NRF_SUCCESS)
    {
        TXM_LOG_ERROR("Faied with Error %d @ %d in %s\n",err_code,__LINE__,__FILE__);
        return 0;
    }

    /* setup m_timer for compare event every 500ms */
    uint32_t ticks = nrf_drv_timer_ms_to_ticks(&txm_timer, TXM_TIMER_TICK_MS);
    nrf_drv_timer_extended_compare(&txm_timer,
                                   NRF_TIMER_CC_CHANNEL0,
                                   ticks,
                                   NRF_TIMER_SHORT_COMPARE0_CLEAR_MASK,
                                   true);

    uint8_t index = 0;
    for(index =0; index < MAX_TIMER_TASK_LIST; index++)
    {
        timer_info[index].callback = NULL;
        timer_info[index].handle = TIMER_INVALID_HANDLE;
        timer_info[index].value = 0;
        timer_info[index].mode = 0;
    }
    nrf_drv_timer_enable(&txm_timer);

    return 1;
}

uint16_t txm_add_task(uint16_t value,uint8_t mode, void (*callback) (void))
{
      if(callback == NULL)
          return TIMER_INVALID_HANDLE;
      if(value == 0)
          return TIMER_INVALID_HANDLE;

      if(mode > 1)
         mode = 0;

      uint8_t index = 0;

      for(index =0; index < MAX_TIMER_TASK_LIST; index++)
      {
          if(timer_info[index].handle == TIMER_INVALID_HANDLE)
          {
              break;
          }
      }

      if(index >= (uint8_t)MAX_TIMER_TASK_LIST)
        return TIMER_INVALID_HANDLE;

      timer_info[index].callback = callback;
      timer_info[index].handle = index;
      timer_info[index].value = value;
      timer_info[index].reload_value = value;
      timer_info[index].mode = mode;

      return index;
}
void txm_remove_task(uint16_t handle)
{
      if(handle > MAX_TIMER_TASK_LIST)
          return;

      if(timer_info[handle].handle != TIMER_INVALID_HANDLE)
      {
        timer_info[handle].callback = NULL;
        timer_info[handle].handle = TIMER_INVALID_HANDLE;
        timer_info[handle].value = 0;
        timer_info[handle].reload_value = 0;
        timer_info[handle].mode = 0;
      }
}
void txm_reload_task(uint16_t handle, uint16_t value)
{
    if(handle > MAX_TIMER_TASK_LIST)
          return;

    if(timer_info[handle].handle != TIMER_INVALID_HANDLE)
    {
      timer_info[handle].value = value;
      timer_info[handle].reload_value = value;
    }
}

void txm_timer_mode_change(uint16_t handle, uint8_t mode)
{
   if(handle > MAX_TIMER_TASK_LIST)
          return;

    if(timer_info[handle].handle != TIMER_INVALID_HANDLE)
    {
      timer_info[handle].mode = mode;
    }
}

void txm_perform_task(void)
{
    uint8_t index;
#if 1
    if(elpase_500ms == 0)
    {
        return;
    }

    elpase_500ms = 0;
#endif

    for(index =0; index < MAX_TIMER_TASK_LIST; index++)
    {
        if(timer_info[index].handle != TIMER_INVALID_HANDLE)
        {
            timer_info[index].value--;
        }
    }

    for(index =0; index < MAX_TIMER_TASK_LIST; index++)
    {
        if(timer_info[index].handle != TIMER_INVALID_HANDLE)
        {
            if(timer_info[index].value <= 0)
            {
                if(timer_info[index].callback != NULL)
                {
                    timer_info[index].callback();
                }

                if(timer_info[index].mode ==1)
                {
                    //reload task
                    timer_info[index].value = timer_info[index].reload_value;
                }
                else
                { 
                    //remove task
                    txm_remove_task(index);
                }
            }
        }
    }
}
