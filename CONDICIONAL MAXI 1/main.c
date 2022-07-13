#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar un	número	y	luego	se	emita	por	pantalla	un
//cartel	aclaratorio	si	“Es	mayor	a	10” o	“No	es	mayor	a	10”
int main()
{
    int n;

    printf("Ingrese un numero\n"); scanf("%d", &n);

    if(n > 10)
        printf("Es mayor a 10\n");
    else
        printf("No es mayor a 10\n");

    return 0;
}
