/***********************************************************************************
 *Problema 2.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción:
 *       ALGORITMO PARA DETERMINAR EL PROMEDIO DE LOS 2 NUMEROS MAS GRANDES EN UN ARREGLO
 *  El algoritmo ,ayuda ,dado un numero  n de numeros, calcula los 2 numeros mas grandes y posteriormente su promedio
 * Entradas: Un numero (n), n numeros en un arreglo( numbers[ ])
 *Parametros: No hay
 *Salidas: El promedio de los 2 numeros mas grandes del arreglo (promedio)”, 
 **********************************************************************************/
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
