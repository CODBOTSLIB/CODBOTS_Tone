
#ifndef CODBOTS_Melody_h
#define CODBOTS_Melody_h

#include <Arduino.h> 
#include <Notes.h> 
#include <Tone.h> 


class CODBOTS_Melody
{
    public:
        CODBOTS_Melody();
        CODBOTS_Melody(int pin_);

        void begin();

        void add(Tone tone);
        void add(Tone tone[],int length,float tempo_);
        void clear();

        int getLength();
        long getDuration();

        bool play();
        bool play(bool repeat);
        bool play(bool repeat,bool zigzag);
 
        void stop();
        void reset();

    private:
        int pin;
        Tone *melody;
        int melody_length;

        int current_tone=0;
        long played_time;
        long playing_duration;
        bool direction=true;
        float tempo;
};


#endif