extern "C" {
  #include "GPIO.h"
}

void setup() {
  // Configure PA17 (port 'A', pin 17) as output
  Config_GPIO('A', 17, OUTPUT);
}

void loop() {
  // Turn LED on
  Write_GPIO('A', 17, HIGH);
  delay(1000);

  // Turn LED off
  Write_GPIO('A', 17, LOW);
  delay(1000);
}
