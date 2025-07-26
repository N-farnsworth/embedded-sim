#ifndef SCHEDULER_H
#define SCHEDULER_H

typedef void(*TaskFunction)(void);

typedef struct{
    const char* name;
    TaskFunction func;
    int period_ms;
    int counter_ms;
}Task;

void add_task(const char* name, TaskFunction func, int period_ms);
void run_scheduler(void);


#endif