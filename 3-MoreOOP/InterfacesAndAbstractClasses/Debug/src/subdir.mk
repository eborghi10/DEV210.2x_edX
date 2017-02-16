################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BankAccount.cpp \
../src/InterfacesAndAbstractClasses.cpp \
../src/SavingsAccount.cpp 

OBJS += \
./src/BankAccount.o \
./src/InterfacesAndAbstractClasses.o \
./src/SavingsAccount.o 

CPP_DEPS += \
./src/BankAccount.d \
./src/InterfacesAndAbstractClasses.d \
./src/SavingsAccount.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


