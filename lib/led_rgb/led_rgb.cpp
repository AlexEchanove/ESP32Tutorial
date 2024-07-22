#include "led_rgb.h"

int red, green, blue;

/** 
 * @brief RGB_LED creates a led rgb object
 */
void RGB_LED::led_rgb_setup() {
        for (int i = 0; i < 3; i++) {
        ledcSetup(chns[i], FRQ, PWM_BIT);
        ledcAttachPin(ledPins[i], chns[i]);
    }
}

void RGB_LED::led_rgb_loop() {
    Serial.begin(115200);
    Serial.println("rgb");
    red = random(0, 256), green = random(0, 256), blue  = random(0, 256);
    setColor(red, green, blue);
    delay(200);
}

void RGB_LED::setColor(byte r, byte g, byte b) {
    ledcWrite(chns[0], 255 - r);
    ledcWrite(chns[1], 255 - g);
    ledcWrite(chns[2], 255 - b);
}


