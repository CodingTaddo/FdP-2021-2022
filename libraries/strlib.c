#include <stdio.h>
#include <stdlib.h>

void my_gets(char str[])
{
    int i;
    i = 0;

    while ((str[i] = getchar()) != '\n')
    {
        i++;
    }

    str[i] = '\0';

    return;
}

int my_strlen(char str[])
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

void strcatenate(char t[], char s[])
{ 
    //INSERISCO ALL'INTERNO DI t LA STRINGA s
    int i, lungh_t, lungh_s;
    i = 0;

    lungh_t = my_strlen(t);
    lungh_s = my_strlen(s);

    while(i < lungh_s)
    {
        t[i+lungh_t] = s[i];
        i++;
    }

    t[i+lungh_t] = '\0';

    return;

}

int strcompare(char a[], char b[])
{
    
    /* 
    -1 se la prima precede la seconda (anche se la prima è più corta della seconda)
    0 se sono uguali
    1 se la prima segue la seconda
     */
    
    return 0;
}