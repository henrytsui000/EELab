#include <SPI.h>

void setup (void) {
  Serial.begin(115200); //set baud rate to 115200 for usart
  digitalWrite(SS, HIGH); // disable Slave Select
  SPI.begin ();
  SPI.setClockDivider(SPI_CLOCK_DIV128); //main clokc 16 MHz divide the clock by 128, clock is approximately equal to 125 KHz
}

void loop (void) {
  char c;
  digitalWrite(SS, LOW); // enable Slave Select
  
  // send test string, which is the second word of your name
  // truncate this word to 2 characters
  for (const char * p = "ui" ; c = *p; p++) {
    SPI.transfer (c);
    Serial.print(c);
  }
  
  digitalWrite(SS, HIGH); // disable Slave Select
  delay(20);
}
