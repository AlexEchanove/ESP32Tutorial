// Copyright 2024 Alex

#include "led_flow.h"

int ledCounts;
int delayTimes = 50;

void led_flow_setup() {
    ledCounts = sizeof(ledPins);
    for (int i = 0; i < ledCounts; i++) {
        ledcSetup(chns[i], 1000, 10);
        ledcAttachPin(ledPins[i], chns[i]);
    }
}

void led_flow_loop() {
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < ledCounts; j++) {
            ledcWrite(chns[j], dutys[i + j]);
        }
        delay(delayTimes);
    }

    for(int i = 0; i < 20; i++) {
        for(int j = ledCounts - 1; j > -1;j--) {
            ledcWrite(chns[j], dutys[i + (ledCounts - 1 - j)]);
        }
        delay(delayTimes);
    }
}
