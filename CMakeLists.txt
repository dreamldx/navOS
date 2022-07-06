cmake_minimum_required(VERSION 3.16)

set(CMAKE_SYSTEM_NAME "Generic")
set(CMAKE_C_COMPILER "arm-none-eabi-gcc")
set(CMAKE_OBJCOPY "arm-none-eabi-objcopy")
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

set(device_name "STM32H743xx")

project("navOS")

set(CMAKE_C_STANDARD 11)
set(ARM_MATH_CM7 1)



if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    list(APPEND compile_definitions "DEBUG" "_DEBUG")
else()
    list(APPEND compile_definitions "NDEBUG")
endif()

set(c_compile_options
        # CPU specific
        "-mcpu=cortex-m7"
        "-mfpu=fpv5-d16"
        "-mfloat-abi=hard"
        "-mthumb"
        "-ffast-math"
        "-Dstm32h743xx"
        # Non-CPU specific
        "--specs=nano.specs"
        "-ffunction-sections"
        "-fdata-sections"
        "-fstack-usage"
        # Other options
        "-g3"
        "-c"
        "-O0"
        "-Wall")

set(compile_definitions "${device_name}")

set(link_flags
    "-mcpu=cortex-m7 \
    -mfpu=fpv5-d16 \
    -mfloat-abi=hard \
	-T\"${CMAKE_CURRENT_LIST_DIR}/stm32h743.ld\" \
	-Wl,-Map=\"${PROJECT_NAME}.map\" \
	-Wl,--gc-sections \
	-static \
	--specs=nosys.specs \
	-Wl,--start-group -lc -lm -Wl,--end-group")

add_compile_options("${c_compile_options}")
add_compile_definitions("${compile_definitions}")

include_directories("${PROJECT_NAME}" PUBLIC  "stm32/Core/Include")
include_directories("${PROJECT_NAME}" PUBLIC  "stm32/Core_A/Include")
include_directories("${PROJECT_NAME}" PUBLIC  "stm32/STM32h7xx/Include")
include_directories("${PROJECT_NAME}" PUBLIC  "./include")


file(GLOB_RECURSE sources "source/*.[c|h]" "peripherals/*.[c|h]")
add_executable("${PROJECT_NAME}" ${sources} include/hal/core.h include/hal/flash.h include/hal/reg.h include/hal/dwt.h include/target.h include/hal/power.h include/hal/timer.h)

set_target_properties("${PROJECT_NAME}" PROPERTIES LINK_FLAGS "${link_flags}")

# The OBJCOPY utility will separate the EEPROM section from the main program
add_custom_command(TARGET "${PROJECT_NAME}" POST_BUILD
    COMMAND "${CMAKE_OBJCOPY}" ARGS -j .eeprom "$<TARGET_FILE:${PROJECT_NAME}>" -O ihex "eeprom.hex"
    COMMAND "${CMAKE_OBJCOPY}" ARGS -R .eeprom "$<TARGET_FILE:${PROJECT_NAME}>" "program.elf"
    BYPRODUCTS "eeprom.hex" "program.elf"
)