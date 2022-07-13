#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar un	número	y	mostrar	por	pantalla	un	cartel
//aclaratorio	si	el	mismo	es	PAR	o	IMPAR
int main()
{
    int n;

    printf("Ingrese un numero\n"); scanf("%d", &n);

    if(n % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}
