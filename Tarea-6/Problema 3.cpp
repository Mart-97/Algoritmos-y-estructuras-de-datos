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
	int n; //Variable de entrada
	///Parametros
	int pos = 1;
	 int existe = 0;
	int unicos[MAXN];
	int numbers[MAXN];
	printf("¿Cuantos numeros desea?: ");
scanf("%d",&n);
printf("Ingrese los numeros: ");
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&numbers[i]);
	}
unicos[0] = numbers[0];

	for(int i = 1; i<n; i++)
	{
		for(int j = 0; j<pos; j++ )
		{
			///Verifico si el numero ya existe en el arreglo de numeros unicos
 			if(numbers[i] == unicos[j]) existe = 1;
		}
		if(existe != 1)
		{
			///Si existe lo almacena en el segundo arreglo e incrementa la cantidad de numeros
			unicos[pos] = numbers[i];
			pos++;

		}
		///Actualizamos nuestro indicador de numeros repetidos
		existe = 0;
	}
 printf("El arreglo de numeros unicos contiene: ");
	for(int i = 0; i<pos; i++)
	{
	 	printf("%d ",unicos[i]);
	}

 return 0;
}
