#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP22, GP14, GP15, GP13, GP12 }
#define MATRIX_COL_PINS { GP16, GP17, GP18, GP19, GP20, GP21 }

#define MATRIX_ROW_PINS_RIGHT { GP12, GP21, GP15, GP14, GP13 }
#define MATRIX_COL_PINS_RIGHT { GP22, GP20, GP19, GP18, GP17, GP16 }

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader