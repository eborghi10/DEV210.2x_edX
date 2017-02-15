################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Body.cpp \
../src/FriendClasses.cpp \
../src/Handle.cpp 

OBJS += \
./src/Body.o \
./src/FriendClasses.o \
./src/Handle.o 

CPP_DEPS += \
./src/Body.d \
./src/FriendClasses.d \
./src/Handle.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


