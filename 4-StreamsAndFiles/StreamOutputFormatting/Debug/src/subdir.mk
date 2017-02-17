################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/StreamOutputFormatting.cpp \
../src/demoFieldWidth.cpp \
../src/demoFloatingPoint.cpp \
../src/demoJustification.cpp \
../src/demoMiscManipulators.cpp 

OBJS += \
./src/StreamOutputFormatting.o \
./src/demoFieldWidth.o \
./src/demoFloatingPoint.o \
./src/demoJustification.o \
./src/demoMiscManipulators.o 

CPP_DEPS += \
./src/StreamOutputFormatting.d \
./src/demoFieldWidth.d \
./src/demoFloatingPoint.d \
./src/demoJustification.d \
./src/demoMiscManipulators.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


