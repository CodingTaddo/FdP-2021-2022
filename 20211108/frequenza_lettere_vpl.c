#include <stdio.h>
#include <stdlib.h>

#define NCONTATORI 'z'-'a'+1

char my_to_lower(char ch);
void inizializza_vettore(int v[], int dimensione, int valore);
int massimo_vettore(int v[], int dimensione);
void stampa_istogramma_verticale_no_etichette(int v[], int dimensione);
double calcola_fattore(int massimo);

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

    stampa_istogramma_verticale_no_etichette(vettore_contatori, NCONTATORI);

    //STAMPA ETICHETTE
    for (char ch_etichetta = 'a'; ch_etichetta <= 'z'; ch_etichetta++)
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

void inizializza_vettore(int v[], int dimensione, int valore)
{
    for (int i = 0; i < dimensione; i++)
        v[i] = valore;
        
    return;
}

int massimo_vettore(int v[], int dimensione)
{
    int massimo;
    massimo = v[0];

    for (int i = 0; i < dimensione; i++)
    {
        if (v[i] > massimo)
        {
            massimo = v[i];
        }
    }

    return massimo;
        
}

double calcola_fattore(int massimo)
{
    if (massimo <= 20)
        return (double) 1;
    else
        return massimo/20.0;
}

void stampa_istogramma_verticale_no_etichette(int v[], int dimensione)
{

    int massimo = massimo_vettore(v, dimensione);

    double fattore_scala = calcola_fattore(massimo);

    printf("\n");

    printf("fattore di scala: %lf\n", fattore_scala);

    for (int i = massimo; i > 0; i = i - fattore_scala)
    {
        for (int j = 0; j < dimensione; j++)
        {

            //STAMPA * SE LA COLONNA DI ASTERISCHI PER v[j] ARRIVA FINO A i, altrimenti spazio vuoto
            if (v[j] >= i)
            {
                printf("*");
                //printf("\u2588 "); STAMPA I BLOCCHI INTERI
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

}