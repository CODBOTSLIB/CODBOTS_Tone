#include <Notes.h>

// twinkle twinkle little star
//"William Tell Overture" - Gioachino Rossini
//"The Final Countdown" - Europe
//"Mission: Impossible Theme" - Lalo Schifrin
//"Eye of the Tiger" - Survivor
//"Super Mario Bros. Theme" - Koji Kondo
//"Indiana Jones Theme" - John Williams
//"James Bond Theme" - Monty Norman
//"The X-Files Theme" - Mark Snow
//"The Pink Panther Theme" - Henry Mancini
//"Ghostbusters Theme" - Ray Parker Jr.
//"Star Trek Theme" - Alexander Courage
//"Jaws Theme" - John Williams
//"The Twilight Zone Theme" - Marius Constant
//"Back to the Future Theme" - Alan Silvestri
//"Rocky Theme" - Bill Conti
//"A-Team Theme" - Mike Post and Pete Carpenter
//"The Imperial March" (Darth Vader's Theme) - John Williams
//"Let It Go" (from Frozen) - Kristen Anderson-Lopez and Robert Lopez

// twinkle twinkle little star
Tone melody_twinkle[] = {
    Tone(NOTE_C4, 200), // C4
    Tone(NOTE_C4, 200), // C4
    Tone(NOTE_G4, 200), // G4
    Tone(NOTE_G4, 200), // G4
    Tone(NOTE_A4, 200), // A4
    Tone(NOTE_A4, 200), // A4
    Tone(NOTE_G4, 400), // G4 (half note)
    Tone(NOTE_F4, 200), // F4
    Tone(NOTE_F4, 200), // F4
    Tone(NOTE_E4, 200), // E4
    Tone(NOTE_E4, 200), // E4
    Tone(NOTE_D4, 200), // D4
    Tone(NOTE_D4, 200), // D4
    Tone(NOTE_C4, 400)  // C4 (half note)
};
int melody_twinkle_len = 14;
float melody_twinkle_tempo = 2;

//"William Tell Overture" - Gioachino Rossini
Tone melody_ode_to_joy[] = {
    Tone(NOTE_E4, 400), // Ode
    Tone(NOTE_D4, 400), // to
    Tone(NOTE_C4, 400), // Joy
    Tone(NOTE_D4, 400), // Ode
    Tone(NOTE_E4, 400), // to
    Tone(NOTE_E4, 400), // Joy
    Tone(NOTE_E4, 400), // Ode
    Tone(NOTE_D4, 400), // to
    Tone(NOTE_D4, 400), // Joy
    Tone(NOTE_E4, 400), // Ode
    Tone(NOTE_G4, 400), // to
    Tone(NOTE_G4, 400), // Joy
    Tone(NOTE_E4, 400), // Ode
    Tone(NOTE_D4, 400)  // to
};
int melody_ode_to_joy_len = 14;

// Melody for "The Final Countdown"
Tone melody_final_countdown[] = {
    Tone(NOTE_B4, 400), // It's the final
    Tone(NOTE_A4, 400), // countdown
    Tone(NOTE_G4, 400), // (Rest)
    Tone(NOTE_B4, 400), // We're
    Tone(NOTE_A4, 400), // heading for
    Tone(NOTE_G4, 400), // Venus
    Tone(NOTE_E4, 400), // (Rest)
    Tone(NOTE_B4, 400), // And still we
    Tone(NOTE_A4, 400), // stand tall
    Tone(NOTE_G4, 400), // (Rest)
    Tone(NOTE_E4, 400), // 'Cause maybe they've
    Tone(NOTE_G4, 400), // seen us
    Tone(NOTE_A4, 400), // (Rest)
    Tone(NOTE_B4, 400), // And welcome us
    Tone(NOTE_A4, 400), // all
    Tone(NOTE_G4, 400), // yeah
};
int melody_final_countdown_len = 16;
float melody_final_countdown_tempo = 1;

//"Mission: Impossible Theme" - Lalo Schifrin
Tone melody_impossible[] = {
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_D6, 100),   // D6
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_C6, 100),   // C6
    Tone(NOTE_A5, 100),   // A5
    Tone(NOTE_REST, 200), // Rest
    Tone(NOTE_E5, 200),   // E5
    Tone(NOTE_A5, 100),   // A5
    Tone(NOTE_C6, 100),   // C6
    Tone(NOTE_D6, 100),   // D6
    Tone(NOTE_REST, 200), // Rest
    Tone(NOTE_G6, 100),   // G6
    Tone(NOTE_REST, 200), // Rest
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_REST, 100), // Rest
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_D6, 100),   // D6
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_C6, 100),   // C6
    Tone(NOTE_A5, 100),   // A5
    Tone(NOTE_REST, 200), // Rest
    Tone(NOTE_E5, 200),   // E5
    Tone(NOTE_A5, 100),   // A5
    Tone(NOTE_C6, 100),   // C6
    Tone(NOTE_D6, 100),   // D6
    Tone(NOTE_REST, 200), // Rest
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_REST, 200), // Rest
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_D6, 100),   // D6
    Tone(NOTE_E6, 100),   // E6
    Tone(NOTE_C6, 100),   // C6
    Tone(NOTE_A5, 100)    // A5
};

int melody_impossible_len = 32;
float melody_impossible_tempo = 1;

Tone melody_xfiles[] = {
    Tone(NOTE_D4, 300), // D4
    Tone(NOTE_E4, 150), // E4
    Tone(NOTE_D4, 150), // D4
    Tone(NOTE_G4, 300), // G4
    Tone(NOTE_F4, 150), // F4
    Tone(NOTE_E4, 150), // E4
    Tone(NOTE_C4, 150), // C4
    Tone(NOTE_D4, 150), // D4
    Tone(NOTE_G4, 300), // G4
    Tone(NOTE_F4, 150), // F4
    Tone(NOTE_E4, 150), // E4
    Tone(NOTE_C4, 150), // C4
    Tone(NOTE_D4, 150), // D4
    Tone(NOTE_A3, 300)  // A3
};

int melody_xfiles_len = 14;
float melody_xfiles_tempo = 1;