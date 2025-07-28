#include <stdio.h>
#include "scheduler.h"
#include "led.h"
#include "uart.h"


void blink_led(){
    led_toggle();
}

void read_sensor(){
    printf("[read_sensor] Sensor value read\n");
}

int main(){
    // Sensor Tasks
    add_task("Sensor", read_sensor, 1000);

    // LED Tasks
    add_task("LED", blink_led, 2000);
    add_task("LED STATUS", log_led_status, 500);


    run_scheduler();
    return 0;
}