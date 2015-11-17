/**********************************************************************************
 *Problema 8.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 15/Nov/2015
 * Fecha de última modificación: 15/Nov/2015
 * Descripción:ALGORITMO PARA IMPRIMIR UNA MATRIZ CON NUMEROS CRECIENDO EN UNO , DE MANERA QUE FORMEN UNA ESPIRAL
 *El algoritmo ,ayuda ,dados 2 numeros m y n, realizar una matriz en espiral con numeros crecientes en uno
 *Entradas: Una matriz  (matriz[ ][ ],m,n)
 *Parametros: Para marcar el inicio y fin por cada vuelta de la espiral (iniciocol = 0, inicioren = 0,i = 0, j= 0,pos = 1)
 *Salidas: La matriz en espiral (matriz[m][n])
 **********************************************************************************/
#include <stdio.h>
#define MAXN 100
#define MAXM 100
int main()
{
    int iniciocol = 0;
int inicioren = 0;
int m,n; ///Variables de entrada
	int i = 0, j = 0;
	int pos = 1;
	int matriz[MAXN][MAXM];

	scanf("%d%d",&n,&m); //Lectura de variables de entrada
	int fincol = m - 1;
int finren = n - 1;
///Poner matriz en ceros
for(int i = 0; i<n; i++)
{
  for(int j = 0; j<m; j++) matriz[i][j] = 0;
}

	  while(pos <= n * m)
      {
      	///Recorrido por primera  fila superior vacia
          for( j = iniciocol; j< fincol; j++)
          {
             if(matriz[i][j]== 0)
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
          ///Recorrido por la ultima columna vacia
          for( i = inicioren; i < finren; i++)
          {
           if(matriz[i][j]== 0)
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
          ///Recorrido por la ultima fila vacia
           for( j = fincol; j >=iniciocol; j--)
          {
          	 if(matriz[i][j]== 0)
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
          j = iniciocol;
          ///Recorrido por la primera columna vacia
          for( i = finren ; i >=inicioren; i--)
          {
           if(matriz[i][j]== 0)
              {
            matriz[i][j]= pos;
              pos++;
              }
          }
          ///Actualizamos las variables a conveniencia
          inicioren++;
          	iniciocol++;
          		finren--;
          		fincol--;
            		i = inicioren;
            		j = iniciocol;
      }

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}

 return 0;
}
