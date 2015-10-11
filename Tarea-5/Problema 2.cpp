/***************************************************************************************
 *Problema 2.cpp																			
 * Programa creado por: Martin Javier Ayala Miranda										
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripcion: 
 * ALGORITMO PARA OBTENER LA FECHA DEL DÍA SIGUIENTE
 * El algoritmo ,ayuda , dados, el año, el mes y el dia de una fecha, a mostrar la fecha del dia siguiente
 * Entradas: La fecha , año(a),mes (mes) dia,(dia)
 * Parametros: No hay
 * Salidas: Se mostrará en pantalla un texto el cual dirá la fecha del dia siguiente en el mismo formato de entrada
****************************************************************************************/
 #include <stdio.h>
 int main()
 {
 	///Declaracion de variables
 	int a,mes,dia;
 	///Lectura de los datos de entrada
 	printf("Introduzca la fecha en formato Año/Mes/Dia: ");
 	scanf("%d%d%d",&a,&mes,&dia);
 	if(dia < 28)
 	{
 		dia = dia + 1;
 	} else
 	{
 		if(mes == 02)
 		{
 			///Verifico si el año es bisiesto
          	if((a % 4 == 0) ||  (a % 100 == 0 && a  % 400 == 0))
          	{
          		if(dia == 28)
          		{
          			dia = dia + 1;
          		} else
          		{
          			dia = 01;
          			mes = mes + 1;
          		}
          	} else
          	{
          			dia = 01;
          			mes = mes + 1;
          	}
 		} else
 		{
 			if(dia < 30)
 			{
 					dia = dia + 1;
 			} else
 			{
 				if(dia == 30)
 				{
 					if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
 					{
 						dia = 01;
          				mes = mes + 1;
 					} else
 					{
 						dia = dia + 1;
 					}
 				} else
 				{
 					if(mes == 12)
 					{
 						a = a + 1;
 						mes = 01;
 						dia = 01;
 					} else
 					{
 						dia = 01;
          			mes = mes + 1;
 					}
 				}
 			}
 		}
 	}
 	printf("La fecha del dia siguiente es: %02d %02d %02d",a,mes,dia);
 	return 0;
 }
