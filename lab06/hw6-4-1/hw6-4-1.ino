const int MAX_SIZE = 200;

int data[MAX_SIZE];

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Index for storing data
  static int cnt = 0;
  // Index for printing data on serial monitor
  static int fcnt;


  if (cnt < MAX_SIZE) {
    // Store data from A/D A0 pin
    for (cnt = 0; cnt < MAX_SIZE; ++cnt) {
      data[cnt] = analogRead(A0);
    }

    // Print data
    for (fcnt = 0; fcnt < MAX_SIZE; ++fcnt) {
      Serial.println(data[fcnt]);
    }

    // Print end mark
    Serial.println("finish!!!");
  }
}
