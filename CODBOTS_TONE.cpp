#include <CODBOTS_Tone.h>

CODBOTS_Tone::CODBOTS_Tone(){

}
CODBOTS_Tone::CODBOTS_Tone(int pin_){
    pin = pin_;
}


void CODBOTS_Tone::addTone(Tones tone) {
    Tones *newmelody = new Tones[melody_length + 1];
    
    for (int i = 0; i < melody_length; i++) {
        newmelody[i] = melody[i];
    }

    newmelody[melody_length] = tone;

    delete[] melody;
    melody = newmelody;
    melody_length++;
}