#include <stdio.h>
#include <stdlib.h>

#include "../libraries/datelib.h"
#include "../libraries/strlib.h"

#define DIMMAX 20

void mese_in_lettere(int m, char s[]);

int main()
{
    int g, m, a;
    char mese_letterale[DIMMAX];

    leggi_data_con_controllo(&g, &m, &a);

    mese_in_lettere(m, mese_letterale);

    printf("nome del mese = %s\n", mese_letterale);

    
}

#if 0
void mese_in_lettere(int m, char s[])
{
    switch (m)
    {
        case 1:
            strcopy(s, "gennaio");
            break;
        case 2:
            strcopy(s, "febbraio");
            break;
        case 3:
            strcopy(s, "marzo");
            break;
        case 4:
            strcopy(s, "aprile");
            break;
        case 5:
            strcopy(s, "maggio");
            break;
        case 6:
            strcopy(s, "giugno");
            break;
        case 7:
            strcopy(s, "luglio");
            break;
        case 8:
            strcopy(s, "agosto");
            break;
        case 9:
            strcopy(s, "settembre");
            break;
        case 10:
            strcopy(s, "ottobre");
            break;
        case 11:
            strcopy(s, "novembre");
            break;
        case 12:
            strcopy(s, "dicembre");
            break;
        default:
            printf("Error: wrong month\n");
            exit(EXIT_FAILURE);
            break;


    }
}

#endif

void mese_in_lettere (int m, char s[])
{
    char *nomi_mesi[13] = {"", "gennaio", "febbraio", "marzo", "aprile", "maggio", "giugno", "luglio", "agosto", "settembre", "ottobre", "novembre", "dicembre"};

    if (m < 1 || m > 12)
    {
        printf("Error: wrong month\n");
        exit(EXIT_FAILURE);
    }
    
    strcopy(s, nomi_mesi[m]);

    return;
}
