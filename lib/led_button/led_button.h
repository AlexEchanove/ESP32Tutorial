#include <Arduino.h>

#define PIN_LED 2
#define PIN_BUTTON 13

void led_button_setup();
void led_button_loop();
void reverseGPIO(int pin);