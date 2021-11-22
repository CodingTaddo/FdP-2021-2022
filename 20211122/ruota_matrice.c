#include <stdlib.h>
#include <stdio.h>

#define MAXRIGHE 10
#define MAXCOLONNE 5

void leggi_matrice(int m[MAXRIGHE][MAXCOLONNE], int *p_righe_effettive, int *p_colonne_effettive);
void stampa_matrice(int m[MAXRIGHE][MAXCOLONNE], int r, int c);

int main()
{
    int m[MAXRIGHE][MAXCOLONNE];
    int r, c;

    leggi_matrice(m, &r, &c);
    
}

void leggi_matrice(int m[MAXRIGHE][MAXCOLONNE], int *p_righe_effettive, int *p_colonne_effettive)
{
    int r, c;

    printf("inserisci numero di righe: ");
    scanf("%d", &r);

    printf("inserisci numero di colonne: ");
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    *p_righe_effettive = r;
    *p_colonne_effettive = c;

    return;

}

void stampa_matrice(int m[MAXRIGHE][MAXCOLONNE], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%2d ", m[i][j]);
        }

        printf("\n");
    }

    return;
}

void ruota_matrice(int m[MAXRIGHE][MAXCOLONNE], int r, int c)
{
    int aus[MAXCOLONNE][MAXRIGHE];
    
    //La riga 1 diventa la colonna c-1;
    

    
    return;
}