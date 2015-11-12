#include <stdio.h>
#include <string.h>
#define MAXN 100
int main()
{
 	int  matriz [MAXN][MAXN];
	int filas;
	int columnas;
	int inicio,fin,n;
	 int palindromo = 0;
	 scanf("%d%d",&filas,&columnas);

	int x = 0,y = columnas - 1;
for(int i = 0; i<filas; i++)
{
	for(int j = 0; j<columnas; j++)
	{
		if(i == j) matriz[i][j] = 1;
		matriz[x][y] = 1;
	}
	x++;
	y--;
}
for(int i = 0; i<filas; i++)
{
	for(int j = 0; j<columnas; j++)
	{
		printf("%d ",matriz[i][j]);
	}
	printf("\n");
}
 return 0;
}
