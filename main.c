#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>

const int dimFilas = 12;

/* FUNCIONES DEL PUNTO 1 */
int inicArrayInt(int aInt[] , int dimension);
int cargarArrayInt(int aInt[] , int dimension);
void mostrarArrayInt(int aInt[] , int validos);
int sumaElementosArrayInt(int aInt[] , int validos);
int contarElementosArray(int aInt[] , int validos);
float promArrayInt(int aInt[] , int validos);

/* FUNCIONES DEL PUNTO 2 */
int cargaArrayChars(char aChars[] , int dimension);
void mostrarArrayChars(char aChars[] , int validos);
void invertirArrayChars(char aChars[] , int validos);

/* FUNCIONES DEL PUNTO 3 */
int cargarRandomArrayInt(int aInt[] , int dimension);
void mostrarArrayInt(int aInt[] , int validos);
float numDecimal(int aInt[] , int validos , int num);

/* FUNCION DEL PUNTO 4 */
int buscarPosMayor(int aInt[] , int validos);

/* FUNCION DEL PUNTO 5 */
void cargaMatrizPre(int dimColumnas , int matrizPrec[dimFilas][dimColumnas]);
void mostrarMatrizPrec(int dimColumnas , int matriz[dimFilas][dimColumnas]);

/* FUNCION DEL PUNTO 6 */
int verificaStringCapicua(char palabra[]);

/* FUNCION DEL PUNTO 7 */
void intercambio(int *num1 , int *num2);

/* FUNCION DEL PUNTO 8 */
int intercalarArraysInt(int arrayIntOrdenado1[] , int valArrayOrd1 , int arrayIntOrdenado2[] , int valArrayOrd2 , int arrayFinal[] , int dimension);

/* FUNCION DEL PUNTO 9 */
int cargaArrayPersonas(int dimApellido , char arrayApellidos[dimApellido][30] , int arrayEdades[] , int dimension);
void mostrarArrayPersonas(int dimApellidos , char arrayApellidos[dimApellidos][30] , int arrayEdades[] , int valPersonas);
void buscarPersonaMayor(int dimApellido , char arrayApellidos[dimApellido][30] , int arrayEdades[] , int valPersonas);

/* FUNCION DEL PUNTO 10 */
void max_min_prom(int aInt[] , int validos , int *valMax , int *valMin , float *prom);

