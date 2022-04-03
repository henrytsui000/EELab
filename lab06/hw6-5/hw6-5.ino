float temp = 0.0;

void setup() {
  // Baud rate for UART
  Serial.begin(9600);
}

void loop() {
  // Read in the temperature
  temp = analogRead(A0);

  // Covert the voltage to termperature
  temp = temp * 5.0 / 1023 * 100.0;

  // Print out the temperature
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" degree celsius");
  delay(1000);
}
