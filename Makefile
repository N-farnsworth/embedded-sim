# Makefile for Simulated Embedded System in C

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Iperipherals/includes -Iutils

# Source files
SRC = main.c scheduler.c  \
      peripherals/apps/led.c   \
      peripherals/apps/uart.c  \
      utils/time.c

# Output binary
TARGET = builds/embedded_sim

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)




