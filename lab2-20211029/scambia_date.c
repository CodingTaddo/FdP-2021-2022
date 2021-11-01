#include <stdio.h>
#include <stdlib.h>

#include "datelib.h"

int main()
{

    int g1, m1, a1, g2, m2, a2;

    leggi_data_con_controllo(&g1, &m1, &a1);
    leggi_data_con_controllo(&g2, &m2, &a2);

    scambia_date(&g1, &m1, &a1, &g2, &m2, &a2);

    printf("Data 1: %d %d %d\n", g1, m1, a1);
    printf("Data 2: %d %d %d\n", g2, m2, a2);

    return EXIT_SUCCESS;
    
}
