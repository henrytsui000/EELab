// Set up the output pin
const int led_pin = 9;

// Set up the brightness and
//  the gap to change
int brightness = 0;
int gap = 10;

void setup() {
  // Set the output mode
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // Write in the PWM value
  analogWrite(led_pin, brightness);

  // Add the increasing gap
  brightness += gap;

  if (brightness == 250) {
    gap = -10;
  } else if (brightness == 0) {
    gap = 10;
  }

  delay(50);
}

