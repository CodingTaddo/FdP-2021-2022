#include <stdio.h>
#include <stdlib.h>

void swap (int a, int b);

int main()
{
    int a,b,t;

    a = 4;
    b = 5;

    t = a;
    a = b;
    b = t;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("t = %d\n", t);

    return EXIT_SUCCESS;
    
}

void swap (int a, int b)
{
    return;
}
