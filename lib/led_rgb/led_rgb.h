// Copyright 2024 Alex

#include <Arduino.h>

#define RED_LED 15
#define GRN_LED 2
#define BLU_LED 4
#define FRQ 1000
#define PWM_BIT 8   

const byte ledPins[] = {15, 2, 4};
const byte chns[] = {0, 1, 2};

class RGB_LED {
     public:
        void led_rgb_setup();
        virtual void led_rgb_loop();
        void setColor(byte r, byte g, byte b);
};
