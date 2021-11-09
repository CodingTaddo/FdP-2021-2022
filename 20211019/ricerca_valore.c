#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, valore_dato, contatore, occorrenze;

    contatore = 0;
    occorrenze = 0;

    printf("Inserire n: ");
    scanf("%d", &n);

    printf("Inserire valore da cercare: ");
    scanf("%d", &valore_dato);

    while (contatore < n)
    {
        int valore;
        printf("Inserire valore: ");
        scanf("%d", &valore);

        if (valore == valore_dato)
        {
            occorrenze++;
        }

        contatore++;
    }

    printf("Valore %d trovato %d volte nella sequenza\n", valore_dato, occorrenze);

}
