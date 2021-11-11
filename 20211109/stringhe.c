#include <stdio.h>
#include <stdlib.h>

#include "../libraries/strlib.h"

#define MAX_S 256
#define MAX_T 256

int main()
{
    char s[MAX_S], t[MAX_T];

    my_gets(s);
    my_gets(t);

    strcatenate(s, t);

    printf("%s\n", s);

    return EXIT_SUCCESS;
    
}