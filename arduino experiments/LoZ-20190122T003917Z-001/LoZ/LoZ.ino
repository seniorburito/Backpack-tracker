/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_A3, NOTE_F2, NOTE_A3, NOTE_A3, NOTE_B3, NOTE_C3, NOTE_D3, NOTE_E3, 0, NOTE_E3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A4, 0, 
  NOTE_A4, NOTE_A4, NOTE_G3, NOTE_F3, NOTE_G3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_E3, NOTE_D3,
  NOTE_C3, NOTE_C3, NOTE_D3, NOTE_E3, NOTE_D3, NOTE_C3, NOTE_B3, NOTE_B3, NOTE_C3, NOTE_D3, NOTE_F3, NOTE_E3, NOTE_G2, NOTE_G2,
  NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2
};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 6, 8, 16, 16, 16, 16, 2, 8, 8, 8, 8, 8, 2, 8, 8, 8, 8, 8, 12, 16, 2, 4, 8, 16, 16, 2, 8, 8, 8, 16, 16, 2, 8, 8, 8, 16, 16, 
  2, 4, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 8
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 51; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.50;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
}
