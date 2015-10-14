/*************************************************************************************************************
 *Problema 4.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 14/Oct/2015
 * Fecha de última modificación: 14/Oct/2015
 * Descripción:
 * ALGORITMO PARA DETERMINAR SI UNA FECHA COMPUESTA DE MES Y DIA ES VALIDA O NO
 * El algoritmo , dados dos valores numericos, que representan mes y dia,  determina si la fecha ingresada  es una fecha valida
 * Entradas: Dos valores numericos; el mes y el dia,(mes),(d)
 * Parametros: No hay
 * Salidas: Se mostrará un texto en pantalla  diciendo si la fecha es valida o invalida.
****************************************************************************************************************/
 #include <stdio.h>
 int main()
 {
 	int d,mes;

 	scanf("%d%d",&mes,&d);
 	switch(mes)
 	{
 		case 1:
                if(d>=1 && d<=31) printf("Fecha valida");
         		else printf("Fecha invalida" );
 		break;

 		case 2:
                if(d>=1 && d<=29) printf("Fecha valida");
         		else printf("Fecha invalida" );
 		break;

 		case 3:
                if(d>=1 && d<=31) printf("Fecha valida");
                else printf("Fecha invalida" );
 		break;

 		case 4:
                if(d>=1 && d<=30) printf("Fecha valida");
                else printf("Fecha invalida" );
 		break;

 		case 5:
                if(d>=1 && d<=31) printf("Fecha valida");
         		else printf("Fecha invalida" );
 		break;

 		case 6:
 				 if(d>=1 && d<=30) printf("Fecha valida");
                    else printf("Fecha invalida" );
 		break;

 		case 7:
 				 if(d>=1 && d<=31) printf("Fecha valida");
                    else printf("Fecha invalida" );
 		break;

 		case 8:
 				 if(d>=1 && d<=31) printf("Fecha valida");
                else printf("Fecha invalida" );

 		break;

 		case 9:
 				 if(d>=1 && d<=30) printf("Fecha valida");
                    else printf("Fecha invalida" );
 		break;

 		case 10:
                if(d>=1 && d<=31) printf("Fecha valida");
                else printf("Fecha invalida" );
 		break;

 		case 11:
                    if(d>=1 && d<=30) printf("Fecha valida");
                    else printf("Fecha invalida" );
 		break;

 		case 12:
                    if(d>=1 && d<=31) printf("Fecha valida");
                    else printf("Fecha invalida" );
 		break;

 		default:
                printf("Fecha invalida");
 		break;
    }
 	return 0;
 }
