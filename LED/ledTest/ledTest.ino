#include"led.h"

led led1(7);

void setup() {
  Serial.begin(9600);
}

void loop() {
  led1.on();
  delay(1000);
  led1.off();
  delay(1000);
}
