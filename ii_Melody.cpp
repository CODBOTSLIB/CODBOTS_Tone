#include <ii_Melody.h>

ii_Melody::ii_Melody()
{
}
ii_Melody::ii_Melody(int pin_)
{
    pin = pin_;
}

void ii_Melody::begin()
{
    pinMode(pin, OUTPUT);
    ledcSetup(0, 400, 8); // Configure LEDC channel 0
    ledcAttachPin(pin, 0);
}

int ii_Melody::getLength()
{
    return melody_length;
}

void ii_Melody::add(Tone tone)
{
    Tone *newmelody = new Tone[melody_length + 1];

    for (int i = 0; i < melody_length; i++)
    {
        newmelody[i] = melody[i];
    }

    newmelody[melody_length] = tone;
    delete[] melody;
    melody = newmelody;
    melody_length++;
}

void ii_Melody::add(Tone tone[], int length, float tempo_)
{
    melody_length = 0;
    tempo = tempo_;
    for (int n = 0; n < length; n++)
    {
        add(tone[n]);
    }
}

void ii_Melody::clear()
{
    delete[] melody;
    melody_length = 0;
    current_tone = 0;
    played_time = 0;
    direction = true;
}

bool ii_Melody::play()
{
    return play(false);
}

bool ii_Melody::play(bool repeat)
{
    return play(repeat, false);
}

bool ii_Melody::play(bool repeat, bool zigzag)
{
    if (millis() - played_time > playing_duration)
    {

        if ((current_tone < 0 || current_tone >= melody_length))
        {
            return false;
        }

        playing_duration = (long)(((float)melody[current_tone].getDuration()) * tempo);
        tone(pin, melody[current_tone].getTone(), playing_duration);
        played_time = millis();
        if (direction)
        {
            current_tone++;
        }
        else
        {
            current_tone--;
        }
        if (repeat && current_tone >= melody_length)
        {

            if (zigzag)
            {
                current_tone = melody_length - 2;
                direction = !direction;
            }
            else
            {
                current_tone = 0;
            }
            return repeat;
        }
        else if (repeat && current_tone < 0)
        {

            if (zigzag)
            {
                current_tone = 1;
                direction = !direction;
            }
            else
            {
                current_tone = melody_length - 1;
            }
            return repeat;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return true;
    }
}

void ii_Melody::stop()
{
    noTone(pin);
}

void ii_Melody::reset()
{
    stop();
    current_tone = 0;
}

long ii_Melody::getDuration()
{
    long duration;
    for (int n = 0; n < melody_length; n++)
    {
        duration += melody[n].getDuration();
    }
    return duration;
}