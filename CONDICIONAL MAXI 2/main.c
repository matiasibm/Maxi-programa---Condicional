#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar dos	números	distintos	y	luego	se	muestre	por
//pantalla	el	menor	de	ellos
int main()
{
    int nA,nB,menor;

    printf("Ingrese el primer numero\n"); scanf("%d", &nA);
    printf("Ingrese el segundo numero\n"); scanf("%d", &nB);

    if( nA > nB )
        menor = nB;
    else
        menor = nA;

    printf("%d es el menor", menor);

    return 0;
}
