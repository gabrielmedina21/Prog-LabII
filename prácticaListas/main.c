#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    char nombre[30];
    char apellido[30];
    int edad;
}stPersona;

typedef struct
{
    stPersona datos;
    struct nodo* siguiente;
}nodo;

nodo* inicializarLista();
stPersona cargarUnaPersona(stPersona persona);
nodo* crearNodo(stPersona persona);
nodo* addNodoPrincipioLista(nodo* lista , nodo* nuevoNodo);
nodo* cargarListaPersonas(nodo* lista);
void mostrarUnNodo(stPersona persona);
void mostrarListaPersonas(nodo* lista);


int main()
{
    nodo* lista;
    lista = inicializarLista();

    printf(" \t\t\t\t LISTAS \n\n");

    cargarListaPersonas(lista);

    system("cls");

    printf(" LISTA DE PERSONAS... \n\n");
    mostrarListaPersonas(lista);

    return 0;
}

/* inicializa la lista "vacía". */
nodo* inicializarLista()
{
    return NULL;
}

/* carga los datos de la persona */
stPersona cargarUnaPersona(stPersona persona)
{
    printf(" Ingresar nombre/s: ");
    fflush(stdin);
    gets(&persona.nombre);

    printf(" Ingresar apellido/s: ");
    fflush(stdin);
    gets(&persona.apellido);

    printf(" Ingresar edad: ");
    scanf("%d" , &persona.edad);

    return persona;
}

/* se crea el nodo */
nodo* crearNodo(stPersona persona)
{
    nodo* auxNodo = (nodo*)malloc(sizeof(nodo)); /* crear el nodo */

    auxNodo ->datos = persona;    // guarda los datos de la persona en la variable "persona"
    auxNodo ->siguiente = NULL;  // el siguiente nodo va a apuntar a NULL.

    return auxNodo; // retorna el nodo modificado, es decir un nuevo nodo.

}

/* agrega el nuevo nodo a la lista */
nodo* addNodoPrincipioLista(nodo* lista , nodo* nuevoNodo)
{
    if(lista == NULL){
        lista = nuevoNodo;
    }else{
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
    }

    return lista;
}

/* cargamos la lista de personas */
nodo* cargarListaPersonas(nodo* lista)
{
    stPersona persona;
    nodo* nuevoNodo;
    char continuar = 's';

    while(continuar == 's'){
        system("cls");

        printf(" CARGANDO LISTA... \n\n");

        persona = cargarUnaPersona(persona);
        nuevoNodo = crearNodo(persona);
        lista = addNodoPrincipioLista(lista , nuevoNodo);

        printf("\n%cQuieres seguir cargando la lista? s=SI / n=NO " , 168);
        fflush(stdin);
        continuar = getch();
        printf("\n\n");
    }

    return lista;
}

void mostrarUnNodo(stPersona persona)
{
    printf(" -------------------------- \n");
    printf(" Nombre/s  : %s \n" , persona.nombre);
    printf(" Apellido/s: %s \n" , persona.apellido);
    printf(" Edad      : %d \n" , persona.edad);
    printf(" -------------------------- \n\n");
}

void mostrarListaPersonas(nodo* lista)
{
    int numPersona = 0;

    while(lista->siguiente!= NULL){
        printf(" Persona N%c%d \n" , 248 , numPersona+1);

        mostrarUnNodo(lista->datos);

        numPersona++;
    }
}
