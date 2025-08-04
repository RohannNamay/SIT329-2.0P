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
  bool pinState = Read_GPIO('A', 17); // Read state after setting HIGH
  Serial.print("LED ON, Pin state: ");
  Serial.println(pinState);
  delay(1000);

  // Turn LED off
  Write_GPIO('A', 17, LOW);
  pinState = Read_GPIO('A', 17); // Read state after setting LOW
  Serial.print("LED OFF, Pin state: ");
  Serial.println(pinState);
  delay(1000);
}
