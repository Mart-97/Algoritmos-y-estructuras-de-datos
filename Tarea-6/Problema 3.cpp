/**********************************************************************************
 *Problema 3.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción:
 *      ALGORITMO PARA DETERMINAR LOS NUMEROS UNICOS EN UN ARREGLO
 *El algoritmo ,ayuda ,dados un numero  n de numeros,determina cuales son unicos y los imprime
 *Entradas: Un numero (n), Un arreglo de numeros(numbers[ ])
 *Parametros: No hay
 *Salidas: Un arreglo que contiene a los numeros unicos ( unicos[ ])
 **********************************************************************************/
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
