#include "Tone.h"

// Default constructor
Tone::Tone() {
    tone = 0;
    duration = 0;
}

// Constructor with tone parameter
Tone::Tone(uint32_t tone_) {
    tone = tone_;
    duration = 0;
}

// Constructor with tone and duration parameters
Tone::Tone(uint32_t tone_, uint32_t duration_) {
    tone = tone_;
    duration = duration_;
}

// Setter for tone
void Tone::setTone(uint32_t tone_) {
    tone = tone_;
}

// Setter for duration
void Tone::setDuration(uint32_t duration_) {
    duration = duration_;
}

// Getter for tone
uint32_t Tone::getTone() const {
    return tone;
}

// Getter for duration
uint32_t Tone::getDuration() const {
    return duration;
}
