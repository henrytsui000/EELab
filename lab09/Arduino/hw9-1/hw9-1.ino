void setup() {
// Initialize serial communication at 9600 bits per second:
Serial.begin(9600);
}
void loop() {
// Send a string, which is the first word of your name
// truncate this word to 2 characters
Serial.print("ts");
delay(500);
}