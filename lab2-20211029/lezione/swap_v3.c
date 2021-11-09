#include <stdio.h>
#include <stdlib.h>

void swap (int *aPtr, int *bPtr);

int main()
{
    int a,b;
    int *aPtr, *bPtr;

    a = 4;
    b = 5;
    
    printf("Indirizzo a = %p\n", &a);
    printf("Indirizzo b = %p\n", &b);

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);


    return EXIT_SUCCESS;
    
}

void swap (int *aPtr, int *bPtr)
{

    int t;

    t = *aPtr;
    *aPtr = *bPtr;
    *bPtr = t;

    printf("aPtr = %p\n", aPtr);
    printf("bPtr = %p\n", aPtr);

    return;
}
