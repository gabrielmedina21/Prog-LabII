#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "miPila.h";

typedef struct
{
    char nombre[30];
    char genero;
    int edad;
}stPersona;

/* FUNCIONES DEL PUNTO 1 */
int cargarArrayPersonas(stPersona arrayPers[] , int dimension);
void mostrarUnaPersona(stPersona persona);
void mostrarArrayPersonas(stPersona arrayPers[] , int validos);
int contPersonasPorGenero(stPersona arrayPers[] , int validos , char genero);
int copiaRegistroPorGenero(stPersona arrayPers[] , int validos , stPersona nuevoArray[] , char genero);

/* FUNCIONES DEL PUNTO 2 */
int buscarPosMenor(stPersona arrayPers[] , int validos , int pos);
void ordenaArrayPorSeleccion(stPersona arrayPers[] , int validos);

/* FUNCION DEL PUNTO 4 */
int buscarMenorPila(Pila *p);

/* FUNCION DEL PUNTO 7 */
int eliminarPersona(stPersona arrayPers[] , int validos , char nombre[]);

int main()
{
    /* DECLARACIONES DE VARIABLES PUNTO 1 */

    int dimension = 30;
    stPersona arrayPersonas[dimension];
    int valPersonas = 0;
    int cantPersonasPorGenero = 0;
    char generoPersona = 0;
    int valPersonasPorGenero = 0;
    stPersona *arrayPersPorGenero = (stPersona *)malloc(sizeof(stPersona));;

    /* ---------------------------------------------------------------- */

    /* DECLARACIONES DE VARIABLES PUNTO 3 */

    Pila dada;
    Pila aux;
    inicPila(&dada);
    inicPila(&aux);

    /* ---------------------------------------------------------------- */

    /* DECLARACIONES DE VARIABLES PUNTO 4 */

    Pila pilaOrdenada1;
    Pila pilaOrdenada2;
    Pila ordenadaFinal;
    Pila auxPilaOrdenada;
    int menorE = 0;

    inicPila(&pilaOrdenada1);
    inicPila(&pilaOrdenada2);
    inicPila(&ordenadaFinal);
    inicPila(&auxPilaOrdenada);

    /* ---------------------------------------------------------------- */

    /* DECLARACIONES DE VARIABLES PUNTO 7 */

    char nombre[30];
    int persElimnada = 0;

    /* ---------------------------------------------------------------- */

    /* ALGORITMO PUNTO 1 */

//    valPersonas = cargarArrayPersonas(arrayPersonas , dimension);
//
//    system("cls");
//
//    printf(" \t\t\t\t TRABAJO PR%cCTICO N%c2 - REPASO \n\n" , 240);
//
//    printf(" ARRAY DE PERSONAS CARGADO... \n\n");
//    mostrarArrayPersonas(arrayPersonas , valPersonas);
//
//    printf(" Ingresar g%cnero(m %c f): " , 130 , 162);
//    fflush(stdin);
//    scanf("%c" , &generoPersona);
//
//    printf("\n");
//
//    system("pause");
//    system("cls");
//
//    cantPersonasPorGenero = contPersonasPorGenero(arrayPersonas , valPersonas , generoPersona);
//
//    if(generoPersona == 'f'){
//        printf("\n La cantidad de personas del g%cnero femenino es: %d \n\n" , 130 , cantPersonasPorGenero);
//    }else{
//        printf("\n La cantidad de personas del g%cnero masculino es: %d \n\n" , 130 , cantPersonasPorGenero);
//    }
//
//    printf("\n");
//
//    system("pause");
//    system("cls");
//
//    valPersonasPorGenero = copiaRegistroPorGenero(arrayPersonas , valPersonas , arrayPersPorGenero , generoPersona);
//
//    printf(" ARRAY DE PERSONAS DE UN MISMO G%cNERO... \n\n" , 144);
//    mostrarArrayPersonas(arrayPersPorGenero , valPersonasPorGenero);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO PUNTO 2 */

//    system("pause");
//    system("cls");
//
//    ordenaArrayPorSeleccion(arrayPersonas , valPersonas);
//
//    printf(" PERSONAS ORDENADAS POR EDAD... \n\n");
//    mostrarArrayPersonas(arrayPersonas , valPersonas);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO PUNTO 3 */

//    apilar(&dada , 20);
//    apilar(&dada , 18);
//    apilar(&dada , 24);
//    apilar(&dada , 12);
//    apilar(&dada , 0);
//
//    printf(" PILA CARGADA... \n");
//    mostrar(&dada);

//    leer(&dada);
//    leer(&dada);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO PUNTO 4 */

//    apilar(&pilaOrdenada1 , 1);
//    apilar(&pilaOrdenada1 , 3);
//    apilar(&pilaOrdenada1 , 5);
//    apilar(&pilaOrdenada1 , 8);
//
//    apilar(&pilaOrdenada2 , 2);
//    apilar(&pilaOrdenada2 , 4);
//    apilar(&pilaOrdenada2 , 6);
//    apilar(&pilaOrdenada2 , 7);
//
//    printf(" PILA 1 ORDENADA... \n\n");
//    mostrar(&pilaOrdenada1);
//    printf(" PILA 2 ORDENADA... \n\n");
//    mostrar(&pilaOrdenada2);
//
//    while(!pilavacia(&pilaOrdenada1)){
//        menorE = desapilar(&pilaOrdenada1);
//        while(!pilavacia(&pilaOrdenada2)){
//            if(tope(&pilaOrdenada2) >= menorE){
//                apilar(&ordenadaFinal , desapilar(&pilaOrdenada2));
//            }else{
//                apilar(&auxPilaOrdenada , desapilar(&pilaOrdenada2));
//            }
//        }
//
//        apilar(&ordenadaFinal , menorE);
//
//        while(!pilavacia(&auxPilaOrdenada)){
//            apilar(&pilaOrdenada2 , desapilar(&auxPilaOrdenada));
//        }
//    }
//
//    printf(" PILA ORDENADA FINAL... \n\n");
//    mostrar(&ordenadaFinal);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO PUNTO 6 */

//    ordenaArrayPorInsercion(arrayPersonas , valPersonas);
//
//    printf(" ARRAY ORDENADO POR INSERCION \n\n");
//    mostrarArrayPersonas(arrayPersonas , valPersonas);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO PUNTO 7 */

//    system("pause");
//    system("cls");
//
//    printf(" ELIMINAR PERSONA POR NOMBRE... \n\n");
//    printf(" Ingresar nombre: ");
//    fflush(stdin);
//    gets(nombre);
//
//    system("cls");
//
//    persElimnada = eliminarPersona(arrayPersonas , valPersonas , nombre);
//
//    printf(" ARRAY DE PERSONAS AHORA... \n\n");
//    mostrarArrayPersonas(arrayPersonas , persElimnada);

    /* ---------------------------------------------------------------- */

    return 0;
}

