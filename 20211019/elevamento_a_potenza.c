#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int a, b, contatore, risultato;
    
    contatore = 0;
    risultato = 1;

    printf("Inserire base: ");
    scanf("%d", &a);
    printf("Inserire esponente: ");
    scanf("%d", &b);

    while (contatore < b)
    {
        risultato = risultato * a;
        contatore++;
    }

    printf("%d^%d = %d\n", a, b, risultato);    
}