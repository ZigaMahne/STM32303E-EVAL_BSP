/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 18/04/2025 08:48:14
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ CAN            -----------------------------*/
#define MX_CAN                                  1

/* Pins */

/* CAN_RX */
#define MX_CAN_RX_Pin                           PD0
#define MX_CAN_RX_GPIO_Pin                      GPIO_PIN_0
#define MX_CAN_RX_GPIOx                         GPIOD
#define MX_CAN_RX_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_CAN_RX_GPIO_PuPd                     GPIO_NOPULL
#define MX_CAN_RX_GPIO_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_CAN_RX_GPIO_AF                       GPIO_AF7_CAN

/* CAN_TX */
#define MX_CAN_TX_Pin                           PD1
#define MX_CAN_TX_GPIO_Pin                      GPIO_PIN_1
#define MX_CAN_TX_GPIOx                         GPIOD
#define MX_CAN_TX_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_CAN_TX_GPIO_PuPd                     GPIO_NOPULL
#define MX_CAN_TX_GPIO_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_CAN_TX_GPIO_AF                       GPIO_AF7_CAN

/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                 1

/* Filter Settings */
#define MX_I2C2_ANF_ENABLE                      1
#define MX_I2C2_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C2_PERIPH_CLOCK_FREQ               8000000

/* Pins */

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                         PF6
#define MX_I2C2_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C2_SCL_GPIOx                       GPIOF
#define MX_I2C2_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SCL_GPIO_AF                     GPIO_AF4_I2C2

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                         PA10
#define MX_I2C2_SDA_GPIO_Pin                    GPIO_PIN_10
#define MX_I2C2_SDA_GPIOx                       GPIOA
#define MX_I2C2_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SDA_GPIO_AF                     GPIO_AF4_I2C2

/*------------------------------ SPI2           -----------------------------*/
#define MX_SPI2                                 1

/* Pins */

/* SPI2_MISO */
#define MX_SPI2_MISO_Pin                        PB14
#define MX_SPI2_MISO_GPIO_Pin                   GPIO_PIN_14
#define MX_SPI2_MISO_GPIOx                      GPIOB
#define MX_SPI2_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MISO_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_MOSI */
#define MX_SPI2_MOSI_Pin                        PB15
#define MX_SPI2_MOSI_GPIO_Pin                   GPIO_PIN_15
#define MX_SPI2_MOSI_GPIOx                      GPIOB
#define MX_SPI2_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MOSI_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_SCK */
#define MX_SPI2_SCK_Pin                         PF9
#define MX_SPI2_SCK_GPIO_Pin                    GPIO_PIN_9
#define MX_SPI2_SCK_GPIOx                       GPIOF
#define MX_SPI2_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI2_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI2_SCK_GPIO_AF                     GPIO_AF5_SPI2

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PE1
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_1
#define MX_USART1_RX_GPIOx                      GPIOE
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PC4
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_4
#define MX_USART1_TX_GPIOx                      GPIOC
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                  1

/* Handle */
#define MX_USB_HANDLE                           hpcd_USB_FS


#endif  /* MX_DEVICE_H__ */
