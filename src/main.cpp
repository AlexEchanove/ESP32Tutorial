#include <led_button.h>

void setup() {
  led_button_setup();
}

void loop() {
  // Serial.begin(115200);
  Serial.println("hello world");
  led_button_loop();
}