int main()
{
    /* DECLARACIÓN DE VARIABLES - PUNTO 1 */

    int arrayPreCargado[10];
    int valArrayPreCargado = 0;
    int arrayInt[15];
    int valArrayInt = 0;
    int sumTotalElementosArrayInt = 0;
    int cantTotalElementosArray = 0;
    float promedioArrayInt = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 2 */

    char arrayChars[12];
    int valArrayChars = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 3 */

    int arrayIntRandom[14];
    int valArrayIntRandom = 0;
    int num = 0;
    float valorDecimal = 0;

    /* DECLARACIÓN DE VARIABLES - PUNTO 4 */

    int posMayor = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 5 */

    int dimCols = 31;
    int matrizPrecipitaciones[dimFilas][dimCols];
    int mes = 0;
    int mayorPrec = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 6 */

    char string[30];
    int capicua = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 7 */

    int dato1 = 0;
    int dato2 = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 8 */

    int arrayOrd1[] = {1,3,5,9,12,15};
    int arrayOrd2[] = {2,4,6,8,10,13};
    int arrayFinalOrd[14];
    int valArrayFinOrd = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 9 */

    char arrayApellidos[8][30];
    int arrayEdad[8];
    int valPersonas = 0;
    int persMayor = 0;

    /* ---------------------------------------------------------------- */

    /* DECLARACIÓN DE VARIABLES - PUNTO 10 */

    int *valMax;
    int *valMin;
    float *prom;

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 1 */

//    valArrayPreCargado = inicArrayInt(arrayPreCargado , 8);
//
//    printf(" ARRAY INT PRE-CARGADO... \n");
//    mostrarArrayInt(arrayPreCargado , valArrayPreCargado);

//    valArrayInt = cargarArrayInt(arrayInt , 15);
//
//    system("cls");
//
//    printf(" \t\t\t\t\t TP N%c1 - REPASO \n\n" , 248);
//
//    printf(" ARRAY INT CARGAD0... \n\n");
//    mostrarArrayInt(arrayInt , valArrayInt);
//
//    sumTotalElementosArrayInt = sumaElementosArrayInt(arrayInt , valArrayInt);
//    cantTotalElementosArray = contarElementosArray(arrayInt , valArrayInt);
//    promedioArrayInt = promArrayInt(arrayInt , valArrayInt);
//
//    printf("\n La suma total de los elementos del array es de: %d \n" , sumTotalElementosArrayInt);
//    printf(" La cantidad total de elementos en el array es de: %d \n" , cantTotalElementosArray);
//    printf(" El promedio del array de enteros es de: %.2f \n\n" , promedioArrayInt);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 2 */

//    valArrayChars = cargaArrayChars(arrayChars , 12);
//
//    system("cls");
//
//    printf(" ARRAY DE CHARS CARGADO... \n\n");
//    mostrarArrayChars(arrayChars , valArrayChars);
//
//    system("pause");
//
//    invertirArrayChars(arrayChars ,  valArrayChars);
//
//    printf("\n ARRAY DE CHARS INVERTIDO... \n\n");
//    mostrarArrayChars(arrayChars , valArrayChars);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 3 */

//    srand(time(NULL));
//
//    valArrayIntRandom = cargarRandomArrayInt(arrayIntRandom , dimension);
//
//    printf(" ARRAY INT CARGADO DE FORMA RANDOM \n\n");
//    mostrarArrayInt(arrayIntRandom , valArrayIntRandom);
//
//    printf("\n Ingresar n%cmero: " , 163);
//    scanf("%d" , &num);
//
//    valorDecimal = numDecimal(arrayIntRandom , valArrayIntRandom , num);
//
//    printf("\n El valor decimal del n%cmero %d es: %.2f \n\n" , 163 , num , valorDecimal);
//
      /* ALGORITMO - PUNTO 4 */
//
//    posMayor = buscarPosMayor(arrayIntRandom , valArrayIntRandom);
//
//    printf(" El valor m%cximo del arreglo se encuentra en la posici%cn: %d \n\n" , 160 , 162 , posMayor);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 5 */

     srand(time(NULL));

     cargaMatrizPre(dimCols , matrizPrecipitaciones);

     printf(" MATRIZ DE PRECIPITACIONES CARGADA... \n\n");
     mostrarMatrizPrec(dimCols , matrizPrecipitaciones);

     printf("\n Ingresar mes: ");
     scanf("%d" , &mes);

     mayorPrec = buscarMaxPrec(dimCols , matrizPrecipitaciones , mes);

     printf("\n El d%ca con mayor precipitaci%cn corresponde al d%ca %d del mes %d \n\n" , 161 , 162 , 161 , mayorPrec , mes); /// REVISAR

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 6 */

//    printf(" Ingresar palabra: ");
//    fflush(stdin);
//    scanf("%s" , &string);
//
//    system("cls");
//
//    printf("\n La palabra ingresada fue: %s \n\n");
//
//    capicua = verificaStringCapicua(string);
//
//    if(capicua == 1){
//        printf(" La palabra es capic%ca. \n\n" , 163);
//    }else{
//        printf(" La palabra no es capic%ca. \n\n" , 163);
//    }

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 7 */

//    printf("\n INTERCAMBIO DE N%cMEROS: \n\n" , 233);
//
//    printf(" Ingresar n%cmero 1: " , 163);
//    scanf("%d" ,  &dato1);
//    printf(" Ingresar n%cmero 2: " , 163);
//    scanf("%d" ,  &dato2);
//
//    system("cls");
//
//    printf("\n N%cMEROS INGRESADOS: \n\n" , 233);
//    printf(" Numero 1: %d \n" , dato1);
//    printf(" Numero 2: %d \n\n" , dato2);
//
//    system("pause");
//
//    intercambio(&dato1 , &dato2);
//
//    printf("\n N%cMEROS INTERCAMBIADOS: \n\n" , 233);
//    printf(" N%cmero 1: %d \n" , 163 , dato1);
//    printf(" N%cmero 2: %d \n" , 163 , dato2);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 8 */

//    printf(" ALGORITMOS CARGADOS ORDENADOS... \n\n");
//    printf(" ARREGLO ORDENADO 1: \n\n");
//    mostrarArrayInt(arrayOrd1 , 6);
//    printf("\n ARREGLO ORDENADO 2: \n\n");
//    mostrarArrayInt(arrayOrd2 , 6);
//
//    system("pause");
//    system("cls");
//
//    valArrayFinOrd = intercalarArraysInt(arrayOrd1 , 6 , arrayOrd2 , 6 , arrayFinalOrd , 14);
//
//    printf("\n ARRAY INTERCALADO ORDENADO... \n\n");
//    mostrarArrayInt(arrayFinalOrd , valArrayFinOrd);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 9 */

//    valPersonas = cargaArrayPersonas(8 , arrayApellidos , arrayEdad , 8);
//
//    system("cls");
//
//    printf("\n ARRAY DE PERSONAS CARGADO... \n\n");
//    mostrarArrayPersonas(8 , arrayApellidos , arrayEdad , valPersonas);
//
//    buscarPersonaMayor(8 , arrayApellidos , arrayEdad , valPersonas);

    /* ---------------------------------------------------------------- */

    /* ALGORITMO - PUNTO 10 */


     /* ---------------------------------------------------------------- */

    return 0;
}

