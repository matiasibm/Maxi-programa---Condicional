#include <stdio.h>
#include <stdlib.h>
//Hacer	un	programa para	ingresar	cinco	números	distintos	y	luego	mostrar	por
//pantalla	el	mayor	y	el	menor	de	ellos
int main()
{

    int n1,n2,n3,n4,n5,menor,mayor;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);
    printf("Ingrese el tercer numero\n"); scanf("%d", &n3);
    printf("Ingrese el cuarto numero\n"); scanf("%d", &n4);
    printf("Ingrese el quinto numero\n"); scanf("%d", &n5);

    if((n1 >= n2) && (n1 >= n3) && (n1 >= n4) && (n1 >= n5)){           //n1 mayor
        mayor = n1;
        if((n2 <= n3) && (n2 <= n4) && (n2 <= n5))
            menor = n2;
        else if((n3 <= n4) && (n3 <= n5))
            menor = n3;
        else if(n4 <= n5)
            menor = n4;
        else
            menor = n5 ;
    }
    else if((n2 >= n1) && (n2 >= n3) && (n2 >= n4) && (n2 >= n5)){      //n2 mayor
        mayor = n2;
        if((n3 <= n4) && (n3 <= n5) && (n3 <= n1))
            menor = n3;
        else if((n4 <= n5) && (n4 <= n1))
            menor = n4;
        else if(n5 <= n1)
            menor = n5;
        else
            menor = n1;
    }
    else if((n3 >= n1) && (n3 >= n4) && (n3 >= n5) && (n3 >= n2)){      //n3 mayor
        mayor = n3;
        if((n4 <= n5) && (n4 <= n1) && (n4 <= n2))
            menor = n4;
        else if((n5 <= n1) && (n5 <= n2))
            menor = n5;
        else if(n1 <= n2)
            menor = n1;
        else
            menor = n2;
    }
    else if((n4 >= n1) && (n4 >= n2) && (n4 >= n3) && (n4 >= n5)){      //n4 mayor
        mayor = n4;
        if((n5 <= n1) && (n5 <= n2) && (n5 <= n3))
            menor = n5;
        else if((n1 <= n2) && (n1 <= n3))
            menor = n1;
        else if(n2 <= n3)
            menor = n2;
        else
            menor = n3;
    }
    else{                                                               //n5 mayor
        mayor = n5;
        if((n1 <= n2) && (n1 <= n3) && (n1 <= n4))
            menor = n1;
        else if((n2 <= n3) && (n2 <= n4))
            menor = n2;
        else if(n3 <= n4)
            menor = n3;
        else
            menor = n4;
    }

    printf("%d\n%d",mayor,menor);

    return 0;
}
