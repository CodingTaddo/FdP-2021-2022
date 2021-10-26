#include <stdio.h>
#include <stdlib.h>

#define VERO 1
#define FALSO 0

int checkdate(int g, int m, int a);

int main()
{
    int giorno, mese, anno;

    printf("Inserire giorno mese anno: ");
    scanf("%d %d %d", &giorno, &mese, &anno);

    if (checkdate(giorno, mese, anno))
    {
        printf("Data corretta\n");
    }
    else
    {
        printf("Data errata\n");
    }

    return EXIT_SUCCESS;
    
}

int checkdate(int g, int m, int a)
{

    if (a < 1582)
    {
        return FALSO;
    }

    switch (m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if ((g > 31) || (g < 1))
            {
                return FALSO;
            }
            else
            {
                return VERO;
            }
            break;
        case 2:

            int anno_bisestile;

            if ((anno % 4 == 0) || (anno % 400 == 0))
            {
                anno_bisestile = VERO;
            }
            else
            {
                anno_bisestile = FALSO;
            }

            if (anno_bisestile == VERO)
            {
                if ((g > 29) || (g < 1))
                {
                    return FALSO;
                }
                else
                {
                    return VERO;
                }
                break;
            }

            if ((g > 28) || (g < 1))
            {
                return FALSO;
            }
            else
            {
                return VERO;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if ((g > 30) || (g < 1))
            {
                return FALSO;
            }
            else
            {
                return VERO;
            }
            break;
        default:
            break;
    }
        
    return FALSO;
}


