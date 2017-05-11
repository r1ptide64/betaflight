/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define TARGET_BOARD_IDENTIFIER "CLR7"

#define USBD_PRODUCT_STRING "CL_RACING F7"

#define LED0                    PB0
#define BEEPER                  PB4
#define BEEPER_INVERTED

#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_INSTANCE    SPI1
#define ACC
#define USE_ACC_SPI_MPU6000
#define GYRO
#define USE_GYRO_SPI_MPU6000

// MPU6000 interrupts
#define USE_EXTI
#define MPU_INT_EXTI            PC4
#define USE_MPU_DATA_READY_SIGNAL
#define GYRO_MPU6000_ALIGN      CW0_DEG
#define ACC_MPU6000_ALIGN       CW0_DEG

#define OSD
#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI3
#define MAX7456_SPI_CS_PIN      PA15
#define MAX7456_SPI_CLK         (SPI_CLOCK_STANDARD*2)
#define MAX7456_RESTORE_CLK     (SPI_CLOCK_FAST)

#define USE_SDCARD
#define SDCARD_DETECT_PIN                   PB7
#define SDCARD_SPI_INSTANCE                 SPI2
#define SDCARD_SPI_CS_PIN                   SPI2_NSS_PIN

#define SDCARD_SPI_INITIALIZATION_CLOCK_DIVIDER 256 // 422kHz
// Divide to under 25MHz for normal operation:
#define SDCARD_SPI_FULL_SPEED_CLOCK_DIVIDER 8 // 27MHz

#define SDCARD_DMA_CHANNEL_TX               DMA1_Stream4
#define SDCARD_DMA_CHANNEL_TX_COMPLETE_FLAG DMA_FLAG_TCIF1_5
#define SDCARD_DMA_CLK                      RCC_AHB1Periph_DMA2
#define SDCARD_DMA_CHANNEL                  DMA_CHANNEL_0


#define USE_VCP
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       5

#define USE_I2C

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3

#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define SPI3_NSS_PIN            PA15
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12


#define USE_ADC
#define BOARD_HAS_VOLTAGE_DIVIDER
#define BOARD_HAS_CURRENT_SENSOR
#define CURRENT_METER_ADC_PIN   PC1
#define VBAT_ADC_PIN            PC2
#define RSSI_ADC_PIN            PC3

#define CURRENT_METER_SCALE_DEFAULT 250                     // 3/120A  = 25mv/A

// LED strip configuration.
#define LED_STRIP
#define SPEKTRUM_BIND_PIN       UART6_RX_PIN
#define BINDPLUG_PIN            PB2

#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_UART           SERIAL_PORT_USART6

#define TELEMETRY_UART          SERIAL_PORT_USART1

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define USABLE_TIMER_CHANNEL_COUNT      9
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) | TIM_N(8) )
