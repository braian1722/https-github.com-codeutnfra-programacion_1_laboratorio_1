#include <stdio.h>
#include <stdlib.h>
// estrcturas de vectores



float clacularpromedio (int nota1,int nota2);


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

        printf("nota 2 . ");
        scanf("%d",&nota2[i]);

        printf("el promedio es :");
        scanf("%f",&promedio[i]);


  }

  for (i=0;i<3;i++)
    {

    }


}


  float clacularpromedio (int nota1,int nota2)
  {
      float total;
      promedio = (nota1 + nota2)  / 2;
      total = promedio;


  }


