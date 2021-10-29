#include <stdio.h>
#include <stdlib.h>

void leggi_con_controllo(int min, int max, int divisore);

int main()
{
    int min, max, divisore;

    printf("Inserire minimo, massimo e divisore separati da spazi: ");
    scanf("%d %d %d", &min, &max, &divisore);

    getchar(); //Svuota il buffer

    leggi_con_controllo(min, max, divisore);

    return EXIT_SUCCESS;
    
}

void leggi_con_controllo(int min, int max, int divisore){
    
    char ch;

    while ((ch = getchar()) != '\n')
    {
        printf("ch = %c", ch);
    }

    return;

}