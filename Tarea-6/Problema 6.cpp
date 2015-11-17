/**********************************************************************************
 *Problema 6.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción: ALGORITMO PARA INTERCAMBIAR FILAS EN UNA MATRIZ
 *El algoritmo ,ayuda ,dados una matriz de n * n , intercambiar la ultima fila con la primera,2da con la primera..etc..
 *Entradas: Un numero (n), Una matriz de numeros(matriz[ ][ ] )
 *Parametros: No hay
 *Salidas: La matriz sin cambios . La  matriz con las filas intercambiadas(matriz [ ] [ ])
 **********************************************************************************/
#include <stdio.h>
#define MAXN 100
int main()
{
 	int  matriz [MAXN][MAXN];
	int n; //Variable de entrada
	printf("Ingrese un numero para las dimensiones que desea para la matriz : ");
	 scanf("%d",&n);/// Entrada de las dimensiones de la matriz
for(int i = 0; i<n; i++)
{
	for(int j = 0; j<n; j++)
	{
		scanf("%d",&matriz[i][j]); //Lectura del contenido de la matriz
	}
}
printf("\nEsta es la matriz ingresada:\n");
for(int i = 0; i<n; i++)
{
	for(int j = 0; j < n; j++)
	{
		printf("%d ",matriz[i][j]); //Mostrar la matriz que fue ingresada
	}
	printf("\n");
}
printf("\nEsta es la matriz con las filas intercambiadas:\n");
for(int i = n - 1; i >= 0; i--) ///Para intercambiar filas se lee desde la ultima  hasta la primera
{
	for(int j = 0; j < n; j++)
	{
		printf("%d ",matriz[i][j]);
	}
	printf("\n");
}
 return 0;
}
