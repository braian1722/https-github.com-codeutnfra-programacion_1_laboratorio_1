#include <stdio.h>
#include <stdlib.h>
#define TAM 5


void mostrarvector(int [],int);
void modificarvalor(int[]);
int mostrarmaximo (int[],int);


int main()
{

    int vector [TAM]; //ocupa 20 bites   iniciar un vecto en 0 automaticamente todos son 0
    int i;
    int edad;
    int mayor;


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

  /*modificarvalor(vector);  */

mostrarmaximo( vector,TAM);
printf("\n el maximo es %d",mayor);

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

/*void modificarvalor(int vec[])
{
    vec [3] =789;
}
*/

int mostrarmaximo (int vec[],int tam)
{
    int maximo;
    int i;
    int flag = 0;
    for (i=0;i<tam;i++)
    {
        if (flag ==0 || vec[i >maximo])
        {
            maximo =vec[i];
            flag=1;

        }
    }

  return maximo;
  }



