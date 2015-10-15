/*************************************************************************************************************
 *Problema 6.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 * ALGORITMO PARA IMPRIMIR DETERMINAR NUMEROS INFELICES
 * El algoritmo ,ayuda , dado un numero, imprimir los primeros n numeros infelices
 * Entradas: Un numero (n)
 * Parametros:s y feliz inicializados en 0 y numeros inicalizados en 2
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
 	///Variable para que incrementa en 1 y es la que se imprime si se encuentra un numero infeliz
 	int numeros = 2;
 	int aux;
 	printf("Introduce cuantos numeros infelices deseas: ");
 	scanf("%d",&n);
 	printf("Los siguientes  numeros son infelices: ");
 	for(int contador = 1; contador<=n; contador++ )
 	{
 	    feliz = 0;
 		aux = numeros;
		 	for(int i = 1; i<=8; i++)
		 	{
		 		///Ciclo para separar el numero digito por digito y acumular la sumatoria de los cuadrados de cada uno
		 		for (aux; aux>0; aux = aux / 10 )
		 		{       ///Tarea
		 			s = s + (aux % 10) * (aux % 10);
		 		}
		 		 ///Verifico si despues de sumar los cuadrados, se llegó al 1
		 		if(s == 1) feliz = 1;
		       /// Actualizo aux al numero que salio de la descomposicion anterior
		 		aux = s;
		 		s = 0;
		 	}
		 	///Verifico si se encontró  algun numero infeliz
		 	if(feliz != 1)
		 	{
		 	 printf("%d ",numeros);

		 	} else n++;  ///El else incrementa el valor de n por cada numero feliz que encontremos para asi poder tener los n infelices que necesitamos
        numeros++;
	}
 	return 0;
 }
