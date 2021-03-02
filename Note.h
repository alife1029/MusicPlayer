#ifndef NOTE_H
#define NOTE_H

#include <Arduino.h>

#define C4  261
#define C4S 277
#define D4  293
#define D4S 311
#define E4  329
#define F4  349
#define F4S 369
#define G4  392
#define G4S 415
#define A4  440
#define A4S 466
#define B4  494

#define C5  523
#define C5S 554
#define D5  587
#define D5S 622
#define E5  659
#define F5  698
#define F5S 739
#define G5  784
#define G5S 830
#define A5  880
#define A5S 932
#define B5  987

#define C6  1046
#define C6S 1108
#define D6  1174
#define D6S 1244
#define E6  1318
#define F6  1397
#define F6S 1479
#define G6  1568
#define G6S 1661
#define A6  1760
#define A6S 1865
#define B6  1975

struct Note
{
    Note(int frequency, long duration);

    void Play(uint8_t pin);

    int frequency;
    long duration;
};

#endif