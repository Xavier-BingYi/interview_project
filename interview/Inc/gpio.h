/*
 * gpio.h
 *
 *  Created on: Aug 30, 2024
 *      Author: Xavier
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <stdint.h>

#define RCC_REGISTER 0x40023800
#define CRC_REGISTER 0x40023000
#define GPIO_PORT_K 0x40022800
#define GPIO_PORT_J 0x40022400
#define GPIO_PORT_I 0x40022000
#define GPIO_PORT_H 0x40021C00
#define GPIO_PORT_G 0x40021800
#define GPIO_PORT_F 0x40021400
#define GPIO_PORT_E 0x40021000
#define GPIO_PORT_D 0x40020C00
#define GPIO_PORT_C 0x40020800
#define GPIO_PORT_B 0x40020400
#define GPIO_PORT_A 0x40020000

#define RCC_AHB1_ENR 0X30

#define INIT_PORT_K 0x400
#define INIT_PORT_J 0x200
#define INIT_PORT_I 0x100
#define INIT_PORT_H 0x080
#define INIT_PORT_G 0x040
#define INIT_PORT_F 0x020
#define INIT_PORT_E 0x010
#define INIT_PORT_D 0x008
#define INIT_PORT_C 0x004
#define INIT_PORT_B 0x002
#define INIT_PORT_A 0x001

#define GPIO_MODE 0x00
#define GPIO_OUTPUT_DATA 0x14
#define GPIO_PULL 0x0C
#define GPIO_LOW_ALTERNATE 0x20
#define GPIO_HIGH_ALTERNATE 0x24

#define GPIO_PIN_15 15
#define GPIO_PIN_14 14
#define GPIO_PIN_13 13
#define GPIO_PIN_12 12
#define GPIO_PIN_11 11
#define GPIO_PIN_10 10
#define GPIO_PIN_9  9
#define GPIO_PIN_8  8
#define GPIO_PIN_7  7
#define GPIO_PIN_6  6
#define GPIO_PIN_5  5
#define GPIO_PIN_4  4
#define GPIO_PIN_3  3
#define GPIO_PIN_2  2
#define GPIO_PIN_1  1
#define GPIO_PIN_0  0

#define GPIO_INPUT     0  // Input (reset state)
#define GPIO_OUTPUT    1  // General purpose output mode
#define GPIO_ALTERNATE 2  // Alternate function mode
#define GPIO_ANALOG    3  // Analog mode

#define GPIO_LOW_VAL  0
#define GPIO_HIGH_VAL 1

#define GPIO_NO_PULL   0
#define GPIO_PULL_UP   1
#define GPIO_PULL_DOWN 2

#define AF0  0
#define AF1  1
#define AF2  2
#define AF3  3
#define AF4  4
#define AF5  5
#define AF6  6
#define AF7  7
#define AF8  8
#define AF9  9
#define AF10 10
#define AF11 11
#define AF12 12
#define AF13 13
#define AF14 14
#define AF15 15



void io_write(register uint32_t addr, register uint32_t val);
uint32_t io_read(register uint32_t addr);
int gpio_init(int port_offset);
int gpio_set_dir(int port_add , int pin , int mode);
int gpio_set_data(int port_add , int pin , int data);
int gpio_pull(int port_add , int pin , int pull_mode);


#endif /* GPIO_H_ */