#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar	cuatro	números distintos	y	luego	mostrar	por
//pantalla	el	menor	de	ellos
int main()
{
    int n1,n2,n3,n4,menor;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);
    printf("Ingrese el tercer numero\n"); scanf("%d", &n3);
    printf("Ingrese el cuarto numero\n"); scanf("%d", &n4);

    if(n1 <= n2 && n1 <= n3 && n1 <= n4)
        menor = n1;
    else if(n2 <= n1 && n2 <= n3 && n2 <= n4)
        menor = n2;
    else if(n3 <= n1 && n3 <= n2 && n3 <= n4)
        menor = n3;
    else
        menor = n4;

    printf("%d\n", menor);

    return 0;
}
