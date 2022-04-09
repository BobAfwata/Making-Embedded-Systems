/*
 * 
 * 
 *
 * Change Logs:
 * Date           Author       Bob Afwata
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

int main(void)
{
    int count = 1;

    rt_pin_mode(GREEN_LED, PIN_MODE_OUTPUT);
    rt_pin_mode(RED_LED, PIN_MODE_OUTPUT);
    rt_pin_mode(BLUE_LED, PIN_MODE_OUTPUT);

    while (count++)
    {
        LOG_D("Hello RT-Thread!");

        rt_pin_write(GREEN_LED, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(RED_LED, PIN_HIGH);
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
    }

    return RT_EOK;
}
