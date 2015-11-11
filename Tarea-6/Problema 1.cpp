
#include <stdio.h>
#define MAXN 1000
int main()
{
	int n;
	int pares = 0;
	int numbers[MAXN];
scanf("%d",&n);
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&numbers [i]);
		if(numbers[i] %  2 == 0) pares++;
	}

 printf("%d",pares);
 return 0;
}
