#include <stdio.h>
#define MAXN 10000
int main()
{
	scanf("%d%d",&n,&m);

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
		scanf("%d",&numbers [i]);
		}	
	}
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
		printf("%d",numbers [j][i]);
		}	
	}
 return 0;
}
