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
Remoter_bs2017hh_release.bin \

SECONDARY_SIZE += \
Remoter_bs2017hh_release.siz \


# All Target
all: Remoter_bs2017hh_release.elf secondary-outputs

# Tool invocations
Remoter_bs2017hh_release.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C Linker'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -T "C:\elipse_arm_ide\workspace_release\Remoter_bs2017hh_release\startup\STM32F103C8Tx_FLASH.ld" -Xlinker --gc-sections -Wl,-Map,"Remoter_bs2017hh_release.map" -o "Remoter_bs2017hh_release.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Remoter_bs2017hh_release.bin: Remoter_bs2017hh_release.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O binary "Remoter_bs2017hh_release.elf"  "Remoter_bs2017hh_release.bin"
	@echo 'Finished building: $@'
	@echo ' '

Remoter_bs2017hh_release.siz: Remoter_bs2017hh_release.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "Remoter_bs2017hh_release.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS) Remoter_bs2017hh_release.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
