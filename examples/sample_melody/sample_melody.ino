#include <CODBOTS_Melody.h>
 

#include <Melody.h>



CODBOTS_Melody melody(19);
void setup() {
  Serial.begin(115200);
  melody.begin();

  melody.add(melody_twinkle,melody_twinkle_len,melody_twinkle_tempo);
  while (melody.play(true)) {} 
  delay(1000);

  Serial.println("END");

  //melody.add(melody_final_countdown,melody_final_countdown_len);
  //while (melody.play(false)) {} 
  //delay(1000);

  //melody.add(melody_impossible,melody_impossible_len,melody_impossible_tempo);
  //while (melody.play(false)) {} 
  //delay(1000);

 //  melody.add(melody_xfiles,melody_xfiles_len,melody_xfiles_tempo);
 // while (melody.play(false)) {} 
 // delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
}
