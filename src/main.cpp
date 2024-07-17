#include <led_flow.h>

void setup() {
  led_flow_setup();
}

void loop() {
  Serial.begin(115200);
  Serial.println("hello world");
  led_flow_loop();
}
