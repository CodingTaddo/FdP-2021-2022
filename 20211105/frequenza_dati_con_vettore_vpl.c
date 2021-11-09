#include <stdio.h>
#include <stdlib.h>

#define DIM 100
#define MIN_VAL 0
#define MAX_VAL 20

int leggi_vettore(int v[], int dimensione);
void scarta_valori(int vettore_valori[], int dim);
void stampa_vettore(int v[], int dimensione_effettiva);
void inizializza_vettore(int v[], int dimensione, int valore);
int massimo_vettore(int v[], int dimensione);
void stampa_istogramma_verticale(int vettore_contatori[], int dimensione);
void calcola_frequenze(int vettore_valori[], int vettore_contatori[], int dimensione);

int main()
{
    int vettore_valori[DIM], vettore_contatori[MAX_VAL];
    int dimensione_valori;

    dimensione_valori = leggi_vettore(vettore_valori, DIM);
    calcola_frequenze(vettore_valori, vettore_contatori, dimensione_valori);

    scarta_valori(vettore_valori, dimensione_valori);

    printf("\n");

    stampa_istogramma_verticale(vettore_contatori, MAX_VAL);

    for (int i = 0; i <= MAX_VAL; i++)
    {
        printf("%2d ", i);
    }

    return EXIT_SUCCESS;
    
}

int leggi_vettore(int v[], int dimensione)
{
    int indice, n;

    printf("inserisci il numero di valori da scrivere nel vettore: ");
    scanf("%d", &n);

    indice = 0;

    while ((indice < dimensione) && (indice < n))
    {
        printf("v[%d] = ", indice);
        scanf("%d", &v[indice]);
        indice++;

    }

    return indice; //Non restituisco n perché altrimenti leggerei più valori di quanti si possa leggere nel vettore
}

void scarta_valori(int vettore_valori[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if ((vettore_valori[i] < MIN_VAL) || (vettore_valori[i] > MAX_VAL))
            printf("e` stato scartato il voto non valido %d\n", vettore_valori[i]); 
    }    
}

void stampa_vettore(int v[], int dimensione_effettiva)
{
    int contatore;
    contatore = 0;

    while (contatore < dimensione_effettiva)
    {
        printf("v[%d] = %d\n", contatore, v[contatore]);
        contatore++;
    }
}

void calcola_frequenze(int vettore_valori[], int vettore_contatori[], int dimensione)
{
    inizializza_vettore(vettore_contatori, MAX_VAL, 0);
    int contatore;

    contatore = 0;

    while (contatore < dimensione)
    {
        if (vettore_valori[contatore] >= MIN_VAL || vettore_valori[contatore] <= MAX_VAL)
            vettore_contatori[vettore_valori[contatore]]++;
        contatore++;
    }

    return;
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

void stampa_istogramma_verticale(int vettore_contatori[], int dimensione)
{

    int massimo;
    massimo = massimo_vettore(vettore_contatori, dimensione);

    for (int i = massimo; i > 0; i--)
    {
        for (int j = 0; j < dimensione; j++)
        {

            if (vettore_contatori[i] >= MIN_VAL && vettore_contatori[i] <= MAX_VAL)
            {
                if (vettore_contatori[j] >= i)
                    printf(" * ");
                else
                    printf("   ");
            }            

        }
        printf("\n");
    }

    return;

}