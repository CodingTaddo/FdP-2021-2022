#include <stdio.h>
#include <stdlib.h>

int main()
{

    int favorevoli, contrari, astenuti;
    char voto;

    favorevoli = 0;
    contrari = 0;
    astenuti = 0;

    while ((voto = getchar()) != 'X')
    {
        if (voto == 'f' || voto == 'F' || voto == 's' || voto == 'S' || voto == 'y' || voto == 'Y')
        {
            favorevoli++;
        }
        else
        {
            if (voto == 'c' || voto == 'C' || voto == 'n' || voto == 'N')
            {
                contrari++;
            }
            else
            {
                if (voto == 'a' || voto == 'A' || voto == '-')
                {
                    astenuti++;
                }
            }
        }
    }

    printf("Favorevoli: %d\n", favorevoli);
    printf("Contrari: %d\n", contrari);
    printf("Astenuti: %d\n", astenuti);
}
