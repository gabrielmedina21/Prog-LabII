#include "miPila.h"

/* Inicializa la pila sin basura */
void inicPila(Pila *p)
{
    p->posTope = 0;
}

/* agrega elementos a la pila de a uno. Ejemplo: apilar(&id_Pila , 2); */
void apilar(Pila *p , int valor)
{
    p->valores[p->posTope] = valor;
    p->posTope++;
}

/* agrega un elemento a la pila por el usuario. */
void leer(Pila *p)
{
    int dato = 0;

    if(p->posTope < 100){
        printf(" Ingresar n%cmero entero: " , 163);
        scanf("%d" , &dato);

        apilar(p , dato);
    }else{
        printf(" La pila esta llena. \n\n");
    }
}

/* muestra la pila */
void mostrar(Pila *p)
{
    int i;

    printf("\n Base ---------------------------------------------- Tope\n\n");
    for(i=0 ; i<p->posTope ; i++){
        printf("| %d ", p->valores[i]);
    }
    printf("\n\n Base ---------------------------------------------- Tope\n\n");
}

int tope(Pila *p)
{
    int topePila = 0;

    topePila = p->valores[p->posTope - 1];

    return topePila;
}

int desapilar(Pila *p)
{
    int aux = 0;

    aux = p->valores[p->posTope - 1];
    p->posTope--;

    return aux;
}

int pilavacia(Pila *p)
{
    return (p->posTope == 0);
}
