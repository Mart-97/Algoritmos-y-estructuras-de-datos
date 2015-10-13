/*************************************************************************************************************
 *Problema 7.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 * ALGORITMO PARA  SUMAR , RESTAR, MULTIPLICAR Y DIVIDIR 2 FRACCIONES MIENTRAS SEAN PROPIAS
 * El algoritmo ,ayuda , dado 4 numeros representando a 2 fracciones realizar las operaciones mientras las 
 fracciones ingresadas sean propias
 * Entradas: 4 valores numericos (a,b,c,d)
 * Parametros: No hay
 * Salidas: Se mostrarán en pantalla la suma(s),resta(r),multiplicacion(m) y division(di)
****************************************************************************************************************/
#include <stdio.h>

int main()

{
	int a,b,c,d;
	int s,r,di,m;
	int denominador;
	printf("Inserte los valores de las fracciones en orden numerador denominador: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	while(a<b && c<d)
	{
        if(b == d)
        {
            s = a + c;
            r = a - c;
            denominador = d;
            printf("La suma de las fracciones es %d / %d\n",s,denominador);
            printf("La resta de las fracciones es %d / %d\n",r,denominador);
        } else
        {
        	denominador = b * d;
          s = a * d + b * c;
          	printf("La suma de las fracciones es %d / %d\n",s,denominador);
          r = a * d - b * c;
          printf("La resta de las fracciones es %d / %d\n",r,denominador);
        }
       		 m = a * c;
       		 denominador =  b * d;
       		  printf("La multiplicacion de las fracciones es %d / %d\n",m,denominador);
       		 di = a * d;
       		 denominador =  b * c;
       		 printf("La division de las fracciones es %d / %d\n",di,denominador);
      scanf("%d%d%d%d",&a,&b,&c,&d);
	}
	return 0;
}
