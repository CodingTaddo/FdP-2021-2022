#include <stdio.h>
#include <stdlib.h>

#define VERO 1
#define FALSO 0

int dimensione_e_corretta(int dimensione);
void stampa_figura(char tipo_figura, int dimensione);
void stampa_quadrato(int dimensione);
void stampa_triangolo(int dimensione);
void stampa_linea(int dimensione);

int main()
{

    char tipo_figura;
    int dimensione;


    //printf("Inserire la sequenza di codici: \n");

    while ((tipo_figura = getchar()) != '\n')
    {

        dimensione = getchar() - '0';

        if (dimensione_e_corretta(dimensione) == VERO)
        {
            stampa_figura(tipo_figura, dimensione);
            printf("\n");
        }
        else
        {
            printf("Dati errati, riprovare\n");
            exit(-1);
        }

    }

    return EXIT_SUCCESS;
    
}

int dimensione_e_corretta(int dimensione)
{
    if ((dimensione >= 1) && (dimensione <= 9))
    {
        return VERO;
    }
    else
    {
        return FALSO;
    }
}

void stampa_figura(char tipo_figura, int dimensione)
{
    switch (tipo_figura)
    {
        case 'Q':
            stampa_quadrato(dimensione);
            break;
        case 'T':
            stampa_triangolo(dimensione);
            break;
        case 'L':
            stampa_linea(dimensione);
            break;
        default:
            printf("Dati errati, riprovare\n");
            exit(-1); 
    }

    return;
    
}

void stampa_quadrato(int dimensione)
{

    int righe, colonne;

    righe = 0;

    while (righe < dimensione)
    {
        colonne = 0;

        while (colonne < dimensione)
        {
            printf("*");
            colonne++;
        }
        printf("\n");
        righe++;
    }

    return;    
}

void stampa_triangolo(int dimensione)
{
    int righe, colonne;

    righe = 0;
    colonne = 0;

    while (righe < dimensione)
    {
        while (colonne <= righe)
        {
            printf("*");
            colonne++;
        }

        printf("\n");
        righe++;
        colonne = 0;
    }

    return;
}

void stampa_linea(int dimensione)
{
    int colonne;

    colonne = 0;

    while (colonne < dimensione)
    {
        printf("*");
        colonne++;
    }

    printf("\n");

    return; 
}