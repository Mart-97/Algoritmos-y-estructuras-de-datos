/**********************************************************************************
 *Problema 7.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción: ALGORITMO PARA IMPRIMIR LA MATRIZ TRANSPUESTA DE UNA DADA POR EL USUARIO
 *  El algoritmo ,ayuda ,dada una matriz de n * m ,a mostrar la matriz transpuesta de la ingresada 
 *ntradas: Dimensiones de la matriz (n),(m)  Una(matriz[ ][ ] )
 *Parametros: No hay
 *Salidas: La matriz original y la matriz transpuesta (matriz [ ] [ ]) (matriz [ ][ ])
 **********************************************************************************/
#include <stdio.h>
#define MAXN 100
int main()
{
    int numbers[MAXN][MAXN];
    int m,n;///Variables de entrada
	scanf("%d%d",&n,&m); ///Lectura de las variables de entrada

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
		scanf("%d",&numbers[i][j]); ///Lectura de los datos de la matriz
		}
	}
	printf("\n");
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
		printf("%d ",numbers [i][j]); ///Muestra la matriz ingresada
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
		printf("%d ",numbers [j][i]); ///Intercambio de indices para lograr el cambio de filas por columnas
		}
		printf("\n");
	}
 return 0;
}
