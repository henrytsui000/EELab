#include "pitches.h"

// notes in the melody:
int melody[] = { 
    NOTE_F5, NOTE_E5, NOTE_F5, NOTE_G5, 
    NOTE_E5, NOTE_F5, NOTE_G5, NOTE_B4,
    NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, 
    NOTE_E5, NOTE_F5,

    NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, 
    NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, 
    NOTE_G4, NOTE_F4, NOTE_G4, NOTE_C5, 
    NOTE_B4, NOTE_C5, 

    NOTE_A4, NOTE_C5, NOTE_B4, NOTE_A4, 
    NOTE_G4, NOTE_F4, NOTE_G4, NOTE_F4,
    NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, 
    NOTE_B4, NOTE_C4, 

    NOTE_A4, NOTE_C5, NOTE_B4, NOTE_C5, 
    NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4,
    NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, 
    NOTE_F5, NOTE_G5,
    NOTE_F5, NOTE_E5, NOTE_F5, NOTE_G5, 
    NOTE_E5, NOTE_F5, NOTE_G5, NOTE_B4,
    NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, 
    NOTE_E5, NOTE_F5,

    NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, 
    NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, 
    NOTE_G4, NOTE_F4, NOTE_G4, NOTE_C5, 
    NOTE_B4, NOTE_C5, 

    NOTE_A4, NOTE_C5, NOTE_B4, NOTE_A4, 
    NOTE_G4, NOTE_F4, NOTE_G4, NOTE_F4,
    NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, 
    NOTE_B4, NOTE_C4, 

    NOTE_A4, NOTE_C5, NOTE_B4, NOTE_C5, 
    NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4,
    NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, 
    NOTE_F5, NOTE_G5,
};

// note_durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
    4,8,8,4,8,8,
    8,8,8,8,
    8,8,8,8,
};

void setup() {
  for (int thisNote = 0; thisNote < 56; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
    int bt1 = digitalRead(2);
    int bt2 = digitalRead(4);
    if(bt1 == HIGH ){
        int noteDuration = 1000 / 4;
        tone(8, NOTE_C5, noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(8);
    }else if(bt2 == HIGH){
        int noteDuration = 1000 / 4;
        tone(8, NOTE_C4, noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(8);
    }
}