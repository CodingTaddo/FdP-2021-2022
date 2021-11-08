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

    while ((ch = getcher()) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = my_to_lower(ch);
            indice_contatore = ch - 'a';
            vettore_contatori[indice_contatore]++;
        }
    }

    //STAMPA ETICHETTE
    for (char ch_etichetta = 'a'; ch_etichetta <= 'z', ch_etichetta++)
    {
        printf("%c", ch_etichetta);
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

void stampa_istogramma_verticale(int v[], int dimensione)
{

    int massimo = massimo_vettore(v, dimensione);

    printf("\n");

    for (int i = massimo; i > 0; i--)
    {
        for (int j = 0; j < dimensione; j++)
        {

            //STAMPA * SE LA COLONNA DI ASTERISCHI PER v[j] ARRIVA FINO A i, altrimenti spazio vuoto
            if (v[j] >= i)
            {
                printf("* ");
                //printf("\u2588 "); STAMPA I BLOCCHI INTERI
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }

    for (int i = 0; i < dimensione; i++)
    {
        printf("--");
    }

    printf("\n");

    for (int i = 0; i < dimensione; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

}