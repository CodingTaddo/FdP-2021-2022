#include <stdlib.h>
#include <stdio.h>

#define VERO 1
#define FALSO 0

#include "utilitylib.h"

void leggi_data_con_controllo(int *p_giorno, int *p_mese, int *p_annno);
int checkdate(int g, int m, int a);
int giorni_per_mese(int m, int a);
int is_bisestile(int a);
void scambia_date(int *g1Ptr, int *m1Ptr, int *a1Ptr, int *g2Ptr, int *m2Ptr, int*a2Ptr);