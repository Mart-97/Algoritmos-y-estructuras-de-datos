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
	int n; ///Variables de entrada
	int x = 0; //Parametro que ayuda en la colocacion de 1's desde la posición 0,n-1 a la posición n - 1, 0
	 scanf("%d",&n);
	int y = n - 1; //Parametro que ayuda en la colocacion de 1's desde la posición 0,n-1 a la posición n - 1, 0
for(int i = 0;  i < n; i++)
{
	for(int j = 0; j < n; j++)
	{
		if(i == j) matriz[i][j] = 1; ///Colocando la primer diagonal
		matriz[x][y] = 1; //Colocando la segunda diagonal
    printf("%d ",matriz[i][j]);
	}
	printf("\n");
	///Actualizando X y Y simultaneamente para ir bajando en la matriz y colocar la segunda diagonal
	x++;
	y--;
}
 return 0;
}
