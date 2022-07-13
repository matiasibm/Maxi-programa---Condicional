#include <stdio.h>
#include <stdlib.h>
//Una	casa	de	video	juegos otorga	un	descuento	dependiendo	del	importe	de	la
//compra	realizada según	los	siguientes	valores:
//• Si	el	importe	es	menor	a	ARS	1000,	no	hay	descuento.
//• Si	el	importe	es ARS	1000	 o	más	pero	menor	a	ARS	5000,	aplica	un
//descuento	del	10%.
//• Si	el	importe	es ARS	5000	o	más,	aplica	un	descuento	del	18%.
//Hacer	un	programa	para	ingresar	un	importe	de	venta	y	luego	muestre	por
//pantalla	el	importe	final	con	el	descuento	que	corresponda
int main()
{
    float importe,importeFinal;

    printf("Ingrese el monto de su compra\n"); scanf("%f", &importe);
//
//    if(importe < 1000)
//        descuento = 0;
//    else if(importe >= 1000 && importe < 5000)
//        descuento = importe * 0.10;
//    else
//        descuento = importe * 0.18;
//
//    importeFinal = importe - descuento;
//
//    printf("\nUsted debera abonar $%g\nObtuvo un descuento de $%g\n", importeFinal, descuento);

    if(importe < 1000)
        importeFinal = importe;
    else if(importe >= 1000 && importe < 5000)
        importeFinal = importe - (importe * 0.10);
    else
        importeFinal = importe - (importe * 0.18);

    printf("Usted debera abonar $%g\n", importeFinal);

    return 0;
}
