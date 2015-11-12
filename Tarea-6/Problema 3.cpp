#include <stdio.h>
#define MAXN 10000
int main()
{
	int n;
	int pos = 1;
	 int existe = 0;
	int unicos[MAXN];
	int numbers[MAXN];
scanf("%d",&n);
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&numbers[i]);
	}
unicos[0] = numbers[0];

	for(int i = 1; i<n; i++)
	{
		for(int j = 0; j<pos; j++ )
		{
 			if(numbers[i] == unicos[j]) existe = 1;
		}
		if(existe != 1)
		{
			unicos[pos] = numbers[i];
			pos++;

		}
		existe = 0;
	}
	for(int i = 0; i<pos; i++)
	{
	 	printf("%d",unicos[i]);
	}

 return 0;
}
