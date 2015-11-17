/**********************************************************************************
 *Problema 4.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción:  ALGORITMO PARA DETERMINAR SI UNA CADENA INGRESADA ES UN PALINDROMO
 *El algoritmo ,ayuda ,dada una cadena  de caracteres determina si es palindromo
 *Entradas: Una cadena de caracteres(cadena[ ] )
 *Parametros: Contador para el tamaño de la cadena (tam = 0). Variable para tamaño del segundo arreglo (pos = 1) 
 *Variable que nos dira si la cadena es o no un palindromo (palindromo = 1)
 *Salidas: Un texto que indique si la cadena ingresada es palindromo o no 
 **********************************************************************************/
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
