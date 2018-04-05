#include <stdio.h>
#include <stdlib.h>
//             retorna   recibe
//prototipo 1   no        no
//prototipo 2   no        si
//prototipo 3   si        si
//prototipo 4   si        no

int mostrarincrementar(int);


int main()
{

  int numero;
  int incremento;

  printf("ingrese un numero:" );
  scanf("%d",&numero);

    //llamada ala funcion
     incremento = mostrarincrementar(numero);
     printf("\nel numero incrementado es : %d",numero);
    return 0;
}

//implementacion o desarrollo de la funcion


int mostrarincrementar(int numero)
{
// pasaje de parametros por valor = se pasa una copia del valor del main y  despues se modifica

    printf("el numero ingresado es: %d", numero);

    numero = numero + 10;


}





