################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/nxp/KSDKv2-FRDM-K64F-ALL/boards/frdmk64f/demo_apps/bubble/bubble.c 

OBJS += \
./source/bubble.o 

C_DEPS += \
./source/bubble.d 


# Each subdirectory must supply rules for building sources it contributes
source/bubble.o: C:/nxp/KSDKv2-FRDM-K64F-ALL/boards/frdmk64f/demo_apps/bubble/bubble.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -DDEBUG -DCPU_MK64FN1M0VMD12 -DFRDM_K64F -DFREEDOM -I../ -I../../../../../../CMSIS/Include -I../../../../../../devices -I../../../../../../devices/MK64F12/drivers -I../.. -I../../../../../../devices/MK64F12/utilities -I../../../.. -I../../../../../../devices/MK64F12 -std=gnu99 -fno-common  -ffreestanding  -fno-builtin  -mapcs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


