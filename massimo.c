#include <stdio.h>
#include <stdlib.h>

#define VERO 0
#define FALSO 1

int main()
{
    int n, contatore, valore, massimo, massimo_inizializzato;

    massimo_inizializzato = FALSO;
    contatore = 0;

    printf("Inserire numero di valori da leggere: ");
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

        contatore++;

    }

    printf("Massimo: %d\n", massimo);

}
