#include <Wire.h>

void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
}

byte x = 0;

void loop() {

  // you can change address, both master and slave device are needed.
  Wire.beginTransmission(8); // transmit to device #8

  // send test string, which is the third word of your name
  // truncate this word to 2 characters
  // if the length of your name string is under 3, sent default string
  Wire.write("ts");        // sends five bytes
  Wire.endTransmission();    // stop transmitting

  delay(500);
}
