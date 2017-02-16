################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Bspilot_Src/bshh_adc.c \
../Bspilot_Src/bshh_beep.c \
../Bspilot_Src/bshh_ble.c \
../Bspilot_Src/bshh_ctrl.c \
../Bspilot_Src/bshh_event.c \
../Bspilot_Src/bshh_led.c \
../Bspilot_Src/bshh_oled.c 

OBJS += \
./Bspilot_Src/bshh_adc.o \
./Bspilot_Src/bshh_beep.o \
./Bspilot_Src/bshh_ble.o \
./Bspilot_Src/bshh_ctrl.o \
./Bspilot_Src/bshh_event.o \
./Bspilot_Src/bshh_led.o \
./Bspilot_Src/bshh_oled.o 

C_DEPS += \
./Bspilot_Src/bshh_adc.d \
./Bspilot_Src/bshh_beep.d \
./Bspilot_Src/bshh_ble.d \
./Bspilot_Src/bshh_ctrl.d \
./Bspilot_Src/bshh_event.d \
./Bspilot_Src/bshh_led.d \
./Bspilot_Src/bshh_oled.d 


# Each subdirectory must supply rules for building sources it contributes
Bspilot_Src/bshh_adc.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_adc.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bshh_beep.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_beep.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bshh_ble.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_ble.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bshh_ctrl.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_ctrl.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bshh_event.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_event.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bshh_led.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_led.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bshh_oled.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_oled.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


