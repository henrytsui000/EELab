#include "pitches.h" //add Equivalent frequency for musical note

int melody[] = {
  NOTE_FS5, NOTE_FS5, NOTE_D5, NOTE_B4, NOTE_B4, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5,
  NOTE_A5, NOTE_A5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5,
  NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5
};

// The note duration, 8 = 8th note, 4 = quarter note, etc.
int durations[] = {
  8, 8, 8, 4, 4, 4,
  4, 5, 8, 8, 8, 8,
  8, 8, 8, 4, 4, 4,
  4, 5, 8, 8, 8, 8
};
// determine the length of the arrays to use in the loop iteration
int songLength = sizeof(melody)/sizeof(melody[0]);
void setup() {
 //We don't need anything here
 // Iterate through both arrays
 // Notice how the iteration variable thisNote is created in the parenthesis
 // The for loop stops when it is equal to the size of the melody array
 for (int thisNote = 0; thisNote < songLength; thisNote++){
   // determine the duration of the notes that the computer understands
   // divide 1000 by the value, so the first note lasts for 1000/8 milliseconds
   int duration = 1000/ durations[thisNote];
   tone(8, melody[thisNote], duration);
   // pause between notes
   int pause = duration * 1.3;
   delay(pause);
   // stop the tone
   noTone(8);
 }
}

void loop() {
}
