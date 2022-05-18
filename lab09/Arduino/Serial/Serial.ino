void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // send a string, which is the first word of your name
  // truncate this word to 2 characters
  Serial.print("ru");
  delay(20);
}
