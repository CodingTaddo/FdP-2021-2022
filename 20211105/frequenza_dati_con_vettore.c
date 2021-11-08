#include <stdio.h>
#include <stdlib.h>

#include "../libraries/vettorilib.h"

#define DIM 30

void calcola_frequenze(int vettore_valori[], int vettore_contatori[], int dimensione);

int main()
{
    int vettore_valori[DIM], vettore_contatori[DIM];
    int dimensione_valori;

    dimensione_valori = leggi_vettore(vettore_valori, DIM);
    calcola_frequenze(vettore_valori, vettore_contatori, dimensione_valori);

    stampa_vettore(vettore_contatori, dimensione_valori+1);

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