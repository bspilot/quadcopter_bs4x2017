################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/stm32f1xx_hal_msp.c \
../Src/stm32f1xx_it.c \
../Src/system_stm32f1xx.c 

OBJS += \
./Src/main.o \
./Src/stm32f1xx_hal_msp.o \
./Src/stm32f1xx_it.o \
./Src/system_stm32f1xx.o 

C_DEPS += \
./Src/main.d \
./Src/stm32f1xx_hal_msp.d \
./Src/stm32f1xx_it.d \
./Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/main.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Src/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/stm32f1xx_hal_msp.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Src/stm32f1xx_hal_msp.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/stm32f1xx_it.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Src/stm32f1xx_it.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/system_stm32f1xx.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/Src/system_stm32f1xx.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F103xB -DUSE_HAL_DRIVER -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Device\ST\STM32F1xx\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\CMSIS\Include" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Drivers\STM32F1xx_HAL_Driver\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Inc" -I"C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\Bspilot_Src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


