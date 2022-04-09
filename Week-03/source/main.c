/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-03-29     RT-Thread    first version
 */

#include <rtthread.h>
#include<rtdevice.h>
#include<board.h>

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#define GREEN_LED GET_PIN(B, 11)
#define RED_LED GET_PIN(B,10)
#define BLUE_LED GET_PIN(B,1)

//using baremetal registers
#define RCC_BASE      0x40021000
#define GPIOC_BASE    0x40011000
#define RCC_APB2ENR   *(volatile uint32_t *)(RCC_BASE   + 0x18)
#define GPIOC_CRH     *(volatile uint32_t *)(GPIOC_BASE + 0x04)
#define GPIOC_ODR     *(volatile uint32_t *)(GPIOC_BASE + 0x0C)
// bit fields
#define RCC_IOPCEN   (1<<4)
#define GPIOC13      (1UL<<13)

int main(void)
{
    int count = 1;

    //initializing the onboard led using the registers
    RCC_APB2ENR |= RCC_IOPCEN;
    GPIOC_CRH &= 0xFF0FFFFF;
    GPIOC_CRH |= 0x00200000;

    rt_pin_mode(GREEN_LED, PIN_MODE_OUTPUT);
    rt_pin_mode(RED_LED, PIN_MODE_OUTPUT);
    rt_pin_mode(BLUE_LED, PIN_MODE_OUTPUT);

    while (count++)
    {
        LOG_D("Hello RT-Thread!");

        rt_pin_write(GREEN_LED, PIN_HIGH);
        GPIOC_ODR |= GPIOC13;
        rt_thread_mdelay(500);
        rt_pin_write(RED_LED, PIN_HIGH);
        GPIOC_ODR &= ~GPIOC13;

        rt_thread_mdelay(500);
        rt_pin_write(BLUE_LED, PIN_HIGH);
        rt_thread_mdelay(500);
        //turning leds off
        rt_pin_write(GREEN_LED, PIN_LOW);
        rt_thread_mdelay(500);
        rt_pin_write(RED_LED, PIN_LOW);
        rt_thread_mdelay(500);
        rt_pin_write(BLUE_LED, PIN_LOW);
        rt_thread_mdelay(500);

        //Blink led 13
        //for (int i = 0; i < 500000; i++) ; // arbitrary delay


    }

    return RT_EOK;
}
