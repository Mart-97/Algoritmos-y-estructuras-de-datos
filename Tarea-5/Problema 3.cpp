/*************************************************************************************************************
 *Problema 3.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 * ALGORITMO PARA OBTENER LA CALIFICACION DE UNA TAREA DE ALGORITMOS
 * El algoritmo ,ayuda , dado el modo en que fue calificada la tarea ya sea una + o un - determinar la calificación
 * Entradas:La manera en como fue calificado ya sea cruz(1) o menos (2)
 * Parametros: cruz (1)
 * Salidas: Se mostrará en pantalla la calificacion obtenida en la tarea segun el numero de cruces o de menos(c)
****************************************************************************************************************/
 #include <stdio.h>
 int main()
 {
 	int cantidad;
 	int  cruz = 1;
  int calif;
 	printf("Introduce 1 si fuiste calificado con cruz, de lo contrario escribe 2: ");
 	scanf("%d",&calif);
 	if(calif = cruz)
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
    		 	if(cantidad == 3)	c = 75;
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
       			} else
       			{
       				if (cantidad == 3) c = 0;
       			}
       		}
     }
 	printf("La calificacion de la tarea es: %d ",c);
 	return 0;
 }
