#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
float pedirflotante(char[],float,float);
char pedirchar (char[],char,char);


int pedirentero (char[],int , int );
int validarentero (int,int, int,char []);

int main()
{
    int edad; //18-60
    int legajo;//1-1000
    int nota;//1-10


    edad = pedirentero("ingrese edad: ",18 ,60);

    legajo = pedirentero("ingrese legajo:",1 , 1000);

    nota = pedirentero("ingrese nota",1 , 10);
    printf("la edad es :%d y el legajo es: %d y la nota es: %d", edad, legajo,nota);

    return 0;
}

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
