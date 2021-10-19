#include <stdio.h>
#include <stdlib.h>

int main()
{

    int favorevoli, contrari, astenuti;
    char voto;

    favorevoli = 0;
    contrari = 0;
    astenuti = 0;

    while ((voto = getchar()) != EOF)
    {
        
        while (getchar() != '\n');

        switch (voto)
        {
            case 'f':
            case 'F':
            case 's':
            case 'S':
            case 'y':
            case 'Y':
                favorevoli++;
                break;
            
            case 'c':
            case 'C':
            case 'n':
            case 'N':
                contrari++;
                break;
            
            case 'a':
            case 'A':
            case '-':
                astenuti++;
                break;
            
            default:
                printf("Voto non valido\n");
                break;

        }
        
    }

    printf("Favorevoli: %d\n", favorevoli);
    printf("Contrari: %d\n", contrari);
    printf("Astenuti: %d\n", astenuti);
}
