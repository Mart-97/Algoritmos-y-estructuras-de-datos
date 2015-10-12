/*************************************************************************************************************
 *Problema 6.cpp
 * Programa creado por: Martin Javier Ayala Miranda
 * Fecha de creación: 11/Oct/2015
 * Fecha de última modificación: 11/Oct/2015
 * Descripción:
 * ALGORITMO PARA IMPRIMIR TODOS LOS NUMEROS INFELICES ENTRE 1 Y N INCLUSIVE
 * El algoritmo ,ayuda , dado un numero, imprimir todos los numeros infelices en un rango de 1 a n
 * Entradas: Un numero (n)
 * Parametros: No hay
 * Salidas: Se mostrarán en pantalla todos los numero infelices dentro del rango 1 a n
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
 	///Lectura de variables de entrada
 	printf("Introduce un numero: ");
 	scanf("%d",&n);
 	printf("Los siguientes numeros no son felices: ");
 	int aux;
 	for(int j = 1; j<=n; j++)
    {
 feliz = 0;
 aux = j;
 	for(int i = 1; i<=8; i++)
        {
 		///Ciclo para separar el numero digito por digito y acumular la sumatoria de los cuadrados de cada uno

            while(aux>0)
            {
                //Tarea
                s = s + (aux % 10) * (aux % 10);
                ///Actualización
                aux = aux / 10;
            }
            ///Verifico si despues de sumar los cuadrados, se llegó al 1
            if(s == 1) feliz = 1;
        ///Actualización for
                aux = s;
                s = 0;
        }
        if(feliz != 1 )
        {
            printf("%d ",j);
        }
    }

 	return 0;
 }
