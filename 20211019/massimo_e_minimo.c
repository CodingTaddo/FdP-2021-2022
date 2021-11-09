#include <stdio.h>
#include <stdlib.h>

#define VERO 0
#define FALSO 1

int main()
{
    int n, valore, contatore, massimo, minimo, massimo_inizializzato, minimo_inizializzato;

    contatore = 0;
    massimo_inizializzato = FALSO;
    minimo_inizializzato = FALSO;

    printf("Inserire n: ");
    scanf("%d", &n);

    while (contatore < n)
    {
        printf("Inserire valore: ");
        scanf("%d", &valore);

        if (massimo_inizializzato == FALSO)
        {
            massimo_inizializzato = VERO;
            massimo = valore;
        }
        else
        {
            if (valore > massimo)
            {
                massimo = valore;
            }
        }

        if (minimo_inizializzato == FALSO)
        {
            minimo_inizializzato = VERO;
            minimo = valore;
        }
        else
        {
            if (valore < minimo)
            {
                minimo = valore;
            }
        }

        contatore++;
    }

    printf("Massimo: %d\n", massimo);
    printf("Minimo: %d\n", minimo);

}
