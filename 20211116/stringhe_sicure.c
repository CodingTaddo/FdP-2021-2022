#include <stdio.h>
#include <stdlib.h>

#include "../libraries/strlib.h"

#define MAX_S 256
#define MAX_T 256

int main()
{
    char s[MAX_S];

    my_fgets(s, MAX_S);

    printf("%d\n", is__str_palindrome(s));

    return EXIT_SUCCESS;
    
}