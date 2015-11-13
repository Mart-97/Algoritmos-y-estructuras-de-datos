#include <stdio.h>
#define MAXN 10000
int main()
{
	int n;
	int actual;
	int numbers[MAXN];
	int big1,big2;
scanf("%d",&n);
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&numbers [i]);
	}
	big1 = numbers [0];
	for(int i = 1; i<n; i++)
	{
		if(big1 < numbers[i])
		{
			big1 = numbers[i];
		}
	}
	big2 = numbers[0];
	for(int i = 1; i<n; i++)
	{
		if(big2 < numbers[i]&& numbers[i] != big1)
		{
			big2 = numbers[i];
		}
	}
  promedio = (big1 + big2) / 2.0;
 printf("%d",promedio);
 return 0;
}
