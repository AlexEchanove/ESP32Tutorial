// Copyright 2024 Alex

#include "led_rgb_wheel.h"

void RGB_LED_Wheel::setColor(long rgb) {
    ledcWrite(chns[0], 255 - (rgb >> 16) & 0xff);
    ledcWrite(chns[1], 255 - (rgb >> 8) & 0xff);
    ledcWrite(chns[2], 255 - (rgb >> 0) & 0xff);
}

long RGB_LED_Wheel::wheel(int pos) {
    long WheelPos = pos % 0xff;
    if (WheelPos < 85) {
        return ((255 - WheelPos * 3) << 16) | ((WheelPos * 3) << 8);
    } else if (WheelPos < 170) {
        WheelPos -= 85;
        return (((255 - WheelPos * 3) << 8) | (WheelPos * 3));
    } else {
        WheelPos -= 170;
        return ((WheelPos * 3) << 16 | (255 - WheelPos * 3));
    }
}

void RGB_LED_Wheel::led_rgb_loop() {
    Serial.println("Wheel");
    for (int i = 0; i < 256; i++) {
        setColor(wheel(i));
        delay(20);
    }
}
