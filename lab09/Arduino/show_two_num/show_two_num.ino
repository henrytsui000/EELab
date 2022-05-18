const int LEDs[8] = {
  13, 12, 11, 10, 9, 8, 7, 6
};
const int left = 5;
const int right = 4;
const byte first_num[8] = {0, 0, 0, 0, 0, 0, 1, 1};
const byte second_num[8] = {0, 1, 0, 0, 0, 0, 0, 1};
void setup() {
  for (int i = 0; i < 8; ++i) {
    pinMode(LEDs[i], OUTPUT);
  }
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
}

void show_seven_seg(const byte* input_signal) {
  for (int i = 0; i < 8; ++i) {
    digitalWrite(LEDs[i], input_signal[i]);
  }
}
void loop() {
  digitalWrite(left, HIGH);
  digitalWrite(right, LOW);
  show_seven_seg(first_num);
  delay(10);
  digitalWrite(left, LOW);
  digitalWrite(right, HIGH);
  show_seven_seg(second_num);
  delay(10);
}
