#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar	un	n�mero	y	luego	se	emita	un	cartel	por
//pantalla	�Positivo� si	el	n�mero	es	mayor	a	cero,	�Negativo� si	el	n�mero	es
//menor	a	cero	o	�Cero� si	el	n�mero	es	igual	a	cero.
//Nota: requiere	m�s	de	in	IF!	Repas� c�mo	se	escribir�an
int main()
{
    int n;

    printf("Ingrese un numero\n"); scanf("%d", &n);

    if(n > 0)
        printf("Positivo\n");
    else if(n == 0)
        printf("Cero\n");
    else
        printf("Negativo\n");

    return 0;
}
