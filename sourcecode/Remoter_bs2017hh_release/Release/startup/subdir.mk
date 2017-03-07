################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../startup/startup_stm32f103xb.S 

OBJS += \
./startup/startup_stm32f103xb.o 

S_UPPER_DEPS += \
./startup/startup_stm32f103xb.d 


# Each subdirectory must supply rules for building sources it contributes
startup/startup_stm32f103xb.o: C:/elipse_arm_ide/workspace_release/Remoter_bs2017hh_release/startup/startup_stm32f103xb.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


