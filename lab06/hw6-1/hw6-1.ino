// condition for exp1
const int MAX_SIZE = 100;
int data[MAX_SIZE];

void setup() {
    Serial.begin (9600);
// UNCOMMENT in exp2-4 and exp3-3, connect 3.3V to"AREF"
    analogReference (EXTERNAL) ;
}

void loop() {
    static int cnt = 0; // index for storing data
    static int fcnt; // index for printing data on the serial monitor

    if(cnt < MAX_SIZE) {
        for (cnt = 0; cnt < MAX_SIZE; cnt++)
            data[cnt] = analogRead(A0);
        for (fcnt = 0; fcnt < MAX_SIZE; fcnt++)
            Serial.println(data[fcnt]);
        // print end mark
        Serial.println("finish!!!");
    }
}