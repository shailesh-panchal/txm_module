#ifndef TXM_TIMER_H
#define TXM_TIMER_H

#ifdef __cplusplus
extern "C" {
#endif


#include <stdbool.h>
#include <stdint.h>
#include "txm_board.h"  


#define TIMER_INVALID_HANDLE 0xFF

typedef struct
{
    uint16_t handle;
    uint16_t value;
    uint8_t mode; //0 single time ,  1 = reload after expire
    uint16_t reload_value;
    void (*callback) (void);
}txm_timer_info_t;

uint8_t txm_timer_init(void);
uint16_t txm_add_task(uint16_t value,uint8_t mode, void (*callback) (void));
void txm_remove_task(uint16_t handle);
void txm_timer_mode_change(uint16_t handle, uint8_t mode);
void txm_reload_task(uint16_t handle, uint16_t value);
void txm_perform_task(void);

#ifdef __cplusplus
}
#endif

#endif // TXM_TIMER_H
