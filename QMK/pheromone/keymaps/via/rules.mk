MCU = atmega32u4
BOOTLOADER = qmk-dfu

MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
LTO_ENABLE = yes
ENCODER_ENABLE = yes
OLED_DRIVER_ENABLE = yes
SRC += analog.c
VIA_ENABLE = yes
