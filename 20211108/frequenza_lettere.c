#include <stdio.h>
#include <stdlib.h>

#include "../libraries/vettorilib.h"

#define NCONTATORI 'z'-'a'+1

char my_to_lower(char ch);

int main()
{
    char ch;
    int indice_contatore;
    int vettore_contatori[NCONTATORI];

    inizializza_vettore(vettore_contatori, NCONTATORI, 0);

    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = my_to_lower(ch);
            indice_contatore = ch - 'a';
            vettore_contatori[indice_contatore]++;
        }
    }

    stampa_istogramma_verticale(vettore_contatori, NCONTATORI);

    //STAMPA ETICHETTE
    for (char ch_etichetta = 'a'; ch_etichetta <= 'z'; ch_etichetta++)
    {
        printf("%c ", ch_etichetta);
    }

    printf("\n");

    return EXIT_SUCCESS;
    
}

char my_to_lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
    }

    return ch;
}