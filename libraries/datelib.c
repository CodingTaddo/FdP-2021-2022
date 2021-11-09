#include <stdlib.h>
#include <stdio.h>

#define VERO 1
#define FALSO 0

#include "utilitylib.h"

int is_bisestile(int a)
{
    if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
    {
        return VERO;
    }
    else
    {
        return FALSO;
    }
}

int giorni_per_mese(int m, int a)
{

    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            return 31;

        case 2:

            if (is_bisestile(a) == VERO)
            {
                return 29;
            }
            else
            {
                return 28;
            }

        case 4:
        case 6:
        case 9:
        case 11:
            
            return 30;

        default:
            
            return -1;

    }
}

int checkdate(int g, int m, int a)
{

    if (a < 1582)
    {
        return FALSO;
    }

    if ((m < 0) || (m > 12))
    {
        return FALSO;
    }

    if ((g < 1) || (g > giorni_per_mese(m, a)))
    {
        return FALSO;
    }
        
    return VERO;
}

void leggi_data_con_controllo(int *p_giorno, int *p_mese, int *p_anno)
{
    int giorno, mese, anno;

    printf("Inserire giorno mese anno: ");
    scanf("%d %d %d", &giorno, &mese, &anno);

    while (!(checkdate(giorno, mese, anno)))
    {
        printf("Inserire giorno mese anno: ");
        scanf("%d %d %d", &giorno, &mese, &anno);
    }

    *p_giorno = giorno;
    *p_mese = mese;
    *p_anno = anno;

    return;
}

void scambia_date(int *g1Ptr, int *m1Ptr, int *a1Ptr, int *g2Ptr, int *m2Ptr, int*a2Ptr)
{
    /* scambia giorni */
    swap (g1Ptr, g2Ptr);

    /* scambia mesi */
    swap (m1Ptr, m2Ptr);

    /* scambia anni */
    swap (a1Ptr, a2Ptr);
}