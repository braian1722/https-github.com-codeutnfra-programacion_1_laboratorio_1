
#include "funciones.h"
int pedirentero(char mensaje[],int min, int max)

{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    numero = validarentero(numero,min,max,mensaje);

    return numero;
}

 int validarentero(int dato,int min,int max,char mensaje[])
{
while(dato<min || dato >max)
    {
        printf("error: reingrese%s",mensaje);
        scanf("%d",&dato);
    }
    return dato;
}



float pedirflotante(char mensaje[],float min, float max)

{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    numero = pedirflotante(numero,min,max,mensaje);

    return numero;
}

 float validarentero(float dato,float min,float max,char mensaje[])
{
while(dato<min || dato >max)
    {
        printf("error: reingrese%s",mensaje);
        scanf("%f",&dato);
    }
    return dato;
}
