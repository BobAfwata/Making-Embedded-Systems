# Week 3 Assignment


## Development board : STM32F103C8T6 aka Bluepill

# Hardware Block Diagram of STM32F103C8T6
![](assets/bluepill.png)

# Setting Up Development Environment

RT thread studio is an eclipse based IDE for programming microcontrollers 



# Blinking Leds
Using RT thread api you assign the leds the port and number as shown below 

#define GREEN_LED GET_PIN(B, 11)
#define RED_LED GET_PIN(B,10)
#define BLUE_LED GET_PIN(B,1)

The GET_PIN(port,pin_number) macro takes in the port and the pin number 

The leds pin modes are then setup as OUTPUTS using the special rt_pin_mode() function.
rt_pin_mode(GREEN_LED, PIN_MODE_OUTPUT);
rt_pin_mode(RED_LED, PIN_MODE_OUTPUT);
rt_pin_mode(BLUE_LED, PIN_MODE_OUTPUT);

In the loop finally you blink the leds using the  rt_pin_write()
rt_pin_write(GREEN_LED, PIN_HIGH); to turn on led 

rt_pin_write(GREEN_LED, PIN_LOW); to turn off led 
Delay is realized using the rt_thread_mdelay()  to delay in milliseconds

rt_thread_mdelay(500);

![](assets/leds.mp4)
![](assets/blink.png)
![](assets/blink2.png)


# Video link
