#include <CODBOTS_Melody.h>

CODBOTS_Melody::CODBOTS_Melody(){

}
CODBOTS_Melody::CODBOTS_Melody(int pin_){
    pin = pin_;
}


void CODBOTS_Melody::addTone(Tones tone) {
    Tones *newmelody = new Tones[melody_length + 1];
    
    for (int i = 0; i < melody_length; i++) {
        newmelody[i] = melody[i];
    }

    newmelody[melody_length] = tone;

    delete[] melody;
    melody = newmelody;
    melody_length++;
}