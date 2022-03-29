// byte pinA=13, pinB=12, pinC=11, pinD=10, pinE=9, pinF=8, pinG=7, pinP=6; 
// byte pushButton = 2;

// void setup() {
//     Serial.begin(9600);
//     pinMode(pinA, OUTPUT); pinMode(pinD, OUTPUT); pinMode(pinG, OUTPUT); 
//     pinMode(pinB, OUTPUT); pinMode(pinE, OUTPUT); pinMode(pinP, OUTPUT); 
//     pinMode(pinC, OUTPUT); pinMode(pinF, OUTPUT);
//     pinMode(pushButton, INPUT);
// }

// void showSevenSeg(byte A, byte B, byte C, byte D, byte E, byte F, byte G, byte P) {
//     digitalWrite(pinA, A); digitalWrite(pinD, D); digitalWrite(pinG, G); 
//     digitalWrite(pinB, B); digitalWrite(pinE, E); digitalWrite(pinP, P); 
//     digitalWrite(pinC, C); digitalWrite(pinF, F);
// }

// void loop(){ 
//     int bt = digitalRead(pushButton);
//     if(bt == LOW ){
//         Serial.println(bt);
//         showSevenSeg(1,1,1,1,1,1,1,0); // 右上
//         delay(500);
//         showSevenSeg(1,1,1,1,1,1,0,1); // 上
//         delay(500);
//         showSevenSeg(1,1,0,1,1,1,1,1); // 左上
//         delay(500);
//         showSevenSeg(0,1,1,1,1,1,1,1); // 左下
//         delay(500);
//         showSevenSeg(1,1,1,0,1,1,1,1); // 下
//         delay(500);
//         showSevenSeg(1,1,1,1,0,1,1,1); // 右下
//         delay(500);
//     } else {
//         showSevenSeg(1,1,1,1,0,1,1,0);
//         delay(500);
//         showSevenSeg(0,1,0,0,0,1,0,0);
//         delay(500);
//         showSevenSeg(1,0,0,0,0,1,0,0);
//         delay(500);
//         showSevenSeg(1,0,0,0,0,1,0,1);
//         delay(500);
//         showSevenSeg(1,1,1,1,0,1,1,0);
//         delay(500);
//         showSevenSeg(1,1,1,1,0,1,1,0); 
//         delay(500);
//         showSevenSeg(0,1,0,0,0,1,0,0);
//         delay(500);
//         showSevenSeg(0,0,0,0,0,1,0,1);
//         delay(500);
//         showSevenSeg(0,0,0,0,0,1,0,0);
//         delay(500);
//     }
// }