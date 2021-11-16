#include <stdio.h>
#include <stdlib.h>

int leggi_matrice(int m[][], int *p_righe_effettive, imt *p_colonne_effettive)
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
            //LEGGI SINGOLI ELEMENTI
        }
    }

    *p_righe_effettive = r;
    *p_colonne_effettive = c;

    return;

}
