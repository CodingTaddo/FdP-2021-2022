#include <stdio.h>
#include <stdlib.h>

#define VERO 0
#define FALSO 1

int main()
{
    int n, contatore, valore, massimo, secondo_massimo, massimo_inizializzato, secondo_massimo_inizializzato;

    contatore = 0;
    massimo_inizializzato = FALSO;
    secondo_massimo_inizializzato = FALSO;

    printf("Inserire numero valori da leggere: ");
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
                secondo_massimo = massimo;
                massimo = valore;
                secondo_massimo_inizializzato = VERO;
            }
        }

        if (secondo_massimo_inizializzato == FALSO)
        {
            secondo_massimo_inizializzato = VERO;
            secondo_massimo = valore;
        }

        contatore++;

    }

    if ((massimo_inizializzato == FALSO) || (secondo_massimo_inizializzato == FALSO))
    {
        printf("Nessun valore letto\n");
    }
    else
    {
        printf("Massimo: %d\n", massimo);
        printf("Secondo massimo: %d\n", secondo_massimo);
    }

}