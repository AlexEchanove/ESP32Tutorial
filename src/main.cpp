// Copyright 2024 Alex

#include <led_rgb_wheel.h>

void setup() {
  Serial.begin(115200);
  RGB_LED_Wheel led;
  led.led_rgb_setup();
}

void loop() {
  Serial.println("hello world");
  RGB_LED_Wheel led;
  led.led_rgb_loop();
}
