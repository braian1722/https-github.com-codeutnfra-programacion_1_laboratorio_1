#include <stdio.h>
#include <stdlib.h>
// estrcturas de vectores



float calcularpromedio (int ,int );


int main()
{
  int legajos[3];
  char nombres [3] [30];
  int nota1 [3];
  int nota2 [3];
  float promedio [3];

  int i;
  for (i = 0; i < 3; i++)
    {
        printf("el legajo es: ");
        scanf("%d",&legajos[i]);

        printf("nobres ");
        fflush(stdin);

        gets(nombres[i]);

        printf("nota 1: ");
        scanf("%d", &nota1[i]);

        printf("nota 2 : ");
        scanf("%d",&nota2[i]);



       promedio[i] = calcularpromedio(nota1[i] ,nota2[i]);



  }

  for (i=0;i<3;i++)
    {
        printf("%d ,%s ,%d ,%d ,%d %.2f\n", legajos[i],nombres[i],nota1[i],nota2[i],promedio[i] );

    }

 return 0;
}


  float calcularpromedio (int nota1,int nota2)
  {
      float promedio;
      promedio = (float) (nota1 + nota2)  / 2;

      return  promedio;


  }


