#include <stdio.h>
#include <stdlib.h>

#include "../libraries/vettorilib.h"

#define DIM 30

void calcola_frequenze(int vettore_valori[], int vettore_contatori[], int dimensione);
void stampa_istogramma(int v[], int dimensione, int fattore_scala);
int massimo_vettore(int v[], int dimensione);
void stampa_istogramma_verticale(int v[], int dimensione);

int main()
{
    int vettore_valori[DIM], vettore_contatori[DIM];
    int dimensione_valori;

    dimensione_valori = leggi_vettore(vettore_valori, DIM);
    calcola_frequenze(vettore_valori, vettore_contatori, dimensione_valori);

    stampa_istogramma_verticale(vettore_contatori, dimensione_valori);

    return EXIT_SUCCESS;
    
}

void calcola_frequenze(int vettore_valori[], int vettore_contatori[], int dimensione)
{
    inizializza_vettore(vettore_contatori, dimensione, 0);
    int contatore;

    contatore = 0;

    while (contatore < dimensione)
    {
        vettore_contatori[vettore_valori[contatore]]++;
        contatore++;
    }

    return;
}

void stampa_istogramma(int v[], int dimensione, int fattore_scala)
{
    printf("Inserisci il fattore di scala: ");
    scanf("%d", &fattore_scala);

    for (int i = 0; i < dimensione; i++)
    {
        printf("%d | ", i);

        for (int j = 0; j < v[i]*fattore_scala; j++)
        {
            printf("*");
        }

        printf("\n");
    }

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