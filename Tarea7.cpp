#include <stdio.h>
typedef struct
{
	int  numvuelo;
	char aerolinea[40];
	int pasajeros;
	float horas;
	char airportorigen [8];
	char airportdestino[8];

}vuelo;

vuelo * numvuelos(unsigned n)
{
    vuelo * inicio = 0;
    inicio = new vuelo[n];
    return  inicio;
}

void CapturaVuelo(vuelo *item)
{
printf("Inserte el numero de vuelo: ");
scanf("%d",&item->numvuelo);
printf("Inserte la aerolinea: ");
scanf("%s",item->aerolinea);
printf("Inserte el numero de pasajeros: ");
scanf("%d",&item->pasajeros);
printf("Inserte las horas de vuelo: ");
scanf("%f",&item->horas);
printf("Ingrese el aeropuerto de origen. ");
scanf("%s",item->airportorigen);
printf("Ingrese el aeropuerto de destino: ");
scanf("%s",item->airportdestino);


}

void ListaVuelos(vuelo item,int pos)
{


            printf("El numero de vuelo es: %d \n",item.numvuelo);
            printf("La aerolinea es: %s \n",item.aerolinea);
            printf("El numero de pasajeros es: %d \n",item.pasajeros);
            printf("Las horas de vuelo son: %f \n",item.horas);
            printf("El aeropuerto de origen es: %s \n",item.airportorigen);
            printf("El aeropuerto de destino es: %s \n",item.airportdestino);

}

void ConsultaVuelo(vuelo item,int busca)
{
 if(item.numvuelo == busca)
 {
    	printf("La aerolinea es: %s \n",item.aerolinea);
            printf("El numero de pasajeros es: %d \n",item.pasajeros);
            printf("Las horas de vuelo son: %f \n",item.horas);
            printf("El aeropuerto de origen es: %s \n",item.airportorigen);
            printf("El aeropuerto de destino es: %s \n",item.airportdestino);
 }
}

int main()
{
    int n;
    int pos = 0;
    int opcion;
    vuelo *ap;
    printf("Ingrese el numero de vuelos de hoy: ");
    scanf("%d",&n);
    ap = numvuelos(n);
    //CapturaVuelo(&ap[0]);
    //ListaVuelos(&ap[0]);

		do
		{

		 printf("\nBienvenido, escoja una de las opciones \n 1.- Capturar un vuelo \n 2.- Consulta un vuelo \n 3.- Listado de vuelos capturados \n 4.-Salir del programa \n");
		scanf("%d",&opcion);
		switch (opcion)
		{
			case 1:
			CapturaVuelo(&ap[pos]);
			pos++;
			break;
			case 2:
			int busca;
			printf("¿De que vuelo requiere informacion?: ");
			scanf("%d",&busca);
			for(int i = 0; i<pos; i++) ConsultaVuelo(ap[i],busca);
			break;
			case 3:
 			for(int i = 0; i<pos; i++) ListaVuelos(ap[i],pos);
			break;
		}
		} while(opcion>0 && opcion<4);

  return 0;
}
