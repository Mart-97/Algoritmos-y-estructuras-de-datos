#include <stdio.h>
#include <string.h>
#define MAXN 100
int main()
{
 	int  matriz [MAXN][MAXN];
	int n;
	int x = 0,
	 scanf("%d",&n);
	int y = n - 1;
for(int i = 0;  i < n; i++)
{
	for(int j = 0; j < n; j++)
	{
		if(i == j) matriz[i][j] = 1;
		matriz[x][y] = 1;
    printf("%d ",matriz[i][j]);
	}
	printf("\n");
	x++;
	y--;
}
 return 0;
}
