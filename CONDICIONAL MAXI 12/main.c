#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa	para	ingresar	un	valor	que	estará expresado	en	minutos.	Si
//los	minutos	superan	los 60,	pasar	el	valor	a	horas,	de	lo	contrario	dejarlo	en
//minutos.	Mostrar	el	resultado	en	pantalla	aclarando	si	se	muestran	minutos	u
//hora
int main()
{
    int minutos,horas;

    printf("Ingrese los minutos\n"); scanf("%d", &minutos);

    if(minutos > 60){
        horas = minutos / 60;
        minutos = minutos % 60;
    }
    else{
        minutos = minutos;
    }

    printf("\n%d horas %d minutos\n", horas, minutos);

    return 0;
}
