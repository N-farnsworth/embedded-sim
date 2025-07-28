#include <stdio.h>
#include <unistd.h> // For usleep
#include "scheduler.h"

#define MAX_TASKS 20 // Maximum number of tasks in our system

static Task task_list[MAX_TASKS];
static int num_tasks = 0;

void add_task(const char* name, TaskFunction func, int period_ms){
    if(num_tasks < MAX_TASKS){
        task_list[num_tasks].name = name;
        task_list[num_tasks].func = func;
        task_list[num_tasks].period_ms = period_ms;
        task_list[num_tasks].counter_ms = 0;
        task_list[num_tasks].sleeping = true; 
        num_tasks++;
    }
}

void run_scheduler(void){
    //int sleep_timer = 0;
    while(1){
        for (int i = 0; i < num_tasks; i++){
            if(task_list[i].counter_ms <= 0){
                task_list[i].func();
                task_list[i].counter_ms = task_list[i].period_ms;
            } else {
                task_list[i].counter_ms -= 100; 
            }
        }
        usleep(100000);
    }
}