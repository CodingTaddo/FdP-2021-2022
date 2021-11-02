#include <stdio.h>
#include <stdlib.h>

#define VERO 1
#define FALSO 0

int is_bisestile(int a);
int giorni_per_mese(int m, int a);
void giorno_successivo(int giorno, int mese, int anno, int *p_giorno_s, int *p_mese_s, int *p_anno_s);
int checkdate(int g, int m, int a);
void leggi_data_con_controllo_modificata(int *p_giorno, int *p_mese, int *p_anno);
void scambia_date(int *g1Ptr, int *m1Ptr, int *a1Ptr, int *g2Ptr, int *m2Ptr, int*a2Ptr);
int confronta_date(int g1, int g2, int m1, int m2, int a1, int a2);
void somma_n_a_data(int *p_giorno, int *p_mese, int *p_anno, int giorno, int mese, int anno, int n);

int main()
{
    int giorno, mese, anno, n;

    leggi_data_con_controllo_modificata(&giorno, &mese, &anno);
    scanf("%d", &n);

    somma_n_a_data(&giorno, &mese, &anno, giorno, mese, anno, n);

    printf("%d %d %d\n", giorno, mese, anno);

    return EXIT_SUCCESS;
    
}

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

void giorno_precedente(int giorno, int mese, int anno, int *p_giorno_p, int *p_mese_p, int *p_anno_p)
{

    if (giorno == 1)
    {
        if (mese == 1)
        {
            giorno = 31;
            mese = 12;
            anno--;
        }
        else
        {
            giorno = giorni_per_mese(mese-1, anno);
            mese--;
            anno--;
        }

    }
    else
    {
        giorno--;
    }

    *p_giorno_p = giorno;
    *p_mese_p = mese;
    *p_anno_p = anno;

    return;
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

void leggi_data_con_controllo_modificata(int *p_giorno, int *p_mese, int *p_anno)
{
    int giorno, mese, anno;

    printf("Inserire giorno mese anno: ");
    scanf("%d %d %d", &giorno, &mese, &anno);

    if (!(checkdate(giorno, mese, anno)))
    {
        printf("non corretta\n");
        exit(-1);
    }

    *p_giorno = giorno;
    *p_mese = mese;
    *p_anno = anno;

    return;
}

void somma_n_a_data(int *p_giorno, int *p_mese, int *p_anno, int giorno, int mese, int anno, int n)
{

    int contatore;

    if (n >= 0)
    {
        contatore = 0;

        while (contatore < n)
        {
            giorno_successivo(giorno, mese, anno, &giorno, &mese, &anno);
            contatore++;
        }

    }
    else
    {
        contatore = 0;

        while (contatore < -n)
        {
            giorno_precedente(giorno, mese, anno, &giorno, &mese, &anno);
            contatore++;
        }
    }

    *p_giorno = giorno;
    *p_mese = mese;
    *p_anno = anno;

    return;
}