#include <led_button.h>

void led_button_setup(){
    pinMode(PIN_BUTTON, INPUT);
    pinMode(PIN_LED, OUTPUT);
}

void led_button_loop(){
    if (digitalRead(PIN_BUTTON) == LOW){
        delay(20);
        if (digitalRead(PIN_BUTTON) == LOW) {
            reverseGPIO(PIN_LED);
        }
        while (digitalRead(PIN_BUTTON) == LOW);
        delay(20);
        while (digitalRead(PIN_BUTTON) == LOW);
    }
}

void reverseGPIO(int pin) {
  digitalWrite(pin, !digitalRead(pin));
}