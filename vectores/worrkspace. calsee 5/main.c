#include <stdio.h>
#include <stdlib.h>
#define TAM 5


void mostrarvector(int [],int);
int main()
{

    int vector [TAM]; //ocupa 20 bites   iniciar un vecto en 0 automaticamente todos son 0
    int i;


     for (i=0; i<TAM;i++)
     {
         vector[i] = 0 ; // si nose usa el [5] = {0};
     }

     /*carga secuencial*/

         for (i=0; i<TAM;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&vector[i]);
    }


    /*mostrar vector*/










mostrarvector(vector, TAM);
    return 0;
}

void mostrarvector(int vec [],int tam)
{
    int i;
     for (i=0; i<tam;i++)                   //mostrar cualquier vetor de tipo entero.
    {
        printf("%d--  %d\n",i, vec[i]);
    }
}




