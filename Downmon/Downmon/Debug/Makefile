################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../__vm/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Battle.cpp \
../Menu.cpp


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Battle.o \
Menu.o

OBJS_AS_ARGS +=  \
Battle.o \
Menu.o

C_DEPS +=  \
Battle.d \
Menu.d

C_DEPS_AS_ARGS +=  \
Battle.d \
Menu.d

OUTPUT_FILE_PATH +=Downmon.elf

OUTPUT_FILE_PATH_AS_ARGS +=Downmon.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler





./%.o: .././%.cpp
	@echo Building file: $<
	@echo Invoking: AVR8/GNU C Compiler : 5.4.0
	$(QUOTE)D:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-g++.exe$(QUOTE) -funsigned-char -funsigned-bitfields -D__AVR_ATmega328p__ -D__AVR_ATmega328P__ -DARDUINO=10804 -DARDUINO_MAIN -DF_CPU=16000000L -D__AVR__ -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR  -I"../../../Downmon" -I"C:/Users/wesle/Documents/Arduino/libraries/MI0283QT9" -I"C:/Users/wesle/Documents/Arduino/libraries/GraphicsLib" -I"C:/Users/wesle/Documents/Arduino/libraries/ArduinoNunchuk" -I"D:/Program Files (x86)/Arduino/hardware/arduino/avr/libraries/Wire/src" -I"D:/Program Files (x86)/Arduino/hardware/arduino/avr/libraries/SPI/src" -I"C:/Users/wesle/Documents/Arduino/libraries/digitalWriteFast" -I"D:/Program Files (x86)/Arduino/hardware/arduino/avr/libraries/Wire/src/utility" -I"D:/Program Files (x86)/Arduino/libraries" -I"D:/Program Files (x86)/Arduino/hardware/arduino/avr/libraries" -I"C:/Users/wesle/Documents/Arduino/libraries" -I"D:/Program Files (x86)/Arduino/hardware/arduino/avr/cores/arduino" -I"D:/Program Files (x86)/Arduino/hardware/arduino/avr/variants/standard" -I"D:/Program Files (x86)/Arduino/hardware/tools/avr/avr/include" -I"D:/Program Files (x86)/Arduino/hardware/tools/avr/avr/include/avr" -I"D:/Program Files (x86)/Arduino/hardware/tools/avr/lib/gcc/avr/4.8.1/include" -I"D:/Program Files (x86)/Arduino/hardware/tools/avr/lib/gcc/avr/4.9.2/include" -I"D:/Program Files (x86)/Arduino/hardware/tools/avr/lib/gcc/avr/4.9.3/include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega328p -B "D:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.132\gcc\dev\atmega328p" -c -include=arduino.h -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR8/GNU Linker : 5.4.0
	$(QUOTE)D:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-g++.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="Downmon.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega328p -B "D:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.132\gcc\dev\atmega328p"  
	@echo Finished building target: $@
	"D:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "Downmon.elf" "Downmon.hex"
	"D:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "Downmon.elf" "Downmon.eep" || exit 0
	"D:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "Downmon.elf" > "Downmon.lss"
	"D:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "Downmon.elf" "Downmon.srec"
	"D:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "Downmon.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "Downmon.elf" "Downmon.a" "Downmon.hex" "Downmon.lss" "Downmon.eep" "Downmon.map" "Downmon.srec" "Downmon.usersignatures"
	