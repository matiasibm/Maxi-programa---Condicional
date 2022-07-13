#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar	cuatro	números y	luego	mostrar	por	pantalla
//cuáles son	mayores	a	100

int main()
{
    int n1,n2,n3,n4;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);
    printf("Ingrese el tercer numero\n"); scanf("%d", &n3);
    printf("Ingrese el cuarto numero\n"); scanf("%d", &n4);

    if(n1 > 100)
        printf("%d\n", n1);
    if(n2 > 100)
        printf("%d\n", n2);
    if(n3 > 100)
        printf("%d\n", n3);
    if(n4 > 100)
        printf("%d\n", n4);
    else
        printf("Ninguno es mayor a 100");

    return 0;
}
