/* Descripción: Programa que realiza desde la creacion hasta la eliminacion de una lista
// Programado por: Martin Javier Ayala Miranda
// Fecha de creación: 03 de Marzo de 2016
// Fecha de última actualización: 03 de Marzo de 2016
*/
#include <stdio.h>
typedef struct punto{
	unsigned x;
	unsigned y;
	char color ;
	punto *sig;
};
punto *CreaLista();
bool InsertaAdelante(punto *h, punto elem);
punto *InsertaAtras(punto *t, punto elem);
bool EliminaAdelante(punto *h,punto *eliminado);
bool EliminaAtras(punto *h ,punto *eliminado,punto *t);
void MuestraLista(punto *h);
void EliminaLista(punto *h);

int main(){
punto *head ,*tail,elem,elim;
int opcion;
bool existe_lista = false,resultado;
do{
printf("Selecciona una de las opciones:\n 1.- Crear una lista \n 2.- Insertar por adelante\n 3.-Insertar por atras \n 4.-Eliminar por adelante \n 5.- Eliminar por detras \n 6.- Listar de adelante hacia atras \n 7.- Eliminar lista \n 8.- Salir del programa\n ");
scanf("%d",&opcion);
switch(opcion){
	case 1:
		if (!existe_lista){
			if((head = CreaLista())==0){
    			return 1;
			}
        tail = head->sig;
        existe_lista = true;
        printf("La lista ha sido creada\n");
		}else printf("No se puede crear otra lista\n");

	break;

	case 2:
	     if(existe_lista) {
            printf("Ingrese valor para x: ");
            scanf("%u",&elem.x);
            printf("Ingrese el valor para y: ");
            scanf("%u",&elem.y);
            printf("Ingrese la inicial de un color: ");
            scanf(" %c",&elem.color);
            resultado = InsertaAdelante(head,elem);
             if (resultado) printf("El elemento fue insertado con exito\n");
	    } else {
            printf("Aun no has creado una lista\n");
	    }
	break;

	case 3:
	     if(existe_lista) {
            printf("Ingrese valor para x: ");
            scanf("%u",&elem.x);
            printf("Ingrese el valor para y: ");
            scanf("%u",&elem.y);
            printf("Ingrese la inicial de un color: ");
            scanf(" %c",&elem.color);
            punto *aux = tail;
            tail = InsertaAtras(tail,elem);
            if(tail != aux) printf("El elemento fue insertado con exito\n");
            else printf("El elemento no pudo ser insertado\n");
	    } else {
            printf("Aun no has creado una lista\n");
	    }
	break;

	case 4:
	    if(existe_lista){
            resultado = EliminaAdelante(head,&elim);
            if(resultado) printf("El elemento eliminado contiene: %u %u %c\n", elim.x);
	    }
	break;

	case 5:
	    if(existe_lista){
            resultado = EliminaAtras(head,&elim,tail);
            if (resultado) printf("El elemento eliminado contiene: %u %u %c\n",elim.x,elim.y,elim.color);
	    }
	break;

	case 6:
        if(existe_lista)MuestraLista(head);
        else printf("No existe ninguna lista\n");
	break;

	case 7:
	    if(existe_lista){
        EliminaLista(head);
        existe_lista = false;
	    } else printf("No puedes eliminar una lista no existente\n");
	break;
}
}while(opcion > 0 && opcion < 8);
	return 0;
}

punto *CreaLista(){
punto *head,*tail;
	if((head = new punto)==0){
		return 0;
	}
	if((tail = new punto)==0){
		delete head;
		return 0;
	}
	head->sig = tail;
	tail->sig = tail;
	return head;
}
bool InsertaAdelante(punto *h, punto elem){
	punto *nelem = 0;
	if((nelem = new punto)==0) return  false;
	*nelem = elem;
	nelem->sig = h->sig;
     h->sig = nelem;
    return true;
}

punto *InsertaAtras(punto *t, punto elem){
    punto *nelem = 0;
	if((nelem = new punto)==0) return t;
    *t = elem;
    nelem->sig = nelem;
    t->sig = nelem;
    return nelem;
}
bool EliminaAdelante(punto *h,punto *eliminado){
    if(h->sig!=h->sig->sig){
        punto *aux = 0;
        aux = new punto;
        aux->sig = h->sig;
        eliminado->x = h->sig->x;
        eliminado->y = h->sig->y;
        eliminado->color = h->sig->color;
        h->sig = h->sig->sig;
        delete aux->sig;
        delete aux;
        return true;
    }
    printf("La lista no tiene elementos que eliminar\n");
    return false;
}
bool EliminaAtras(punto *h, punto *eliminado, punto *t){
    if(h->sig!=h->sig->sig){
        punto *p = h->sig;
        while(p->sig!= t){
            p = p->sig;
        }
        eliminado->x = p->x;
        eliminado->y = p->y;
        eliminado->color = p->color;
        delete p->sig;
        p->sig = p;
        //printf("%u \n",p->x);
        return true;
    }
    printf("La lista no tiene elementos que eliminar\n");
return false;
}
void MuestraLista(punto *h){
    if(h->sig!=h->sig->sig){
         punto *p = h->sig;
        while(p->sig != p){
            printf("[ X = %u , Y = %u , Color = %c ]\n",p->x, p->y, p->color);
            p = p->sig;
        }
        printf("\n");
        return;
    }
    printf("La lista no contiene elementos\n");
}
void EliminaLista(punto *h){
    punto *aux = 0;
    aux = new punto;
    while (h->sig->sig!=h->sig){
         aux->sig = h->sig;
         h->sig = h->sig->sig;
         delete aux->sig;
    }
    delete aux;
}
