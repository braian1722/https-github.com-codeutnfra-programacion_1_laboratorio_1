#include <stdio.h>
#include <stdlib.h>
int contadorpares(int[],int);


int bucarchar(char[],int,char);



int main()
{
   int vector [5]= {5,2,8,6,10};
   char  [5] ={'a','f','g','b','t'};
   int indexletra;
   int cantidad;

   cantidad = contadorpares(vector,5);
   print("cantidad de pares: %d",cantidad);

   indexletra = buscarchar (letras,5,'a');
   if (indexletra== 1)
   {
       printf("nose encuentra el caracter");
   }else
   {
       printf("el caractecr se encuentra en el array\n");
   }

    return 0;
}

int contadorpares (int array[],int cantidad)
{
    int contpares;
    int i;

    for (i=0;i<cantidad;i++)
    {
        if(array[i]%2==0)
        {
            contpares++;
        }
    }

    return contpares;
}


itn buscarchar (char array[],int cantidad,char caracteres)
{
    int index = -1;
    int i;
    for (i=0; i<cantidad;i++)
    {
        if(array[i]==caracteres)
        {
            index =1;
            break;
        }
        return index;
    }







}
