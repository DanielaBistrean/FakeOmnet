################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/fake/FakeLogger.cpp \
../src/fake/FakeMessage.cpp \
../src/fake/FakeModule.cpp \
../src/fake/FakeOmnet.cpp 

OBJS += \
./src/fake/FakeLogger.o \
./src/fake/FakeMessage.o \
./src/fake/FakeModule.o \
./src/fake/FakeOmnet.o 

CPP_DEPS += \
./src/fake/FakeLogger.d \
./src/fake/FakeMessage.d \
./src/fake/FakeModule.d \
./src/fake/FakeOmnet.d 


# Each subdirectory must supply rules for building sources it contributes
src/fake/%.o: ../src/fake/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


