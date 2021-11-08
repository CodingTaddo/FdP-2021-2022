#include <stdio.h>
#include <stdlib.h>

#include "utilitylib.h"

int leggi_vettore(int v[], int dimensione)
{
    int indice, n;

    printf("Quanti elementi vuoi inserire?: ");
    scanf("%d", &n);

    indice = 0;

    while ((indice < dimensione) && (indice < n))
    {
        printf("Inserisci l'elemento di indice %d: ", indice);
        scanf("%d", &v[indice]);
        indice++;
    }

    return indice; //Non restituisco n perché altrimenti leggerei più valori di quanti si possa leggere nel vettore
}

void inverti_vettore(int v[], int dimensione)
{
    int i, j;
    
    i = 0; //CONTATORE CRESCENTE
    j = dimensione - 1;  //CONTATORE DECRESCENTE

    //SCAMBIA FINCHE I DUE CONTATORI NON SI INCONTRANO

    while (i<j)
    {
        swap(&v[i], &v[j]);
        i++;
        j--;
    }

    return;
}

void stampa_vettore(int v[], int dimensione_effettiva)
{
    int contatore;
    contatore = 0;

    while (contatore < dimensione_effettiva)
    {
        printf("Elemento in posizione %d = %d\n", contatore, v[contatore]);
        contatore++;
    }
}

void inizializza_vettore(int v[], int dimensione, int valore)
{
    for (int i = 0; i < dimensione; i++)
        v[i] = valore;
        
    return;
}