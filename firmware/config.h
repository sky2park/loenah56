#pragma once

#define OLED_FONT_H "keyboards/loenah/lib/glcdfont.c"

#define EE_HANDS											// Flash handedness to each side (-bl uf2-split-left/right)
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET 					// Enable double-tapping reset button to enter bootloader mode
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U		// How quickly reset button must be tapped to enter bootloader mode

#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 1
#define BOOTMAGIC_ROW_RIGHT 5
#define BOOTMAGIC_COLUMN_RIGHT 4

#define SERIAL_USART_FULL_DUPLEX    						// USART full duplex
#define SERIAL_USART_TX_PIN GP0     						// USART TX pin
#define SERIAL_USART_RX_PIN GP1     						// USART RX pin

#define I2C_DRIVER I2CD0									// I2C driver for oled display
#define I2C1_SDA_PIN GP8									// Oled display SDA pin
#define I2C1_SCL_PIN GP9									// Oled display SCL pin

#define SPLIT_WPM_ENABLE

#define SECOND_TO_MS 1000 // 1 seconds & 1000 milliseconds

#ifdef OLED_ENABLE
	#define OLED_TIMEOUT 90 * SECOND_TO_MS  // 1.5 minutes of no activity to turn OLED off
#endif