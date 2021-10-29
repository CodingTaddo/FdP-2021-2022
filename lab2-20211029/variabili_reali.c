#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
 
double valore_assoluto(double x);
int elevamento_a_potenza(int a, int b);
double mysqrt (double r, int precisione); 
 
int main() 
{ 
   double r1, r2; 
 
   r1 = sqrt (2.0); 
   r2 = mysqrt (2.0, 40); 
 
   if (r1 == r2) 
   { 
      printf ("OK! Radice di due = %.40lf\n", r1); 
   } 
   else 
   { 
      printf ("Bo!? x = %.40f, y = %.40lf\n", r1, r2); 
   } 
 
   return EXIT_SUCCESS; 
} 
 
double mysqrt (double r, int precisione) 
{ 
   double n1, n2; 
 
   n1 = r; 
   n2 = 1; 
   while (valore_assoluto(n1 - n2) > 0.01) 
   { 
      n1 = (n1 + n2) / 2; 
      n2 = r / n1; 
   } 
   return n1; 
}

double valore_assoluto(double x)
{
   if (x > 0)
      return x;
   else
      return -x;
}

int elevamento_a_potenza(int base, int esponente) 
{

   int contatore, risultato;
   
   contatore = 0;
   risultato = 1;

   while (contatore < esponente)
   {
       risultato = risultato * base;
       contatore++;
   }

   return risultato;  
}

/* double mysqrt (double r, int precisione) 
{ 
   double n1, n2;
 
   n1 = r; 
   n2 = 1; 
   while (valore_assoluto(n1 - n2) > ) 
   { 
      printf("%lf\n", n1);
      n1 = (n1 + n2) / 2; 
      n2 = r / n1; 
   } 
   return n1; 
} */

/* Le due funzioni producono risultati con precisione diversa */

/* 4142135623730951454746218587388284504414
4142135623730949234300169337075203657150 */