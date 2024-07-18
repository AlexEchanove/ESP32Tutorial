#include <led_rgb.h>

void setup() {
  Serial.begin(115200);
  led_rgb_setup();
}

void loop() {
  Serial.println("hello world");
  led_rgb_loop();
}
