################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/app/MyMessage.cpp \
../src/app/MyModule1.cpp \
../src/app/MyModule2.cpp \
../src/app/NetworkAbstraction.cpp 

OBJS += \
./src/app/MyMessage.o \
./src/app/MyModule1.o \
./src/app/MyModule2.o \
./src/app/NetworkAbstraction.o 

CPP_DEPS += \
./src/app/MyMessage.d \
./src/app/MyModule1.d \
./src/app/MyModule2.d \
./src/app/NetworkAbstraction.d 


# Each subdirectory must supply rules for building sources it contributes
src/app/%.o: ../src/app/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


