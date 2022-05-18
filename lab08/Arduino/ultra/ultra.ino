const int pushButton = 2;
const int trigPin = 12;
const int echoPin = 13;

long duration;
int distance;

void print_out() {
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
}
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pushButton, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(pushButton), print_out, RISING);
  Serial.begin(9600);
}

void loop() {
  
}