/* PUNTO 1 */

/* a) inicialización de las celdas del array con -1. */
int inicArrayInt(int aInt[] , int dimension)
{
    int i;

    for(i=0 ; i<dimension ; i++){
        aInt[i] = -1;
    }

    return i;
}

/* b) carga del array de enteros. */
int cargarArrayInt(int aInt[] , int dimension)
{
    int i=0;
    char continuar = 's';
    int num = 0;

    do{
       system("cls");

       printf(" CARGANDO ARRAY INT... \n\n");
       printf(" Ingresar n%cmero positivo: " , 163);
       scanf("%d" , &aInt[i]);

       i++;

       printf("\n %cDeseas seguir cargando el arreglo? s=SI / n=NO " , 168);
       fflush(stdin);
       continuar = getch();
       printf("\n\n");

    }while(continuar == 's' || continuar == 'S' && i<dimension);

    return i;
}

/* c) suma el contenido del array. */
int sumaElementosArrayInt(int aInt[] , int validos)
{
    int i;
    int sumaElementos = 0;

    for(i=0 ; i<validos ; i++){
        sumaElementos += aInt[i];
    }

    return sumaElementos;

}

/* d) cuenta elementos del array. */
int contarElementosArray(int aInt[] , int validos)
{
    int i;
    int contElementos = 0;

    for(i=0 ; i<validos ; i++){
        contElementos ++;
    }

    return contElementos;
}

/* e) promedio de un array de enteros */
float promArrayInt(int aInt[] , int validos)
{
    int cantTotalElementosArray = 0;
    int totalSuma = 0;
    float promedioArray = 0;

    totalSuma = sumaElementosArrayInt(aInt , validos);
    cantTotalElementosArray = contarElementosArray(aInt , validos);
    promedioArray = (float)totalSuma / cantTotalElementosArray;

    return promedioArray;
}

/* -------------------------------------------------------------------------------------- */

/* PUNTO 2 */

/* a) carga de array de chars */

int cargaArrayChars(char aChars[] , int dimension)
{
    char continuar = 's';
    int i = 0;

    do{
       system("cls");

       printf(" CARGANDO ARRAY CHARS... \n\n");
       printf(" Ingresar caracter: ");
       fflush(stdin);
       scanf("%c" , &aChars[i]);

       i++;

       printf("\n %cQuieres seguir cargando el arreglo? s=SI / n=NO " , 168);
       fflush(stdin);
       continuar = getch();
       printf("\n\n");

    }while(continuar == 's' || continuar == 'S' && i<dimension);

    return i;
}

/* b) invierte array chars */
void invertirArrayChars(char aChars[] , int validos)
{
    int i;
    int j = validos - 1;
    char temp = 0;

    for(i=0 ; i<j ; i++){
        temp = aChars[i];
        aChars[i] = aChars[j];
        aChars[j] = temp;

        j--;
    }
}

