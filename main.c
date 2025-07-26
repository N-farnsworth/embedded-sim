#include <stdio.h>
#include "scheduler.h"

void blink_led(){
    printf("[blink_led] LED toggled\n");
}

void read_sensor(){
    printf("[read_sensor] Sensor value read\n");
}

int main(){
    add_task("LED", blink_led, 500);
    add_task("Sensor", read_sensor, 1000);

    run_scheduler();
    return 0;
}