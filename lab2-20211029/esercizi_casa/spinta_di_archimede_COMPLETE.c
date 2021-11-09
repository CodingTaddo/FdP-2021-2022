#include <stdio.h>
#include <stdlib.h>

#define PI_GRECO 3.141592
#define DENSITA_ACQUA 1.028
#define ACCELERAZIONE_GRAVITA 9.81

double volume_sfera(double raggio);
double spinta_di_archimede(double volume);

int main()
{
    double raggio, volume_s, spinta;

    //printf("Inserire raggio (in metri): ");
    scanf("%lf", &raggio);

    volume_s = volume_sfera(raggio);
    spinta = spinta_di_archimede(volume_s);

    printf("%lf\n", spinta);

    return EXIT_SUCCESS;
    
}

double volume_sfera(double raggio)
{
    return (4 * PI_GRECO * (raggio*raggio*raggio))/3;
}

double spinta_di_archimede(double volume)
{
    return DENSITA_ACQUA * volume * ACCELERAZIONE_GRAVITA;
}