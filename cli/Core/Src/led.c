#include "led.h"
#include "main.h"

// physical pin maps
const LED LED_RED   = {GPIOC, GPIO_PIN_13};
const LED LED_GREEN = {GPIOC, GPIO_PIN_14};

void LEDinit(LED led)
{
    __HAL_RCC_GPIOC_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct;

    GPIO_InitStruct.Pin = led.pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;

    HAL_GPIO_Init(led.port, &GPIO_InitStruct);
}
