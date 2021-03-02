#include "Note.h"

Note::Note(int frequency, long duration)
{
    this->frequency = frequency;
    this->duration = duration;
}

void Note::Play(uint8_t pin)
{
    tone(pin, frequency);
    delay(duration);
    noTone(pin);
}