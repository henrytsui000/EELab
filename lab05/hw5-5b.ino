// // byte pinA=13, pinB=12, pinC=11, pinD=10, pinE=9, pinF=8, pinG=7, pinP=6; 
// // byte pushButton = 2;

// // void setup() {
// //     Serial.begin(9600);
// //     pinMode(pinA, OUTPUT); pinMode(pinD, OUTPUT); pinMode(pinG, OUTPUT); 
// //     pinMode(pinB, OUTPUT); pinMode(pinE, OUTPUT); pinMode(pinP, OUTPUT); 
// //     pinMode(pinC, OUTPUT); pinMode(pinF, OUTPUT);
// //     pinMode(pushButton, INPUT);
// //     Serial.println("showSevenSeg(0,1,1,1,1,1,1,1)");
// //     Serial.println("showSevenSeg(1,0,1,1,1,1,1,1)");
// //     Serial.println("showSevenSeg(1,1,0,1,1,1,1,1)");
// //     Serial.println("showSevenSeg(1,1,1,0,1,1,1,1)");
// //     Serial.println("showSevenSeg(1,1,1,1,0,1,1,1)");
// //     Serial.println("showSevenSeg(1,1,1,1,1,0,1,1)");
// // }

// // void showSevenSeg(byte A, byte B, byte C, byte D, byte E, byte F, byte G, byte P) {
// //     digitalWrite(pinA, A); digitalWrite(pinD, D); digitalWrite(pinG, G); 
// //     digitalWrite(pinB, B); digitalWrite(pinE, E); digitalWrite(pinP, P); 
// //     digitalWrite(pinC, C); digitalWrite(pinF, F);
// // }

// // void loop(){ 
// //     int bt = digitalRead(pushButton);
// //     if(bt == LOW ){
// //         showSevenSeg(0,0,1,0,0,1,0,1);
// //         delay(500);
// //         showSevenSeg(1,1,1,1,1,1,1,1);
// //         delay(500);
// //         showSevenSeg(0,0,0,0,1,0,0,1);
// //         delay(500);
// //         showSevenSeg(1,1,1,0,1,1,1,1);
// //         delay(500);
// //         showSevenSeg(0,0,1,0,0,1,0,1);
// //         delay(500);
// //         showSevenSeg(0,0,1,0,0,1,0,1);
// //         delay(500);
// //         showSevenSeg(1,1,1,1,1,1,1,1);
// //         delay(500);
// //         showSevenSeg(0,0,1,0,0,1,0,1);
// //         delay(500);
// //         showSevenSeg(0,0,1,0,0,1,0,1);
// //         delay(500);
// //     } else {
// //         showSevenSeg(0,0,0,0,0,0,0,0);
// //     }
// // }
// void setup(){
//     Serial.begin(9600);
//     Serial.println("Hello World and I am 109511068.");
//     pinMode(LED_BUILTIN, OUTPUT);
//     pinMode(2, INPUT);
// }

// void loop(){
//     Serial.println(analogRead(A2));
//     int val = analogRead(A2);
//     if(val > 550 || val < 100 ) {
//         digitalWrite(LED_BUILTIN, HIGH);
//     } else {    
//         digitalWrite(LED_BUILTIN, LOW);
//     }
//     delay(200);
// }