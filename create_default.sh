#!/bin/bash

touch "default.c";
echo '#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contatore;
    contatore = 0;

    printf("Inserire n: ");
    scanf("%d", &n);

    return EXIT_SUCCESS;
    
}' > "default.c";

if [ "$1" == "" ]
then
	mv default.c noname.c;
    echo "Created file noname.c";
else
	mv default.c "$1".c;
    echo "Created file $1.c"
fi