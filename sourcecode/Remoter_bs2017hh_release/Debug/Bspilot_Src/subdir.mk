################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Bspilot_Src/bshh_led.c \
../Bspilot_Src/bshh_main.c 

OBJS += \
./Bspilot_Src/bshh_led.o \
./Bspilot_Src/bshh_main.o 

C_DEPS += \
./Bspilot_Src/bshh_led.d \
./Bspilot_Src/bshh_main.d 


# Each subdirectory must supply rules for building sources it contributes
Bspilot_Src/bshh_led.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_led.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Bspilot_Src/bshh_main.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Bspilot_Src/bshh_main.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


