#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar dos	n�meros y	que	luego	emita	por	pantalla
//el	mayor	de	ellos	o	un	cartel	aclaratorio	�Son	iguales� en	el	caso	de	que	as� sea.
//Nota:	los	n�meros	pueden	ser	iguales.
int main()
{
    int nA,nB;

    printf("Ingrese el primer numero\n"); scanf("%d", &nA);
    printf("Ingrese el segundo numero\n"); scanf("%d", &nB);

    if(nA > nB)
        printf("%d\n", nA);
    else if(nA == nB)
        printf("Son iguales\n");
    else
        printf("%d\n", nB);

    return 0;
}
