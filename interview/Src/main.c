/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

void io_write(register uint32_t addr, register uint32_t val) {
    /**
     * r is put the value to general register
     * Qo is let the input be memory address, arm specific
     */
    asm volatile("str %1, %0"
            : : "Qo" (*(volatile uint32_t *) addr), "r" (val));
}

uint32_t io_read(register uint32_t addr) {
    /**
     * r is put the value to general register
     * Qo is let the input be memory address, arm specific
     */
	uint32_t val;
    asm volatile("ldr %0, %1"
            : "=r" (val)
            : "Qo" (*(volatile uint32_t *) addr));
    return val;
}


int main(void)
{
	io_write(0x40023800 + 0x30, 0x40);  // IO port G clock enabled
	//io_write(0x40021800 + 0x18, 0x2000);  // PG13 set bit
	io_write(0x40021800 + 0x14, 0x2000);  // PG13 set bit
	io_write(0x40021800 + 0x00, 0x4000000);  // PG13 set output mode
	//io_write(0x40021800 + 0x0C, 0x0);  // PG13 set No pull-up, pull-down
	//io_write(0x40021800 + 0x08, 0x0);  // PG13 set Low speed

	while(1){
	}
    /* Loop forever */
	for(;;);
}
