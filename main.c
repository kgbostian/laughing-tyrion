#include "toolbox.h"
#include "designs.h"

typedef void (*displayPtr)();

int main()
{
    //first pass to 1
    int num_designs = 1;
    
    displayPtr = &design1();
    
    for(int i = 0; i < num_designs; i++)
    {
        (*displayPtr)();
    }
}

