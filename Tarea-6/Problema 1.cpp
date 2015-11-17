/**********************************************************************************
*Problema 1.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción:
 *       ALGORITMO PARA DETERMINAR CUANTOS NUMEROS PARES EXISTEN EN UN ARREGLO
 *   El algoritmo ,ayuda ,dados n numeros,realizar el conteo de numeros pares existentes*
 * Entradas: 1 número  (n), n numeros en un arreglo (numbers[])                   
 * Parametros: Un contador de numeros pares (Pares = 0)
 * Salidas: Se mostrará en pantalla la cantidad de numeros pares existentes en el arreglo”, 
**********************************************************************************/
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
