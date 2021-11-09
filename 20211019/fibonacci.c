#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f_n, f_n_meno_1, f_n_meno_2, contatore, n;

    f_n_meno_2 = 0;
    f_n_meno_1 = 1;
    f_n = 0;
    contatore = 2;

    printf("Inserire n: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("f_0 = %d\n", f_n_meno_2);
        
        if (n >= 1)
        {
            printf("f_1 = %d\n", f_n_meno_1);

            if (n >= 2)
            {
                while(contatore <= n)
                    {
                        f_n = f_n_meno_1 + f_n_meno_2;
                        f_n_meno_2 = f_n_meno_1;
                        f_n_meno_1 = f_n;

                        printf("f_%d = %d\n", contatore, f_n);

                        contatore++;        
                    }
            }
        }
    }

}