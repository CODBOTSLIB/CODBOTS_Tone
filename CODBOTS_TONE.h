
#ifndef CODBOTS_Tone_h
#define CODBOTS_Tone_h

#include <Arduino.h> 
#include <Notes.h> 
#include <Tones.h> 


class CODBOTS_Tone
{
    public:
        CODBOTS_Tone();
        CODBOTS_Tone(int pin_);

        addTone();

    private:
        int pin;
        Tones *melody;
        int melody_length;
};


#endif