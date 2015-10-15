 /***************************************************************************************
 *Problema 2.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripcion:
 * ALGORITMO PARA OBTENER LA FECHA DEL DÍA SIGUIENTE
 * El algoritmo ,ayuda , dados, el año, el mes y el dia de una fecha, a mostrar la fecha del dia siguiente
 * Entradas: La fecha , año(a),mes (mes) dia,(dia)
 * Parametros: 2 variables una para marcar si el año ingresado es bisiesto(bisiesto) y una para ver si la fecha es valida (valido)
 * Salidas: Se mostrará en pantalla un texto el cual dirá la fecha del dia siguiente en el mismo formato de entrada
****************************************************************************************/
 #include <stdio.h>
 int main()
 {
 	///Declaracion de variables
 	int a,m,d;
 	int bisiesto = 0;
 	int valido = 1;
 	///Lectura de los datos de entrada
 	printf("Introduzca la fecha en formato Año/Mes/Dia: ");
 	scanf("%d%d%d",&a,&m,&d);
 	if((a % 4 == 0 )||(a % 100 == 0 && a % 400 == 0))
    {
        bisiesto = 1;
    }
    if(m > 0 && m < 13 && d > 0 &&  d < 32)
 {
     if(m == 2)
    {
        if( d > 29 || (d == 29 && bisiesto == 0))
        {
        	valido = 0;
        }
         if( d == 29 && bisiesto == 1)
         {
         	m++;
         	d = 1;
         } else
         {
             if( (d == 28 && bisiesto == 1) || ( d < 28))
             {
                d++;
             }
         }

     } else
     {
         if(m == 1 || m ==3 || m == 5 || m == 7 || m == 8 || m == 10)
         {
             if(d == 31)
             {
                m++;
                d = 1;
             } else
             {
                d++;
             }
         } else
         {
           if( m == 12 && d == 31)
           {
            a++;
            d = 1;
            m = 1;

           }else
           {
             if(d == 30)
             {
             	m++;
             	d = 1;
             }
             else d++;
           }

         }
     }
 } else valido = 0;
 	if(valido == 1) printf("La fecha del dia siguiente es: %02d %02d %02d",a,m,d);
 	else printf("Fecha Invalida");
    return 0;
 }
