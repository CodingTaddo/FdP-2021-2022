#include <stdio.h>
#include <stdlib.h>

#define DIM_VETT 100 //Buona norma: definire una costante per definire la dimensione di un vettore

int leggi_vettore(int v[], int dimensione);
void inverti_vettore(int v[], int dimensione);
void stampa_vettore(int v[], int dimensione_effettiva);

int main()
{
    int v[DIM_VETT];
    int dim; //Tengo traccia di quanti siano i valori effettivamente all'interno di v

    /* 
    leggi vettore
    inverti vettore
    stampa vettore
     */

    dim = leggi_vettore(v, DIM_VETT);
    inverti_vettore(v, dim);
    stampa_vettore(v, dim);

    return EXIT_SUCCESS;
    
}

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
    int v_copia[dimensione];
    int contatore;

    contatore = 0;

    while (contatore < dimensione)
    {
        v_copia[contatore] = v[dimensione-contatore];
        contatore++;
    }

    for (int i = 0; i<dimensione; i++)
    {
        v[i] = v_copia[i];
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