#include <stdio.h>
#include <string.h>
#define MAXN 100
int main()
{
 	int  matriz [MAXN][MAXN];
	int filas;
	int columnas;
	int inicio,fin,n;
	 scanf("%d%d",&filas,&columnas);
	int x = 0,y = n - 1;
for(int i = 0; i<filas; i++)
{
	for(int j = 0; j<columnas; j++)
	{
		scanf("%d",&matriz[i][j]);
	}

}
for(int i = filas - 1; i >= 0; i--)
{
	for(int j = 0; j < columnas; j++)
	{
		printf("%d ",matriz[i][j]);
	}
	printf("\n");
}
 return 0;
}
