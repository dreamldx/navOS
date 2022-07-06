//
// Created by dreamldx on 7/6/2022.
//

#ifndef NAVOS_TARGET_H
#define NAVOS_TARGET_H


#define TARGET_BOARD_IDENTIFIER "H743"
#define USBD_PRODUCT_STRING     "MATEKH743"

#define USE_TARGET_CONFIG

#define LED0                    PE3
#define LED1                    PE4

#define BEEPER                  PA15
#define BEEPER_INVERTED
#define BEEPER_PWM_FREQUENCY    2500

// *************** IMU generic ***********************
#define USE_DUAL_GYRO
#define USE_TARGET_IMU_HARDWARE_DESCRIPTORS

#define USE_EXTI
#define USE_MPU_DATA_READY_SIGNAL

// *************** SPI1 IMU0 MPU6000 ****************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PD7

#define USE_IMU_MPU6000

#define IMU_MPU6000_ALIGN       CW0_DEG_FLIP
#define MPU6000_SPI_BUS          BUS_SPI1
#define MPU6000_CS_PIN          PC15
#define MPU6000_EXTI_PIN        PB2

// *************** SPI4 IMU1  ICM20602 **************
#define USE_SPI_DEVICE_4
#define SPI4_SCK_PIN            PE12
#define SPI4_MISO_PIN           PE13
#define SPI4_MOSI_PIN           PE14

#define USE_IMU_MPU6500

#define IMU_MPU6500_ALIGN       CW0_DEG_FLIP
#define MPU6500_SPI_BUS         BUS_SPI4
#define MPU6500_CS_PIN          PE11
#define MPU6500_EXTI_PIN        PE15

// *************** SPI4 IMU2 ICM42605 **************
#define USE_IMU_ICM42605

#define IMU_ICM42605_ALIGN      CW90_DEG_FLIP
#define ICM42605_SPI_BUS        BUS_SPI4
#define ICM42605_CS_PIN         PC13
#define ICM42605_EXTI_PIN       PC14


// *************** SPI2 OSD ***********************
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PB12

// *************** SPI3 SPARE for external RM3100 ***********
#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

#define USE_MAG_RM3100
#define RM3100_CS_PIN           PE2   //CS2 pad
//                              PD4   //CS1 pad
#define RM3100_SPI_BUS          BUS_SPI3

// *************** I2C /Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C2
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_DPS310
#define USE_BARO_SPL06

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define TEMPERATURE_I2C_BUS     BUS_I2C2
#define PITOT_I2C_BUS           BUS_I2C2

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C1

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PD5
#define UART2_RX_PIN            PD6

#define USE_UART3
#define UART3_TX_PIN            PD8
#define UART3_RX_PIN            PD9

#define USE_UART4
#define UART4_TX_PIN            PB9
#define UART4_RX_PIN            PB8

#define USE_UART6
#define UART6_TX_PIN            PC6
#define UART6_RX_PIN            PC7

#define USE_UART7
#define UART7_TX_PIN            PE8
#define UART7_RX_PIN            PE7

#define USE_UART8
#define UART8_TX_PIN            PE1
#define UART8_RX_PIN            PE0

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN      PC6  //TX6 pad
#define SOFTSERIAL_1_RX_PIN      PC6  //TX6 pad

#define SERIAL_PORT_COUNT       9

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART6

// *************** SDIO SD BLACKBOX*******************
#define USE_SDCARD
#define USE_SDCARD_SDIO
#define SDCARD_SDIO_DEVICE      SDIODEV_1
#define SDCARD_SDIO_4BIT

#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1

#define ADC_CHANNEL_1_PIN           PC0  //ADC123 VBAT1
#define ADC_CHANNEL_2_PIN           PC1  //ADC123 CURR1
#define ADC_CHANNEL_3_PIN           PC5  //ADC12  RSSI
#define ADC_CHANNEL_4_PIN           PC4  //ADC12  AirS
#define ADC_CHANNEL_5_PIN           PA4  //ADC12  VB2
#define ADC_CHANNEL_6_PIN           PA7  //ADC12  CU2

#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3
#define AIRSPEED_ADC_CHANNEL        ADC_CHN_4

// *************** PINIO ***************************
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PD10  // VTX power switcher
#define PINIO2_PIN                  PD11  // 2xCamera switcher

// *************** LEDSTRIP ************************
#define USE_LED_STRIP
#define WS2811_PIN                  PA8

#define DEFAULT_FEATURES            (FEATURE_OSD | FEATURE_TELEMETRY | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TX_PROF_SEL | FEATURE_BLACKBOX)
#define CURRENT_METER_SCALE         250

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff

#define MAX_PWM_OUTPUT_PORTS        15
#define USE_DSHOT
#define USE_ESC_SENSOR


//DEF_TIM(TIM3, CH3, PB0, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),   // S1
//DEF_TIM(TIM3, CH4, PB1, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 1),   // S2
//
//DEF_TIM(TIM5, CH1, PA0, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 2),   // S3
//DEF_TIM(TIM5, CH2, PA1, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 3),   // S4
//DEF_TIM(TIM5, CH3, PA2, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 4),   // S5
//DEF_TIM(TIM5, CH4, PA3, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 5),   // S6
//
//DEF_TIM(TIM4, CH1, PD12, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 6),   // S7
//DEF_TIM(TIM4, CH2, PD13, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 7),   // S8
//DEF_TIM(TIM4, CH3, PD14, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0),   // S9
//DEF_TIM(TIM4, CH4, PD15, TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO, 0, 0),   // S10 DMA_NONE
//
//DEF_TIM(TIM15, CH1, PE5, TIM_USE_MC_SERVO | TIM_USE_FW_SERVO, 0, 0),   // S11
//DEF_TIM(TIM15, CH2, PE6, TIM_USE_MC_SERVO | TIM_USE_FW_SERVO, 0, 0),   // S12 DMA_NONE
//
//DEF_TIM(TIM1,  CH1, PA8,  TIM_USE_LED, 0, 9),    // LED_2812
//DEF_TIM(TIM2,  CH1, PA15, TIM_USE_BEEPER, 0, 0),  // BEEPER PWM
//
//DEF_TIM(TIM8,  CH2, PC7,  TIM_USE_PPM, 0, 0),   // RX6 PPM
//DEF_TIM(TIM8,  CH1, PC6,  TIM_USE_ANY, 0, 0),   // TX6
//DEF_TIM(TIM16, CH1, PB8,  TIM_USE_ANY, 0, 0),   // RX4
//DEF_TIM(TIM17, CH1, PB9,  TIM_USE_ANY, 0, 0),   // TX4
#endif //NAVOS_TARGET_H
