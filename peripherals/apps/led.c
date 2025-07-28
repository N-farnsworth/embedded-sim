#include <stdio.h>
#include "led.h"
#include "uart.h"


static int led_state = 0; // 0 == off, 1 == on

void led_toggle(void){
    led_state = !led_state;
    printf("[LED] Toggled %s\n", led_state ? "ON" : "OFF");
}

char* led_on(void){
    led_state = 1;
    return "[LED] Turned ON";
}

char* led_off(void){
    led_state = 0;
    return "[LED] Turned OFF";
}

int led_get_state(){
    return led_state;
}

void log_led_status(void){
    int state = led_get_state();
    if(state){
        uart_write(led_on());
    }
    else{
        uart_write(led_off());
    }
}