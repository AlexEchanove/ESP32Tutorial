// Copyright 2024 Alex

#include <led_pwn.h>

void led_pwd_setup() {
    ledcSetup(CHN, FRQ, PWM_BIT);
    ledcAttachPin(PIN_LED, CHN);
}

void led_pwd_loop() {
    for (int i = 0; i< 255; i++) {
        ledcWrite(CHN, i);
        delay(10);
    }
    for (int i=255; i > -1; i--) {
        ledcWrite(CHN, i);
        delay(10);
    }
}