///Asignar  memoria dinámica
#include <stdio.h>

int main()
{
  int a[5] = {2,4,6,8,10};
  int *api = 0;
  unsigned tam;
  printf("Da la longitud del arreglo: ");
  scanf("%u",&tam);
  api = new int [tam];
  for(int i = 0; i<tam; i++) api[i] = 3 * i;
  for(int i = 0; i<tam; i++)printf("%d ",api[i]);

return 0;
}
