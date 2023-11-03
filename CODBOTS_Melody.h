
#ifndef CODBOTS_Melody_h
#define CODBOTS_Melody_h

#include <Arduino.h> 
#include <Notes.h> 
#include <Tones.h> 


class CODBOTS_Melody
{
    public:
        CODBOTS_Melody();
        CODBOTS_Melody(int pin_);

        addTone();

    private:
        int pin;
        Tones *melody;
        int melody_length;
};


#endif