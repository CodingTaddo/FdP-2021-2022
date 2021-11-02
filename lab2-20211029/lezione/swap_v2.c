#include <stdio.h>
#include <stdlib.h>

/* NON FUNZIONA PER OVVI MOTIVI*/

void swap (int a, int b);

int main()
{
    int a,b;

    a = 4;
    b = 5;

    swap(a, b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return EXIT_SUCCESS;
    
}

void swap (int a, int b)
{

    int t;

    t = a;
    a = b;
    b = t;

    return;
}
