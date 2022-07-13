#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar cuatro	números	y	luego	mostrar	por	pantalla
//cuántos son	menores	a	100
int main()
{
    int n1,n2,n3,n4,cant_menor = 0;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);
    printf("Ingrese el tercer numero\n"); scanf("%d", &n3);
    printf("Ingrese el cuarto numero\n"); scanf("%d", &n4);

    if(n1 < 100)
        cant_menor++;
    if(n2 < 100)
        cant_menor++;
    if(n3 < 100)
        cant_menor++;
    if(n4 < 100)
        cant_menor++;

    printf("%d son menores a 100", cant_menor);

    return 0;
}
