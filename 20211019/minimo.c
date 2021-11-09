#include <stdio.h>
#include <stdlib.h>

#define VERO 0
#define FALSO 1

int main()
{
    int n, contatore, valore, minimo, minimo_inizializzato;

    minimo_inizializzato = FALSO;
    contatore = 0;

    printf("Inserire numero di valori da leggere: ");
    scanf("%d", &n);

    while (contatore < n)
    {
        printf("Inserire valore: ");
        scanf("%d", &valore);

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

    printf("Minimo: %d\n", minimo);

}
