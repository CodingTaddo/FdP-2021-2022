#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
   int n, i; 
   long long int nfatt; 
 
   printf ("inserisci n: "); 
   scanf ("%d", &n); 
 
   i = 1; 
   nfatt = 1; 
   while (i <= n) 
   { 
      nfatt = nfatt * i; 
      i++; 
   } 
 
   printf ("n! = %lld\n", nfatt);
 
   return EXIT_SUCCESS; 
} 

/* Supero i limiti massimi per il numero intero, per cui devo dichiarare la variabile nfatt di tipo long  */