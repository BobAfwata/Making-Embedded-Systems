################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/thirdparty/console.c \
../Core/thirdparty/consoleCommands.c \
../Core/thirdparty/consoleIo.c 

OBJS += \
./Core/thirdparty/console.o \
./Core/thirdparty/consoleCommands.o \
./Core/thirdparty/consoleIo.o 

C_DEPS += \
./Core/thirdparty/console.d \
./Core/thirdparty/consoleCommands.d \
./Core/thirdparty/consoleIo.d 


# Each subdirectory must supply rules for building sources it contributes
Core/thirdparty/%.o Core/thirdparty/%.su: ../Core/thirdparty/%.c Core/thirdparty/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-thirdparty

clean-Core-2f-thirdparty:
	-$(RM) ./Core/thirdparty/console.d ./Core/thirdparty/console.o ./Core/thirdparty/console.su ./Core/thirdparty/consoleCommands.d ./Core/thirdparty/consoleCommands.o ./Core/thirdparty/consoleCommands.su ./Core/thirdparty/consoleIo.d ./Core/thirdparty/consoleIo.o ./Core/thirdparty/consoleIo.su

.PHONY: clean-Core-2f-thirdparty

