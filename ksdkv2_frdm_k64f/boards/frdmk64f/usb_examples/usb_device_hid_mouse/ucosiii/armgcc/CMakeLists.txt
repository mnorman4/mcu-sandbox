INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_DEBUG=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK64FN1M0VMD12")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_STACK_UCOSIII")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFSL_RTOS_UCOSIII")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFRDM_K64F")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFREEDOM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D_DEBUG=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK64FN1M0VMD12")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_STACK_UCOSIII")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFSL_RTOS_UCOSIII")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFRDM_K64F")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFREEDOM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Ports/ARM-Cortex-M4/Generic/GNU)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU/ARM-Cortex-M4/GNU)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-LIB)

include_directories(${ProjDirPath}/../../../../../../devices/MK64F12/utilities)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0/osa)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0/include)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0/device)

include_directories(${ProjDirPath}/../../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../..)

include_directories(${ProjDirPath}/../../../../../../devices/MK64F12/drivers)

include_directories(${ProjDirPath}/../../../../../../devices/MK64F12)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Ports/ARM-Cortex-M4/Generic/GNU)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU/ARM-Cortex-M4/GNU)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU)

include_directories(${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-LIB)

include_directories(${ProjDirPath}/../../../../../../devices/MK64F12/utilities)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0/osa)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0/include)

include_directories(${ProjDirPath}/../../../../../../middleware/usb_1.0.0/device)

include_directories(${ProjDirPath}/../../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../..)

include_directories(${ProjDirPath}/../../../../../../devices/MK64F12/drivers)

include_directories(${ProjDirPath}/../../../../../../devices/MK64F12)

add_executable(dev_hid_mouse_ucosiii.elf 
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Ports/ARM-Cortex-M4/Generic/GNU/os_cpu.h"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Ports/ARM-Cortex-M4/Generic/GNU/os_cpu_a.S"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Ports/ARM-Cortex-M4/Generic/GNU/os_cpu_c.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU/ARM-Cortex-M4/GNU/cpu_c.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU/ARM-Cortex-M4/GNU/cpu_a.S"
"${ProjDirPath}/../../../../../../devices/MK64F12/utilities/fsl_sbrk.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/gcc/startup_MK64F12.S"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/device/usb_device_khci.c"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/device/usb_device_khci.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_uart.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_uart.c"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/osa/usb_osa.h"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/osa/usb_osa_ucosiii.h"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/osa/usb_osa_ucosiii.c"
"${ProjDirPath}/../usb_device_ch9.c"
"${ProjDirPath}/../usb_device_ch9.h"
"${ProjDirPath}/../usb_device_class.c"
"${ProjDirPath}/../usb_device_class.h"
"${ProjDirPath}/../usb_device_hid.c"
"${ProjDirPath}/../usb_device_hid.h"
"${ProjDirPath}/../mouse.c"
"${ProjDirPath}/../mouse.h"
"${ProjDirPath}/../usb_device_descriptor.c"
"${ProjDirPath}/../usb_device_descriptor.h"
"${ProjDirPath}/../usb_device_config.h"
"${ProjDirPath}/../os_cfg.h"
"${ProjDirPath}/../cpu_cfg.h"
"${ProjDirPath}/../os_cfg_app.h"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os.h"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_cfg_app.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_core.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_dbg.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_flag.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_int.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_mem.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_mon.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_msg.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_mutex.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_pend_multi.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_prio.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_q.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_sem.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_stat.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_task.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_tick.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_time.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_tmr.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_type.h"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uCOS-III/Source/os_var.c"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU/cpu_core.h"
"${ProjDirPath}/../../../../../../rtos/ucosiii_3.05.01/uC-CPU/cpu_core.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/system_MK64F12.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/system_MK64F12.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/utilities/fsl_debug_console.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/utilities/fsl_debug_console.h"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/include/usb.h"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/device/usb_device.h"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/device/usb_device_dci.c"
"${ProjDirPath}/../../../../../../middleware/usb_1.0.0/device/usb_device_dci.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_port.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_sim.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_mpu.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_mpu.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_common.c"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_gpio.c"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_smc.h"
"${ProjDirPath}/../../../../../../devices/MK64F12/drivers/fsl_smc.c"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MK64FN1M0xxx12_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MK64FN1M0xxx12_flash.ld -static")

TARGET_LINK_LIBRARIES(dev_hid_mouse_ucosiii.elf -Wl,--start-group)
target_link_libraries(dev_hid_mouse_ucosiii.elf debug m)

target_link_libraries(dev_hid_mouse_ucosiii.elf debug c)

target_link_libraries(dev_hid_mouse_ucosiii.elf debug gcc)

target_link_libraries(dev_hid_mouse_ucosiii.elf debug nosys)

target_link_libraries(dev_hid_mouse_ucosiii.elf optimized m)

target_link_libraries(dev_hid_mouse_ucosiii.elf optimized c)

target_link_libraries(dev_hid_mouse_ucosiii.elf optimized gcc)

target_link_libraries(dev_hid_mouse_ucosiii.elf optimized nosys)

TARGET_LINK_LIBRARIES(dev_hid_mouse_ucosiii.elf -Wl,--end-group)

