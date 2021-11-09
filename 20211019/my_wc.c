#include <stdio.h>
#include <stdlib.h>

//TODO Se la parola ha solo spazi non va contata come parola

int main()
{
    int righe, parole, caratteri;

    righe = 0;
    parole = 0;
    caratteri = 0;

    char c;

    while ((c = getchar()) != -1)
    {
        if  (c == '\n')
        {
            righe++;
            parole++;
            caratteri++;
        }
        else
        {
            if (c == ' ')
            {
                parole++;
            }
            caratteri++;
        }
    }

    printf("Righe: %d\n", righe);
    printf("Parole: %d\n", parole);
    printf("Caratteri: %d\n", caratteri);

}
