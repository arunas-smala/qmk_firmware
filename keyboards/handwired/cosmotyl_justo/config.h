#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26, GP22 }
#define MATRIX_COL_PINS { GP7, GP6, GP5, GP4, GP3, GP2 }

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // This LED blinks when entering bootloader

// TODO: OLED, SCL=GP19 SDA=GP18