/* c) muestra array de chars */
void mostrarArrayChars(char aChars[] , int validos)
{
    int i;

    for(i=0 ; i<validos ; i++){
        printf("[%c]-" , aChars[i]);
    }
    printf("\n\n");
}

/* PUNTO 3 */

/* convierte un número entero a su valor decimal */
float numDecimal(int aInt[] , int validos , int num)
{
    int i = 0;
    float numDecimal = 0;
    int flag = 0;

    while(i<validos && flag == 0){
        if(num == aInt[i]){
            flag = 1;
            numDecimal = (float)aInt[i] / 10;
        }else{
            i++;
        }
    }

    return numDecimal;
}

/* PUNTO 4 */

/* busca el valor máximo en un array de enteros */
int buscarPosMayor(int aInt[] , int validos)
{
    int mayorPos = 0;
    int valMax = aInt[mayorPos];
    int i = mayorPos + 1;

    while(i < validos){
        if(aInt[i] > valMax){
            valMax = aInt[i];
            mayorPos = i;
        }else{
            i++;
        }
    }

    return mayorPos;
}

/* PUNTO 5 */

/* a) carga una matríz de forma random */

void cargaMatrizPre(int dimColumnas , int matriz[dimFilas][dimColumnas])
{
    int i;
    int j;

    for(i=0 ; i<dimFilas ; i++){
        for(j=0 ; j<dimColumnas ; j++){
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

/* b) busca la máxima precipitación del mes */ /// REVISAR

int buscarMaxPrec(int dimColumnas ,  int mes , int matriz[dimFilas][dimColumnas])
{
    int i;
    int j;
    int diaMaxPrec = 0;
    int maxPrec = 0;

    maxPrec = matriz[i][j];

    for(i=0; i<mes ; i++){
        for(j=0; j<dimColumnas ; j++){
            if(matriz[i][j] > maxPrec){
                maxPrec = matriz[i][j];
                diaMaxPrec = j;
            }
        }
    }

    return diaMaxPrec;

}

/* -------------------------------------------------------------------------------------- */

/* c) carga de array de precipitaciones */ /// REVISAR

int cargaArrayPrec(int aPrec[] , int dimension , int dimColumnas , int matriz[dimFilas][dimColumnas])
{
    int i;
    int precipitacion = 0;

    for(i=0 ; i<dimension ; i++){
        precipitacion = buscarMaxPrec(dimColumnas , matriz , i);
        aPrec[i] = precipitacion;
    }
}

/* -------------------------------------------------------------------------------------- */

/* 6) verifica si una cadena es capicúa */

int verificaStringCapicua(char palabra[])
{
    char aux[15];
    int i = 0;
    int j = strlen(palabra) - 1;
    int flag;

    while(i < j && palabra[i] == palabra[j]){
        i++;
        j--;
    }

    if(i >= j){
        flag = 1;
    }else{
        flag = 0;
    }

    return flag;
}

/* -------------------------------------------------------------------------------------- */

/* 7) intercambia números */

void intercambio(int *num1 , int *num2)
{
    int temp = 0;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

/* -------------------------------------------------------------------------------------- */

/* 8) intercalar dos arreglos ordenados */

int intercalarArraysInt(int arrayIntOrdenado1[] , int valArrayOrd1 , int arrayIntOrdenado2[] , int valArrayOrd2 , int arrayFinal[] , int dimension)
{
    int iA = 0;
    int iB = 0;
    int iC = 0;

    while(iA < valArrayOrd1 && iB < valArrayOrd2 && iC < dimension){
        if(arrayIntOrdenado1[iA] <= arrayIntOrdenado2[iB]){
            arrayFinal[iC] = arrayIntOrdenado1[iA];
            iA++;
        }else{
            arrayFinal[iC] = arrayIntOrdenado2[iB];
            iB++;
        }

        iC++;
    }

    while(iA < valArrayOrd1 && iC < dimension){
        arrayFinal[iC] = arrayIntOrdenado1[iA];
        iA++;
        iC++;
    }

     while(iB < valArrayOrd2 && iC < dimension){
        arrayFinal[iC] = arrayIntOrdenado2[iB];
        iB++;
        iC++;
    }

    return iC;
}

/* -------------------------------------------------------------------------------------- */

/* 9) array paralelos */

int cargaArrayPersonas(int dimApellido , char arrayApellidos[dimApellido][30] , int arrayEdades[] , int dimension)
{
    int i=0;
    char continuar = 's';

    while(i<dimension && continuar == 's'){
        system("cls");

        printf(" CARGANDO ARRAY DE PERSONAS... \n\n");
        printf(" Ingresar apellido (MAX 30 caracteres): ");
        fflush(stdin);
        gets(arrayApellidos[i]);

        printf(" Ingresar edad: ");
        scanf("%d" , &arrayEdades[i]);

        i++;

        printf("\n %cQuieres ingresar otra persona? s=SI / n=NO " , 168);
        fflush(stdin);
        continuar = getch();
    }

    return i;
}

/* busca la persona de mayor edad */
void buscarPersonaMayor(int dimApellido , char arrayApellidos[dimApellido][30] , int arrayEdades[] , int valPersonas)
{
    int i = 0;
    int flag = 0;
    int posMayor = 0;
    char personaMayor[30];

    posMayor = buscarPosMayor(arrayEdades , valPersonas);
    strcpy(personaMayor , arrayApellidos[posMayor]);

    while(i<valPersonas && flag == 0){
        if(strcmp(personaMayor , arrayApellidos[i]) == 0){
            flag = 1;
        }else{
            i++;
        }
    }

    if(flag == 1){
        printf(" La persona con mayor edad es: %s \n\n" , personaMayor);
    }else{
        printf(" La persona no existe. \n\n");
    }


}

/* -------------------------------------------------------------------------------------- */

/* 10) Hacer una función que reciba como parámetro de entrada un arreglo de enteros y tres parámetros de salida, tres números enteros
       que representen: valor máximo, valor mínimo y promedio. Se debe usar pasaje de parámetros por referencia. */

/* -------------------------------------------------------------------------------------- */


/* FUNCIONES AUXILIARES */

/* muestra array de enteros */
void mostrarArrayInt(int aInt[] , int validos)
{
    int i;

    for(i=0 ; i<validos ; i++){
        printf("[%d]-" , aInt[i]);
    }
    printf("\n");
}

/* carga random de array int */
int cargarRandomArrayInt(int aInt[] , int dimension)
{
    int i;

    for(i=0 ; i<dimension ; i++){
        aInt[i+1] = rand() %100 + 1;
    }

    return i;
}

/* muestra una matriz */
void mostrarMatrizPrec(int dimColumnas , int matriz[dimFilas][dimColumnas])
{
    int i = 0;
    int j = 0;

    for(i=0 ; i<dimFilas ; i++){
        for(j=0 ; j<dimColumnas ; j++){
            if(matriz[i][j] <= 100){
                printf("[%2d%%]" , matriz[i][j]);
            }else{
                printf("[%d%%]" , matriz[i][j]);
            }
        }
        printf("\n");
    }

}

/* muestra array de personas */
void mostrarArrayPersonas(int dimApellidos , char arrayApellidos[dimApellidos][30] , int arrayEdades[] , int valPersonas)
{
    int i;
    int numPersona = 0;

    for(i=0 ; i<valPersonas ; i++){
        printf(" Persona N%c%d\n" , 248 , numPersona+1);
        numPersona++;

        printf(" --------------- \n");
        printf(" Apellido: %s \n" , arrayApellidos[i]);
        printf(" Edad    : %d \n" , arrayEdades[i]);
        printf(" --------------- \n\n");

    }
}

/* busca el valor máxmio */
int buscaValorMax(int aInt[] , int validos)
{
    int max = 0;
    int i = 0;

    max = aInt[i];

    while(i < validos){
        if(aInt[i] > max){
            max = aInt[i];
        }else{
            i++;
        }
    }

    return max;
}

/* busca el valor mínimo */
int buscaValorMin(int aInt[] , int validos)
{
    int min = 0;
    int i = 0;

    min = aInt[i];

    while(i < validos){
        if(aInt[i] < min){
            min = aInt[i];
        }else{
            i++;
        }
    }

    return min;
}
