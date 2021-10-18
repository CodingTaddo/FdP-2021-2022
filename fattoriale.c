#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contatore, n_fattoriale;
    contatore = 1;
    n_fattoriale = 1;

    printf("Inserire n: ");
    scanf("%d", &n);

    while(contatore <= n)
    {
        n_fattoriale = n_fattoriale*contatore;
        contatore++;
    }

    printf("N Fattoriale: %d\n", n_fattoriale);

}