/* PUNTO 1 */

/* a) carga array(tipo srtuct) de personas */
int cargarArrayPersonas(stPersona arrayPers[] , int dimension)
{
    int i = 0;
    char continuar = 's';

    while(i<dimension && continuar == 's'){
        system("cls");

        printf(" CARGANDO PERSONAS... \n\n");

        printf(" Ingresar nombre: ");
        fflush(stdin);
        gets(arrayPers[i].nombre);

        printf(" Ingresar g%cnero(m %c f): " , 130 , 162);   /* m ó f */
        fflush(stdin);
        scanf("%c" , &arrayPers[i].genero);

        printf(" Ingresar edad: ");
        scanf("%d" , &arrayPers[i].edad);

        i++;

        printf("\n%cDeseas ingresar otra persona? s=SI / n=NO " , 168);
        fflush(stdin);
        continuar = getch();
        printf("\n\n");
    }
}

/* b) cuenta la cantidad de personas por género */

int contPersonasPorGenero(stPersona arrayPers[] , int validos , char genero)
{
    int contPesonas = 0;
    int i;

    while(i < validos){
        if(arrayPers[i].genero == genero){
            contPesonas++;
        }

        i++;
    }

    return contPesonas;

}

/* c) copia el registro en un array dinámico de acuerdo al género */
int copiaRegistroPorGenero(stPersona arrayPers[] , int validos , stPersona nuevoArray[] , char genero)
{
    int i = 0;
    int j = 0;

    while(i < validos){
        if(arrayPers[i].genero == genero){
            nuevoArray[j] = arrayPers[i];
            j++;
        }

        i++;
    }

    return j;
}

/* 2) ordena array por selección */

void ordenaArrayPorSeleccion(stPersona arrayPers[] , int validos)
{
    int i;
    int menorPos = 0;
    stPersona aux;

    for(i=0 ; i<validos-1 ; i++){
        menorPos = buscarPosMenor(arrayPers , validos , i);
        aux = arrayPers[menorPos];
        arrayPers[menorPos] = arrayPers[i];
        arrayPers[i] = aux;
    }
}


/* 5) insertar dato */
void insertarDatoArray(stPersona arrayPes[] , int validos , stPersona nuevaPersona)
{
    int i = validos;

    while(i>=0 && nuevaPersona.edad < arrayPes[i].edad){
        arrayPes[i+1] = arrayPes[i];
        i--;
    }

    arrayPes[i+1] = nuevaPersona;
}

/* 6) ordenación por inserción */
void ordenaArrayPorInsercion(stPersona arrayPers[] , int validos)
{
    int i;

    for(i=0 ; i<validos-1 ; i++){
        insertarDatoArray(arrayPers , i , arrayPers[i+1]);
    }
}

/* 7) eliminar dato de un array */
int eliminarPersona(stPersona arrayPers[] , int validos , char nombre[])
{
    int i;

    for(i=0 ; i<validos ; i++){
        if(strcmp(arrayPers[i].nombre , nombre) == 0){
            while(i<validos){
                arrayPers[i] = arrayPers[i+1];
                i++;
            }
        }
    }

    return validos - 1;
}

/* FUNCIONES AUXILIARES */

/* muestra una persona */
void mostrarUnaPersona(stPersona persona)
{
    printf(" ------------------------------- \n");

    printf(" Nombre: %s \n" , persona.nombre);
    if(persona.genero == 'm'){
        printf(" G%cnero: Masculino \n" , 130 , persona.genero);
    }else{
        printf(" G%cnero: Femenino \n" , 130 , persona.genero);
    }
    printf(" Edad: %d \n" , persona.edad);

    printf(" ------------------------------- \n\n");
}
/* muestra array de personas */
void mostrarArrayPersonas(stPersona arrayPers[] , int validos)
{
    int i;
    int contPersonas = 0;

    for(i=0 ; i<validos ; i++){
        contPersonas++;

        printf(" Persona N%c%d \n" , 248 , contPersonas);
        mostrarUnaPersona(arrayPers[i]);
    }
}

/* buscar posicion menor */
int buscarPosMenor(stPersona arrayPers[] , int validos , int pos)
{
    stPersona menor = arrayPers[pos];
    int posMenor = pos;
    int i = posMenor + 1;

    while(i < validos){
        if(arrayPers[i].edad < menor.edad){
            menor = arrayPers[i];
            posMenor = i;
        }

        i++;
    }

    return posMenor;
}
