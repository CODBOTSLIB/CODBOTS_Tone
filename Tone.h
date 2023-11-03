
#ifndef Tone_h
#define Tone_h

#include <Arduino.h> 
#include <notes.h> 


class Tone
{
    public:
        Tone();
        Tone(uint32_t tone_);
        Tone(uint32_t tone_,uint8_t duration_);
        uint32_t tone;
        uint8_t duration;

};

Tone::Tone(){}

Tone::Tone(uint32_t tone_){
        tone = tone_;
}

Tone::Tone(uint32_t tone_,uint8_t duration_){
        tone = tone_;
        duration = duration_;
}

#endif