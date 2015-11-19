///Gestionar memoria
#include <stdio.h>

int main()
{
  int a[5] = {2,4,6,8,10};
  int *api;
  int i = 4;
  api = new int;
  *api = 5;

  	printf("%d",*api);
return 0;
}
