#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    LUANTY
#define PRODUCT         PHEROMONE
#define DESCRIPTION     SEX PHEROMONE

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B3, B2, B1, B0, E6 }
#define MATRIX_COL_PINS { D3, D5, D4, D6, D7, B4, B5, B6, C6, C7, F7, F6, F4, F1, F0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define OLED_ENABLE
#define OLED_FONT_H "keymaps/via/glcdfont.c"

#define ENCODERS_ENABLE
#define ENCODERS_PAD_A { B7 }
#define ENCODERS_PAD_B { D2 }
#define ENCODER_RESOLUTION 4

#define POT_ENABLE
#define POT_MINTIME 40
#define POT_MAXTIME 500
#define POT_CENTER_TOLERANCE 15


