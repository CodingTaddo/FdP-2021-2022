#include <stdio.h>
#include <stdlib.h>

#define VERO 1
#define FALSO 0

int controlla_numero(int min, int max, int divisore, int n);
void leggi_con_controllo(int min, int max, int divisore, int *p_somma, int *p_numero_valori);
double calcola_media(int somma, int n);

int main()
{
    int min, max, divisore, somma, numero_valori;
    double media;

    somma = 0;

    printf("Inserire minimo, massimo e divisore separati da spazi: ");
    scanf("%d %d %d", &min, &max, &divisore);

    getchar(); //Svuota il buffer

    leggi_con_controllo(min, max, divisore, &somma, &numero_valori);

    if (somma != 0)
    {
        media = calcola_media(somma, numero_valori);
        printf("%lf", media);
    }
    else
    {
        printf("errore\n");
    }

    return EXIT_SUCCESS;
    
}

int controlla_numero(int min, int max, int divisore, int n)
{
    return ((n >= min) && (n <= max) && (n % divisore == 0));
}

void leggi_con_controllo(int min, int max, int divisore, int *p_somma, int *p_numero_valori)
{
    char ch;
    int n, somma;

    n = 0;
    somma = 0;

    while ((ch = getchar()) != '\n')
    {
        do
        {
            scanf("%d", &n);
        } while (controlla_numero(min, max, divisore, n) == FALSO);

        somma += n;
        *p_numero_valori++;
    }

    *p_somma = somma;

    return;
}

double calcola_media(int somma, int n)
{
    return ((double) somma)/n;
}

/* 
while (ch = getchar != \n)
{
    leggi valore e converti in numero
    while (controlla numero == 0)
    {

    }
}

calcola somma

if (somma == 0)
{
    printf("dati non validi");
}
else
{
    calcola la media
    stampa media
}



 */