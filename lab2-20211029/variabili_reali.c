#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
double mysqrt (double r);
 
int main()
{
   float r1, r2;
 
   r1 = sqrt (2.0);
   r2 = mysqrt (2.0);
 
   if (r1 == r2)
   {
      printf ("OK! Radice di due = %.40lf\n", (double) r1);
   }
   else
   {
      printf ("Bo!? x = %.40f, y = %.40lf\n", r1, r2);
   }
 
   return EXIT_SUCCESS;
}
 
double mysqrt (double r)
{
   /* calcola la radice con il metodo di Newton */
   double n1, n2;
 
   n1 = r;
   n2 = 1;
   while (n1 - n2 > 0)
   {
      n1 = (n1 + n2) / 2;
      n2 = r / n1;
   }
   return n1;
}