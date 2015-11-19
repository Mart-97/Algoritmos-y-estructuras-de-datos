///Indicar
#include <stdio.h>

int main()
{
  int a[5] = {2,4,6,8,10};
  int *api;
  int i = 4;
  api = &a[4];
  
  while(i--)
  {
  	printf("%d\n",*api--);
  }
}
