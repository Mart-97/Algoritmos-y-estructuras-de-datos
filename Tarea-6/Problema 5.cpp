 /**********************************************************************************
 *Problema 5.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción: ALGORITMO PARA IMPRIMIR UNA MATRIZ CUADRADA CON UNA CRUZ FORMADA POR 1's
 *El algoritmo ,ayuda ,dada una matriz de n * n , mostrar una matriz con una cruz formada por 1's
 *Entradas: Dimensiones de la matriz (n),(m)  Una(matriz[ ][ ] )
 *Parametros: Una variable que ayuda a formar la diagonal donde los indices i j son diferentes x = 0
 *Salidas: La matriz formada por una cruz de unos (matriz [ ] [ ])
 **********************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAXN 100
int main()
{
 	int  matriz [MAXN][MAXN];
	int n;
	int x = 0,
	 scanf("%d",&n);
	int y = n - 1;
for(int i = 0;  i < n; i++)
{
	for(int j = 0; j < n; j++)
	{
		if(i == j) matriz[i][j] = 1;
		matriz[x][y] = 1;
    printf("%d ",matriz[i][j]);
	}
	printf("\n");
	x++;
	y--;
}
 return 0;
}
