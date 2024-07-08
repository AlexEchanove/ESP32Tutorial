#include <led.h>

void led_setup() {
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
}

void led_loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}