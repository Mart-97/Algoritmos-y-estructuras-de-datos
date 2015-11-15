#include <stdio.h>
#include <string.h>
#define MAXN 1000000
int main()
{
	char cadena [MAXN];
	int tam = 0;
	int pos = 1;
	int inicio = 0,fin;
	 int palindromo = 1;

gets(cadena);
inicio = 0;
int i = 0;
while(cadena[i] != 0 && i <MAXN )
{
tam++;
i++;
}
pos = tam - 1;
for(int i = 0; i<tam; i++)
{
    if(cadena[i]== ' ')i++;
    if(cadena[pos]==' ')pos--;
   if(cadena[i]!= cadena[pos]) palindromo = 0;
   pos--;
}
if(palindromo == 1) printf("La cadena ingresada es palindromo");
else printf("La cadena ingresada no es palindromo");

 return 0;
}
