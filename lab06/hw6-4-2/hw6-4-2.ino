const int MAX_SIZE = 200;
int data[MAX_SIZE];
int out[MAX_SIZE];

void setup() {
  Serial.begin(9600);
}

void loop() {
  static int cnt = 0;
  static int fcnt = 0;

  for (static int cnt = 1; cnt < MAX_SIZE; ++cnt) {
    data[cnt] = analogRead(A0);
  }

  for (static int fcnt = 1; fcnt <= MAX_SIZE; ++fcnt) {
    if (3 <= fcnt <= (MAX_SIZE - 2)) {
      out[fcnt] = (data[fcnt - 2] + data[fcnt - 1] + data[fcnt] + data[fcnt + 1] + data[fcnt + 2]) / 5;
    }
  }

  for (static int fcnt = 3; fcnt <= (MAX_SIZE - 2); fcnt++) {
    Serial.println(out[fcnt]);
  }
}
