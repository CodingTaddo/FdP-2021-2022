touch default.c;
echo '#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contatore, n_fattoriale;
    contatore = 0;

    printf("Inserire n: ");
    scanf("%d", &n);
}' > default.c;

if ["$1" == ""]
then
	mv default.c noname.c
else
	mv default.c "$1".c;
fi
