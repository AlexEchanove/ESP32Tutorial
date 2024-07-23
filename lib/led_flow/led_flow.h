// Copyright 2024 Alex

#include <Arduino.h>

const byte ledPins[] = {15, 2, 0, 4, 5, 18, 19, 21, 22, 23}; 
const byte chns[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
const int dutys[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                    1023, 512, 256, 128, 64, 32, 16, 8, 4, 2,
                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
                    }; 
                    
void led_flow_setup(); 
void led_flow_loop(); 