//
// Created by nethe on 11/9/2022.
//
//#define PRODUCT_ID 0x0001

#ifndef WYLD_QMK_FIRMWARE_CONFIG_H
#define WYLD_QMK_FIRMWARE_CONFIG_H

#endif // WYLD_QMK_FIRMWARE_CONFIG_H

// Dactyl Manuform Hotswap
#pragma once

#include "config_common.h"
// Basic Config

#define SPLIT_HAND_PIN      GP26  // high = left, low = right























































































































































































































































































































































































































































#define SPLIT_POINTING_ENABLE
//#define POINTING_DEVICE_INVERT_Y     // works on left COMMENTED OUT
//#define ROTATIONAL_TRANSFORM_ANGLE  25 // works on leftb
#define POINTING_DEVICE_COMBINED



#define POINTING_DEVICE_ROTATION_90
//#define POINTING_DEVICE_ROTATION_90_RIGHT // TESTING RIGHT COMMENTED OUT
#define ROTATIONAL_TRANSFORM_ANGLE  -45 // TESTING RIGHT SHIFTED FROM -35 TO -45 TO TEST LEFT
#define POINTING_DEVICE_INVERT_Y_RIGHT
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X
//#define POINTING_DEVICE_INVERT_X_RIGHT
#define PMW33XX_CS_PIN GP21
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02

//#define POINTING_DEVICE_DEBUG

// Using Serial instead of I2C
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600
//#define SERIAL_USART_PIN_SWAP

// RP2040 Settings
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U
// More RP2040 Settings
#define RP2040_FLASH_AT25SF128A
#define RP2040_FLASH_GD25Q64CS
#define RP2040_FLASH_W25X10CL
#define RP2040_FLASH_IS25LP080
#define RP2040_FLASH_GENERIC_03H
/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 7

#define MATRIX_COL_PINS { GP2, GP3, GP4, GP5, GP6, GP7, GP8 }
#define MATRIX_ROW_PINS { GP9, GP10, GP11, GP12, GP13, GP14, GP15 }
#define DIODE_DIRECTION COL2ROW

//#    define MASTER_RIGHT
#    define SPLIT_MODS_ENABLE
#    define SPLIT_WPM_ENABLE
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_OLED_ENABLE
#    define SPLIT_LED_STATE_ENABLE
// End of Basic Config

#define ENCODERS_PAD_A { GP24 }
#define ENCODERS_PAD_B { GP25 }
#define ENCODER_RESOLUTIONS { 2 }

#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP16
#define I2C1_SCL_PIN GP17
#define RGBLIGHT_LAYERS
// OLED Options
#define SPLIT_OLED_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 32000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif

#ifdef RGBLIGHT_ENABLE
//#define WS2812_PIO_USE_PIO1
//#define WS2812_PIO_USE_PIO1
#define RGB_DI_PIN GP29
//#define WS2812_EXTERNAL_PULLUP
#define RGBLED_NUM 36
//#define DRIVER_LED_TOTAL 24
#define RGBLED_SPLIT { 18, 18 }
#define RGBLIGHT_SPLIT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_LIMIT_VAL 255
//#define STM32_SYSCLK KINETIS_SYSCLK_FREQUENCY
#define NOP_FUDGE 0.4  // may not be needed if ws driver loaded
#endif