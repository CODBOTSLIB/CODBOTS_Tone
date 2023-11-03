#ifndef Tone_h
#define Tone_h

#include <Arduino.h> 

class Tone
{
public:
    Tone();
    Tone(uint32_t tone_);
    Tone(uint32_t tone_, uint32_t duration_);
    void setTone(uint32_t tone_);
    void setDuration(uint32_t duration_);
    uint32_t getTone() const;
    uint32_t getDuration() const;

private:
    uint32_t tone;
    uint32_t duration;
};

#endif
