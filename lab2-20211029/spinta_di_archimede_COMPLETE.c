#include <stdio.h>
#include <stdlib.h>

#define PI_GRECO 3.141592
#define DENSITA_ACQUA 1.028
#define ACCELERAZIONE_GRAVITA 9.81

double converti_in_decimetri(double l);
double volume_sfera(double raggio);
double spinta_di_archimede(double volume);

int main()
{
    double raggio, raggio_convertito, volume_s, spinta;

    printf("Inserire raggio (in centimetri): ");
    scanf("%lf", &raggio);

    raggio_convertito = converti_in_decimetri(raggio);
    volume_s = volume_sfera(raggio_convertito);
    spinta = spinta_di_archimede(volume_s);

    printf("La spinta di Archimede ricevuta da una sfera di raggio %lfcm se immersa completamente in acqua è pari a %lfN\n", raggio, spinta);

    return EXIT_SUCCESS;
    
}

double converti_in_decimetri(double l)
{
    return l/10;
}

double volume_sfera(double raggio)
{
    return 4 * PI_GRECO * (raggio*raggio*raggio);
}

double spinta_di_archimede(double volume)
{
    return DENSITA_ACQUA * volume * ACCELERAZIONE_GRAVITA;
}