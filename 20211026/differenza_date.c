#include <stdio.h>
#include <stdlib.h>

#include "datelib.h"

void giorno_successivo(int giorno, int mese, int anno, int *p_giorno_s, int *p_mese_s, int *p_anno_s);

int main()
{
    int giorno, mese, anno, giorno_s, mese_s, anno_s;

    leggi_data_con_controllo(&giorno, &mese, &anno);
    giorno_successivo(giorno, mese, anno, &giorno_s, &mese_s, &anno_s);

    printf("Giorno successivo: %d %d %d\n", giorno_s, mese_s, anno_s);

    return EXIT_SUCCESS;
    
}

void giorno_successivo(int giorno, int mese, int anno, int *p_giorno_s, int *p_mese_s, int *p_anno_s)
{
    
    giorno++;

    if (giorno > giorni_per_mese(mese, anno))
    {
        giorno = 1;
        mese++;

        if (mese > 12)
        {
            mese = 1;
            anno++;
        }
    }

    *p_giorno_s = giorno;
    *p_mese_s = mese;
    *p_anno_s = anno;

    return;
}

int differenza_date(int g1, int g2, int m2, int m2, int a1, int a2)
{
    /* 
    parti dalla prima data
    while (data corrente < seconda data)
    {
        contatore++;
        data corrente = giorno successivo(data); 
    }
    */

    int contatore;
    contatore = 0;

    while (confronta_date(g1, g2, m2, m2, a1, a2) != -1)
}

int confronta_date(int g1, int g2, int m2, int m2, int a1, int a2)
{
    /* 
    -1: la prima è minore della seconda
    0: uguali
    1: la seconda è maggiore della prima
     */

}