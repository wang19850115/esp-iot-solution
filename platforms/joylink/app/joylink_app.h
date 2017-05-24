#ifndef JOYLINK_APP_H
#define JOYLINK_APP_H
#include "sdkconfig.h"

#if CONFIG_CLOUD_JOYLINK
#define JOYLINK_BLE_ENABLE        CONFIG_JOYLINK_BLE_ENABLE
#define JOYLINK_BLE_BUTTON_ENABLE CONFIG_JOYLINK_BLE_BUTTON_ENABLE
#define JOYLINK_BLE_BUTTON_NUM    CONFIG_JOYLINK_BLE_BUTTON_NUM
#define JOYLINK_SMNT_BUTTON_NUM   CONFIG_JOYLINK_SMNT_BUTTON_NUM
#define JOYLINK_RESET_BUTTON_NUM  CONFIG_JOYLINK_RESET_BUTTON_NUM
#else
#define JOYLINK_BLE_ENABLE        (0)
#define JOYLINK_BLE_BUTTON_ENABLE (0)
#define JOYLINK_BLE_BUTTON_NUM    (13)
#define JOYLINK_SMNT_BUTTON_NUM   (14)
#define JOYLINK_RESET_BUTTON_NUM  (15)
#endif

#endif


