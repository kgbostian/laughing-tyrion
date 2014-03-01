#include "toolbox.h"
#include "designs.h"
#include <stdio.h>

//Turns all LED's on. Should appear to have the entire cube turned on.
void design1()
{
    //Layer
    for(int h = 0; h < 4; h++)
    {
        //Rows
        for(int i = 0; i < 4; i++)
        {
            //LEDs
            for(int j = 0; j < 4; j++)
            {
                digitalWrite(j, 1);
            }
            
            //Increment multiplexer;
            tick()
        }
    }
}
