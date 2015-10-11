/*************************************************************************************************************
 *Problema 3.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 * ALGORITMO PARA OBTENER LA CALIFICACION DE UNA TAREA DE ALGORITMOS
 * El algoritmo ,ayuda , dado el modo en que fue calificada la tarea ya sea una + o un - determinar la calificación
 * Entradas: El modo en que fue calificado,  + o - (caracter), y el numero de + o - que recibió (cruz) o (menos)
 * Parametros: + (mas)
 * Salidas: Se mostrará en pantalla la calificacion obtenida en la tarea segun el numero de cruces o de menos(c)
****************************************************************************************************************/
 #include <stdio.h>
 int main()
 {
 	char caracter;
 	int cantidad;
 	char mas = '+';
 	char c;
 	printf("Introduce el simbolo + o - con el que fuiste calificado : ");
 	scanf("%c",&c);
 	if(caracter = mas)
 	{
 		printf("Introduce el numero de cruces que tienes: " );
 		scanf("%d",&cantidad);
 		 if(cantidad == 3)
 		 {
 		 	c = 100;
 		 } else
 		 {
 		 	if(cantidad == 2)
 		 	{
 		 		c = 85;
 		 	} else
 		 	{
 		 		c = 75;
 		 	}
 		 }
 	} else
 	{
 		printf("Introduce el numero de menos que tienes: ");
 		scanf("%d",&cantidad);
 		if(cantidad == 1)
 		{
 			c = 50;
 		} else
 		{
 			if(cantidad == 2)
 			{
 				c = 30;
 			}else
 			{
 				c = 0;
 			}
 		}
 	}
 	printf("La calificacion de la tarea es: %d ",c);
 	return 0;
 }
