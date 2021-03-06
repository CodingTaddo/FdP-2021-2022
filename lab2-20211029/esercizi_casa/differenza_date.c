#include <stdio.h>
#include <stdlib.h>

#define VERO 1
#define FALSO 0

int is_bisestile(int a);
int giorni_per_mese(int m, int a);
int checkdate(int g, int m, int a);
void leggi_data_con_controllo(int *p_giorno, int *p_mese, int *p_anno);
int confronta_date(int g1, int g2, int m1, int m2, int a1, int a2);
void swap (int *aPtr, int *bPtr);
void scambia_date(int *g1Ptr, int *m1Ptr, int *a1Ptr, int *g2Ptr, int *m2Ptr, int*a2Ptr);
void giorno_successivo(int giorno, int mese, int anno, int *p_giorno_s, int *p_mese_s, int *p_anno_s);
int differenza_tra_date(int g1, int m1, int a1, int g2, int m2, int a2);

int main()
{
   int g1, m1, a1, g2, m2, a2;
   int giorni_di_differenza;

   printf("DATA 1\n");
   leggi_data_con_controllo(&g1, &m1, &a1);

   printf("DATA 2\n");
   leggi_data_con_controllo(&g2, &m2, &a2);

   giorni_di_differenza = differenza_tra_date(g1, m1, a1, g2, m2, a2);

   printf("\n");
   printf("Tra il %d %d %d e il %d %d %d intercorrono %d giorni\n", g1, m1, a1, g2, m2, a2, giorni_di_differenza);

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

void leggi_data_con_controllo(int *p_giorno, int *p_mese, int *p_anno)
{
   int giorno, mese, anno;

   printf("Inserire giorno mese anno: ");
   scanf("%d %d %d", &giorno, &mese, &anno);

   while (!(checkdate(giorno, mese, anno)))
   {
      printf("Inserire giorno mese anno: ");
      scanf("%d %d %d", &giorno, &mese, &anno);
   }

   *p_giorno = giorno;
   *p_mese = mese;
   *p_anno = anno;
   
   return;
}

int confronta_date(int g1, int m1, int a1, int g2, int m2, int a2)
{
   /* 
   -1: la prima ?? maggiore della seconda
   0: uguali
   1: la seconda ?? maggiore della prima
   */

   if (a1 > a2)
      return -1; 
   else if (a1 == a2)
      if (m1 > m2)
         return -1;
      else if (m1 == m2)
         if (g1 > g2)
            return -1;
         else if (g1 == g2)
            return 0;
         else
            return 1;
      else
         return 1;
   else
      return 1;

}

void swap (int *aPtr, int *bPtr)
{

   int t;

   t = *aPtr;
   *aPtr = *bPtr;
   *bPtr = t;

   return;
}

void scambia_date(int *g1Ptr, int *m1Ptr, int *a1Ptr, int *g2Ptr, int *m2Ptr, int*a2Ptr)
{
   /* scambia giorni */
   swap (g1Ptr, g2Ptr);

   /* scambia mesi */
   swap (m1Ptr, m2Ptr);

   /* scambia anni */
   swap (a1Ptr, a2Ptr);
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

int differenza_tra_date(int g1, int m1, int a1, int g2, int m2, int a2)
{

   if (confronta_date(g1, m1, a1, g2, m2, a2) == -1)
      scambia_date(&g1, &m1, &a1, &g2, &m2, &a2);

   int giorni_di_differenza;
   giorni_di_differenza = 0;

   while (confronta_date(g1, m1, a1, g2, m2, a2) != 0)
   {
      giorni_di_differenza++;
      giorno_successivo(g1, m1, a1, &g1, &m1, &a1);
   }

   return giorni_di_differenza;

}