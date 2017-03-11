################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Bspilot_Src/bs4x_ble.c \
../Bspilot_Src/bs4x_button.c \
../Bspilot_Src/bs4x_event.c \
../Bspilot_Src/bs4x_led.c \
../Bspilot_Src/bs4x_mpu6050.c \
../Bspilot_Src/bs4x_nrf.c 

OBJS += \
./Bspilot_Src/bs4x_ble.o \
./Bspilot_Src/bs4x_button.o \
./Bspilot_Src/bs4x_event.o \
./Bspilot_Src/bs4x_led.o \
./Bspilot_Src/bs4x_mpu6050.o \
./Bspilot_Src/bs4x_nrf.o 

C_DEPS += \
./Bspilot_Src/bs4x_ble.d \
./Bspilot_Src/bs4x_button.d \
./Bspilot_Src/bs4x_event.d \
./Bspilot_Src/bs4x_led.d \
./Bspilot_Src/bs4x_mpu6050.d \
./Bspilot_Src/bs4x_nrf.d 


# Each subdirectory must supply rules for building sources it contributes
Bspilot_Src/bs4x_ble.o: C:/elipse_arm_ide/workspace_release/Aircraft_bs2017_4x_release/Bspilot_Src/bs4x_ble.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xE -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bs4x_button.o: C:/elipse_arm_ide/workspace_release/Aircraft_bs2017_4x_release/Bspilot_Src/bs4x_button.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xE -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bs4x_event.o: C:/elipse_arm_ide/workspace_release/Aircraft_bs2017_4x_release/Bspilot_Src/bs4x_event.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xE -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bs4x_led.o: C:/elipse_arm_ide/workspace_release/Aircraft_bs2017_4x_release/Bspilot_Src/bs4x_led.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xE -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bs4x_mpu6050.o: C:/elipse_arm_ide/workspace_release/Aircraft_bs2017_4x_release/Bspilot_Src/bs4x_mpu6050.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xE -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bs4x_nrf.o: C:/elipse_arm_ide/workspace_release/Aircraft_bs2017_4x_release/Bspilot_Src/bs4x_nrf.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xE -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


