#include <stdio.h>
#include <stdlib.h>

int suma (int numero1, int numemero2);

int main()
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

int suma (int numero1, int numemero2)
{
    int total;
    total = numero1 + numemero2;
    return total;
}









