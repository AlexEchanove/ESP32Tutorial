#include "led_rgb.h"

int red, green, blue;

void led_rgb_setup() {
    for (int i = 0; i < 3; i++) {
        ledcSetup(chns[i], FRQ, PWM_BIT);
        ledcAttachPin(ledPins[i], chns[i]);
    }
}

void led_rgb_loop() {
    Serial.begin(115200);
    red = random(0, 256), green = random(0, 256), blue  = random(0, 256);
    setColor(red, green, blue);
    delay(200);
}

void setColor(byte r, byte g, byte b) {
    ledcWrite(chns[0], 255 - r);
    ledcWrite(chns[1], 255 - g);
    ledcWrite(chns[2], 255 - b);
}