const int MAX_SIZE = 100; // Lab01:100  Lab02:400  Lab03:200

int data[]={902,582,415,509,235,115,250,345,109,278,444,176,169,454,328,127,369,448,157,260,373,216,187,444,299,139,363,427,173,308,467,237,241,508,332,219,394,481,207,331,470,232,216,440,277,110,395,357,113,232,384,135,154,387,223,89,323,338,93,240,322,111,142,374,233,83,306,305,61,226,357,117,144,360,206,117,333,300,92,206,367,131,143,388,181,24,327,306,56,234,360,124,161,379,204,135,290,290,94,218,361,73,152,392,241,78,334,299,125,256,353,107,124,366,197,96,322,291,119,217,304,112,213,602,575,603};
int index;
// the setup routine runs once when you press reset:
void setup() {
	unsigned long t1,t2;
    // initialize serial communication at 115200 bits per second:
    Serial.begin(115200);
	// use external reference voltate as maximum voltage of analog input
    //analogReference(EXTERNAL); // Lab02_4  Lab03_3
	Serial.println("**DATA**");
	// Get t1: start time
	t1 = micros();    
	for(int index=0;index<MAX_SIZE;index++){
		// Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
		// read the input on analog pin 0
		Serial.println( "   "  );
	}
	// Get t2: end time

	t2 = micros(); 
	// print informations
	Serial.print("\r\n");
	Serial.println("**START**");
	Serial.print("Sampling rate = ");
	//Calculate sampling rate
	Serial.print("2000");
	Serial.print("\r\n");

	Serial.println("**END**");
	Serial.println(" ");
	Serial.println(" ");
	Serial.println(" ");
	Serial.println(" ");
	Serial.println(" ");
	index = 0;
  while(1){
    const int data_length = sizeof(data) / sizeof(int) ;
     //analogRead(A0); 
     for(int i = 0; i<10; i++){
       // interpolation
		Serial.println(  data[index] +   ( data[index+1] - data[index] ) / 10 * i  );
		delayMicroseconds(500);
     }
     index ++;
     if(index >=  data_length ){
       index = 0;
     }
  }
}

// the loop routine runs over and over again forever:
void loop() {

}

