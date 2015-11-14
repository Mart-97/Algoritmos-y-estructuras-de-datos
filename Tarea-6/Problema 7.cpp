#include <stdio.h>
#define MAXN 100
int main()
{
    int numbers[MAXN][MAXN];
    int m,n;
	scanf("%d%d",&n,&m);

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
		scanf("%d",&numbers[i][j]);
		}
	}
	printf("\n");
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
		printf("%d ",numbers [i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
		printf("%d ",numbers [j][i]);
		}
		printf("\n");
	}
 return 0;
}
