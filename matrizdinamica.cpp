#include <stdio.h>
////MATRICES DINÁMICAS
 void mat(int **A,int nr,int nc,int val)
 {
 	for(int i = 0; i<nr; i++)
 	{
 		for(int j = 0; j<nc; j++)
 		{
 			A[i][j] = val;
 		}
 	}
 }
 void show(int **A,int nr,int nc)
 {
 	for(int i = 0; i<nr; i++)
 	{
 		for(int j = 0; j<nc; j++)
 		{
 		 	printf("%d ",A[i][j]);
 		}
 		printf("\n");
 	}
 }

int main()
{
  int **A2D = 0;
  int nr = 3 , nc =3;
  A2D = new int *[nr];
  for(int i = 0; i <nr; i++)
  {
  	A2D[i] = new int [nc];
  }
  mat(A2D,nr,nc,665);
  show(A2D,nr,nc);
  return 0;
}
