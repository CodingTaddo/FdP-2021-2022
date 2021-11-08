#include <stdio.h>
#include <stdlib.h>

void swap (int *aPtr, int *bPtr)
{
    int t;

    t = *aPtr;
    *aPtr = *bPtr;
    *bPtr = t;

    return;
}
