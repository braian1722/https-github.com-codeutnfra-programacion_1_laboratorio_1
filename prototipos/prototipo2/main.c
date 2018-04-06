#include <stdio.h>
#include <stdlib.h>

void suma (void);

int main()
{
    suma();

}

void suma ()
{
    int numero1;
    int numero2;
    int resultado;

    printf("ingrese numero a sumar: ");
    scanf("%d",&numero1);

    printf("ingrese numero a sumar: ");
    scanf("%d",&numero2);

    resultado= numero1+numero2;
    printf("La suma es %d",resultado);
}
