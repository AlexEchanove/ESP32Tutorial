// Copyright 2024 Alex

#include "led_rgb.h"

class RGB_LED_Wheel : public RGB_LED {
     public:
        void setColor(long rgb);
        long wheel(int pos);
        void led_rgb_loop() override;
};
