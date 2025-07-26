#include <stdio.h>
#include "led.h"

static int led_state = 0; // 0 == off, 1 == on

void led_toggle(void){
    led_state = !led_state;
    printf("[LED] Toggled %s\n", led_state ? "ON" : "OFF");
}

void led_on(void){
    led_state = 1;
    printf("[LED] Turned On\n");
}

void led_off(void){
    led_state = 0;
    printf("[LED] Turned OFF\n");
}