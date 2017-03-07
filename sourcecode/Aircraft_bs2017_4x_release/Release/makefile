################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Bspilot_Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
Aircraft_bs2017_4x_release.bin \

SECONDARY_SIZE += \
Aircraft_bs2017_4x_release.siz \


# All Target
all: Aircraft_bs2017_4x_release.elf secondary-outputs

# Tool invocations
Aircraft_bs2017_4x_release.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C Linker'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -T "C:\elipse_arm_ide\workspace_release\Aircraft_bs2017_4x_release\startup\STM32F103RCYx_FLASH.ld" -Xlinker --gc-sections -Wl,-Map,"Aircraft_bs2017_4x_release.map" -o "Aircraft_bs2017_4x_release.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Aircraft_bs2017_4x_release.bin: Aircraft_bs2017_4x_release.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O binary "Aircraft_bs2017_4x_release.elf"  "Aircraft_bs2017_4x_release.bin"
	@echo 'Finished building: $@'
	@echo ' '

Aircraft_bs2017_4x_release.siz: Aircraft_bs2017_4x_release.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "Aircraft_bs2017_4x_release.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS) Aircraft_bs2017_4x_release.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
