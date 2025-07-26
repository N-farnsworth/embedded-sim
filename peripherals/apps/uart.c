#include <stdio.h>
#include "uart.h"

void uart_init(void){
    printf("[UART] Initialized\n");
}

void uart_write(const char* msg){
    printf("[UART] %s\n", msg);
}

