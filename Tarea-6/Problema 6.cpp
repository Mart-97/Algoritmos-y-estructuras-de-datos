#include <stdio.h>
#define MAXN 100
int main()
{
 	int  matriz [MAXN][MAXN];
	int filas;
	int columnas;
	int inicio,fin,n;
	 scanf("%d",&n);
for(int i = 0; i<n; i++)
{
	for(int j = 0; j<n; j++)
	{
		scanf("%d",&matriz[i][j]);
	}

}
printf("\n");
for(int i = 0; i<n; i++)
{
	for(int j = 0; j < n; j++)
	{
		printf("%d ",matriz[i][j]);
	}
	printf("\n");
}
printf("\n");
for(int i = n - 1; i >= 0; i--)
{
	for(int j = 0; j < n; j++)
	{
		printf("%d ",matriz[i][j]);
	}
	printf("\n");
}
 return 0;
}
