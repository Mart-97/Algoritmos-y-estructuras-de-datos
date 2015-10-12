/*************************************************************************************************************
 *Problema 6.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 * ALGORITMO PARA IMPRIMIR DETERMINAR NUMEROS INFELICES
 * El algoritmo ,ayuda , dado un numero, imprimir los primeros n numeros infelices
 * Entradas: Un numero (n)
 * Parametros: No hay
 * Salidas: Se mostrarán en pantalla los primeros n numeros infelices
****************************************************************************************************************/
 #include <stdio.h>
 int main()
 {
 	///Variables de entrada
 	int n;
 	///Variable para acumular la sumatoria
 	int s = 1;
 	///Variable para comprobar  si en algun punto la sumatoria da 1
 	int feliz = 0;
 	///Variable que se incrementara en 1  mientras no encontremos n numeros infelices
 	int numeros = 2;
 	int aux;
 	printf("Introduce cuantos numeros infelices deseas: ");
 	scanf("%d",&n);
 	printf("Los siguientes numeros son infelices: ",n);
 	for(int contador = 1; contador<=n; )
 	{
 	    feliz = 0;
 		aux = numeros;
		 	for(int i = 1; i<=8; i++)
		 	{
		 		///Ciclo para separar el numero digito por digito y acumular la sumatoria de los cuadrados de cada uno
		 		for (; aux>0; aux = aux / 10 )
		 		{       ///Tarea
		 			s = s + (aux % 10) * (aux % 10);
		 		}
		 		 ///Verifico si despues de sumar los cuadrados, se llegó al 1
		 		if(s == 1) feliz = 1;
		       /// Actualizo aux al numero que salio de la descomposicion anterior
		 		aux = s;
		 		s = 0;
		 	}
		 	///Verificamos si hemos encontrado algun numero infeliz
		 	if(feliz != 1)
		 	{
		 	 printf("%d ",numeros);
                contador++;
		 	}
        numeros++;
	}
 	return 0;
 }
