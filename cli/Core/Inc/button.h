#ifndef _BUTTON_H_
#define _BUTTON_H_

#include "stm32f1xx_hal.h"

typedef struct
{
    GPIO_TypeDef* port;
    uint16_t pin;
} BTN;

extern const BTN BTN_USER;

void BTNinit(BTN btn);

#endif
