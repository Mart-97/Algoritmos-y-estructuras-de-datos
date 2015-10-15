/**********************************************************************************
*Problema 1.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 *       ALGORITMO PARA VERIFICAR UN TIPO DE TRIANGULO O SI NO EXISTE UN TRIANGULO*
 *    Dados los 3 lados de un supuesto triangulo, decir si es un triangulo escaleno,
 * ...equilatero o isósceles o si no existe un triangulo...*
 * Entradas: 3 números  (a,b,c)                    *
 * Parametros: No hay
 * Salidas: Se mostrará en pantalla un texto el cual dirá si el triangulo es “Escaleno”, 
 * ....“Equilatero” o “Isosceles”, o si “No existe un triangulo”...*
**********************************************************************************/
#include <stdio.h>
int  main()
{
	///Declaración de variables
    int a,b,c;
    printf("Inserte los lados del supuesto triangulo");
    ///Lectura de variables
    scanf("%d%d%d",&a,&b,&c);
    ///Se verifica si es triangulo o no
    if(a < b+c && b < a+c && c<a+b)
    {
      if(a == b && b == c)
      {
          printf("El triangulo es equilatero");
      }else
      {
          if(a == b || a == c || b == c)
          {
            printf("El triangulo es isosceles");
          } else
          {
              printf("El triangulo es escaleno");
          }
      }
    }
    else
    {
        printf("No existe triangulo");
    }
	return 0;
}
