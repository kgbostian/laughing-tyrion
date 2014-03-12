#include <stdlib.h>
#include "designs.h"

//typedef void (*displayPtr)() displayPtr_t;

int main()
{
    //first pass to 1
    int num_designs = 1;
    
    //void (*pt2Function)() = NULL;
    //pt2Function = &design1;   

    int i;
    for(i = 0; i < num_designs; i++)
    {
        //(*pt2Function)();
        design1();
    }
    return 0;
}

