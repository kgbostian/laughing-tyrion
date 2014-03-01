#include "toolbox.h"

void setPinModes(uint8_t pinIds[], pinMode_t mode)
{
    uint8_t len = sizeof(pinIds)/sizeof(uint8_t);
    for(int i = 0; i < len; i++)
    {
        if(mode = Output)
            pinMode(pinIds[i], OUTPUT);
        else if(mode = Input):
            pinMode(pinIds[i], INPUT);
    }
    return; 
}

//-------------------------------------------------------
void tick(uint8_t pin, uint16_t waitTime)
{
    digitalWrite(pin, HIGH);
    delay(10);//Delay for 10 mSec
    digitalWrite(pin, LOW);
    return;
}
