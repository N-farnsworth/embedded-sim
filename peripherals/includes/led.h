#ifndef LED_H
#define LED_H

char* led_off(void);
void led_toggle(void);
char* led_on(void);
int led_get_state(void);
void log_led_status(void);

#endif