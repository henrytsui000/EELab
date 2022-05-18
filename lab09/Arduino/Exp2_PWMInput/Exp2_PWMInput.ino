byte s=0;
char data[4];
char chr;
double PWMIn;
const int motpwm = 11; //D11做PWM輸出

void setup() 
{
pinMode(motpwm,OUTPUT);  
Serial.begin(115200);
}

void loop() 
{
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
   PWMIn =( atoi(data) ) * 2.55;
   analogWrite(motpwm, PWMIn);
   Serial.print("Input:DutyCycle=");
   Serial.print(atoi(data));
   Serial.println("%");
   s=0;
  }
}
