# Makefile for Simulated Embedded System in C

# Compiler and flags
CC = gcc
CFLAGS = -Wall

# Source files
SRC = main.c scheduler.c  \
      peripherals/led.c   \
      peripherals/uart.c  \
      utils/time.c

# Output binary
TARGET = embedded_sim

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)




