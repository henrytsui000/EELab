byte s=0;
char data[4];
char chr;
const int interrupt0 = 0; // D2做為中斷腳位
int T1 = 0;
volatile int T2 = 0;
unsigned long lastTime;
double lastInput=0;
double Input, Output, Setpoint; //Setpoint為你所設定的每秒轉數(RPS)
double errSum, lastErr;
double kp, ki, kd;
byte val = 255;
const int motpwm = 11; //D11做為PWM輸出
void setup() {
  Serial.begin(115200);
  pinMode(motpwm, OUTPUT);
  analogWrite(motpwm, val);
  Input = 0;
  Setpoint = 0;
  SetTunings(0, 1, 0);//設定PID值,只使用I Control
  attachInterrupt(interrupt0, falling, FALLING);//falling edge時執行程式falling



}

void Compute()
{
  /*How long since we last calculated*/
  unsigned long now = millis();
  double timeChange = (double)(now - lastTime);

  /*Compute all the working error variables*/
  double error = Setpoint - Input;
  errSum += (error * timeChange);
  double dErr = (error - lastErr) / timeChange;

  /*Compute PID Output*/
  Output = ( kp * error + ki * errSum + kd * dErr) / 1000;

  /*Remember some variables for next time*/
  lastErr = error;
  lastTime = now;
}


void SetTunings(double Kp, double Ki, double Kd)
{
  kp = Kp;
  ki = Ki;
  kd = Kd;
}

void loop() {
  /*維持最低轉速*/
  if(Output<=50){Output=50;
                 analogWrite(motpwm, Output);
                 }

                 /*序列傳輸接收到值時執行*/
                 if(Serial.available())
  {
    while((chr=Serial.read()) != '\n')
    {
      if((chr >= '0') && (chr <= '9') && (s < 3))
      {
        data[s]=chr;
        s++;
      }
    }
   data[s]='\0';
   Setpoint = atoi(data);
   Serial.print("Setpoint=");
   Serial.println(Setpoint);
   s=0;
  }

}

void falling() {
  T2 = micros();
  Tmain();

}




void Tmain() {
  if (T1 != 0) {
    Input =(double) 500000 / ( T2 - T1); // Neglect tranfer expression of T1
     
    if (Input>=400 || Input<=0){Input=lastInput;}//濾除不合理極端值
    Compute();
    analogWrite(motpwm, Output);
  }
  T1 = T2;
  lastInput = Input;
}
