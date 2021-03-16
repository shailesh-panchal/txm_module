#ifndef TXM_UART_H
#define TXM_UART_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include "txm_board.h"

typedef struct
{
  uint16_t timer_task;
}txm_uart_info_t;


void txm_uart_init(void);


#ifdef __cplusplus
}
#endif

#endif // TXM_UART_H
