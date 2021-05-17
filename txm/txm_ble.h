#ifndef TXM_BLE_H
#define TXM_BLE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include "txm_board.h"

typedef struct
{
  uint16_t timer_task;
  uint16_t pending_timer_task;
}txm_ble_info_t;


uint8_t txm_ble_init(void);
uint8_t txm_ble_advertising_start(void);
void txm_ble_advertising_stop(void);
uint8_t txm_send_data_over_ble(char *data, uint32_t len);
uint8_t txm_ble_advertising_restart(void);
void txm_ble_disconnect_from_peer(void);
uint8_t is_txm_ble_peer_connected(void);


#ifdef __cplusplus
}
#endif

#endif // TXM_BLE_H
