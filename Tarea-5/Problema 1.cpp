#include <stdio.h>


int  main()
{
    int a,b,c;
    printf("Inserte los lados del supuesto triangulo")
    scanf("%d%d%d",&a,&b,&c);
    if(a < b+c && b < a+c && c<a+b)
    {
      if(a == b && b == c)
      {
          printf("El triangulo es equilatero");
      }else
      {
          if(a == b || a == c || b == c)
          {
            printf("El triangulo es isosceles");
          } else
          {
              printf("El triangulo es escaleno");
          }
      }
    }
    else
    {
        printf("No existe triangulo");
    }
	return 0;
}
