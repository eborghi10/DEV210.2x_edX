################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ModuleThree.cpp \
../src/Person.cpp \
../src/Student.cpp \
../src/Teacher.cpp 

OBJS += \
./src/ModuleThree.o \
./src/Person.o \
./src/Student.o \
./src/Teacher.o 

CPP_DEPS += \
./src/ModuleThree.d \
./src/Person.d \
./src/Student.d \
./src/Teacher.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


