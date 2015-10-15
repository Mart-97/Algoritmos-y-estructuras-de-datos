/*************************************************************************************************************
 *Problema 5.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 * ALGORITMO PARA DETERMINAR SI UN NUMERO ES FELIZ O INFELIZ
 * El algoritmo ,ayuda , dado un numero, determinar si es feliz o no
 * Entradas: Un numero (n)
 * Parametros: s,feliz
 * Salidas: Se mostrará un texto en pantalla  diciendo que si el numero es feliz o infeliz
****************************************************************************************************************/
 #include <stdio.h>
 int main()
 {
 	///Variables de entrada
 	int n;
 	///Variable para acumular la sumatoria
 	int s = 0;
 	///Variable para comprobar  si en algun punto la sumatoria da 1
 	int feliz = 0;
 	///Lectura de las variables de entrada
 	printf("Introduce un numero para saber si es feliz o no: ");
 	scanf("%d",&n);
 	///El ciclo es de 8 iteraciones ya que si despues de 8 descomposiciones no se llegó al numero 1 el numero no puede ser feliz
 	for(int i = 1; i<=8; i++)
 	{
 		///Ciclo para separar el numero digito por digito y acumular la sumatoria de los cuadrados de cada uno
 		for(n; n>0; n = n / 10)
 		{     ///Tarea
 			s = s + (n % 10) * (n % 10);
 		}
 		 ///Verifico si despues de sumar los cuadrados, se llegó al 1
 		if(s == 1) feliz = 1;
       /// Actualizo n al numero que salio de la descomposicion anterior
 		n = s;
 		s = 0;
 	}
 	///Verifico si hemos encontrado algun numero feliz
 	if(feliz == 1)
 	{
 		printf("El numero es feliz");
 	} else
 	{
 		printf("El numero es infeliz");
 	}
 	return 0;
 }
