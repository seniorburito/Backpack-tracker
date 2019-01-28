#include "pitches.h"
const int buttonPin1 = 1;
const int buttonPin2 =2;
int buttonState1 = 0;
int buttonState2 = 0;

int melodies[9][80]= {{
  NOTE_G2, NOTE_B3, NOTE_D3, NOTE_E3, 
  NOTE_G2, NOTE_B3, NOTE_D3, NOTE_E3,
  NOTE_G2, NOTE_B3, NOTE_D3, NOTE_E3,
  NOTE_G2, NOTE_B3, NOTE_D3, NOTE_E3
},{
  NOTE_D2, NOTE_D3, NOTE_C3, NOTE_B3, NOTE_A3, 
  NOTE_B3, NOTE_G2, 
  NOTE_A3, NOTE_E2, NOTE_A3, NOTE_G2, NOTE_E2, 
  NOTE_G2, NOTE_A3, NOTE_F2
}, {NOTE_A3, NOTE_F2, NOTE_A3, NOTE_A3, NOTE_B3, NOTE_C3, NOTE_D3, NOTE_E3, 0, NOTE_E3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A4, 0, 
  NOTE_A4, NOTE_A4, NOTE_G3, NOTE_F3, NOTE_G3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_E3, NOTE_D3,
  NOTE_C3, NOTE_C3, NOTE_D3, NOTE_E3, NOTE_D3, NOTE_C3, NOTE_B3, NOTE_B3, NOTE_C3, NOTE_D3, NOTE_F3, NOTE_E3, NOTE_G2, NOTE_G2,
  NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2
},{NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
},{
  NOTE_D3, NOTE_F3, NOTE_D4, 
  NOTE_D3, NOTE_F3, NOTE_D4, 
  NOTE_E4, NOTE_F4, NOTE_E4, NOTE_F4, 
  NOTE_E4, NOTE_C4, NOTE_A4, 
  NOTE_A4, NOTE_D3, NOTE_F3, NOTE_G3, 
  NOTE_A4, 
  NOTE_A4, NOTE_D3, NOTE_F3, NOTE_G3, 
  NOTE_E3
},{NOTE_A4, NOTE_D3, NOTE_F3, NOTE_A4, NOTE_D3, NOTE_F3, NOTE_A4, NOTE_C4, NOTE_B4, NOTE_G3, NOTE_F3, NOTE_G3, NOTE_A4, NOTE_D3, NOTE_C3, NOTE_E3, NOTE_D3, 0
},{
  NOTE_F3, NOTE_A3, NOTE_B3, 
  NOTE_F3, NOTE_A3, NOTE_B3, 
  NOTE_F3, NOTE_A3, NOTE_B3, NOTE_E4, 
  NOTE_D4, NOTE_B3, NOTE_C4, 
  NOTE_B3, NOTE_G3, NOTE_E3, 0, 
  NOTE_D3, NOTE_E3, NOTE_G3, NOTE_E3
},{
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
},{
  NOTE_B4, NOTE_D4,
  NOTE_A4, NOTE_G3, NOTE_A4,
  NOTE_B4, NOTE_D4,
  NOTE_A4, 
  NOTE_B4, NOTE_D4, 
  NOTE_A5, NOTE_G4, 
  NOTE_D4, NOTE_C4, NOTE_B4, 
  NOTE_A4
}};
int noteDurations[9][80]= {{
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12
},{
  4, 8, 8, 8, 8,
  3, 3, 
  4, 8, 8, 8, 8,
  4, 8, 3}, {
  4, 6, 8, 16, 16, 16, 16, 2, 8, 8, 8, 8, 8, 2, 8, 8, 8, 8, 8, 12, 16, 2, 4, 8, 16, 16, 2, 8, 8, 8, 16, 16, 2, 8, 8, 8, 16, 16, 
  2, 4, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 8
},{
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
},{
  8, 8, 2,
  8, 8, 2,
  3, 8, 8, 8,
  8, 8, 2,
  4, 4, 8, 8,
  1.5,
  4, 4, 8, 8,
  1.5
 },{
  4, 2, 4, 4, 2, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 1, 2
},{
  8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 2, 8, 8, 8, 8, 2
},{
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
},{
  2, 4,
  2, 8, 8,
  2, 4,
  1.5,
  2, 4,
  2, 4, 
  2, 8, 8,
  1.5
}};
int counter = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
for (int thisNote = 0; thisNote < sizeof(melodies[counter]); thisNote++) {
  
      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.

      int noteDuration = 1000 / noteDurations[counter][thisNote];
      tone(8, melodies[counter][thisNote], noteDuration);
  
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.40;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
      }
}
void loop() {
  // put your main code here, to run repeatedly:
 /* if (buttonState2 == HIGH){ 
      for (int thisNote = 0; thisNote < sizeof(melodies[counter]); thisNote++) {
  
      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.

      int noteDuration = 1000 / NoteDurations[counter][thisNote];
      tone(8, melody[counter][thisNote], noteDuration);
  
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.40;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
      }
  }
  if (buttonState1 == HIGH){
    counter++;
      if (counter >=10){
        counter = 0;
      }
  }
  */
}
