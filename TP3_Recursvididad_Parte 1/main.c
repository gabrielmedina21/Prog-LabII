#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    long respuesta = 0;
    int base = 0;
    int exponente = 0;
    int rtaPotencia = 0;
    int arrayInt[] = {20,60,28,12,99};
    int i = 0;
    int j = 4;
    int flag;
    int capicua = 0;
    int sumaArray;
    int menorElemento = 0;

    printf("\t\t\t\t TP N%c3 - RECURSIVIDAD \n\n" , 248);
//    printf(" Ingresar n%cmero: " , 163);
//    scanf("%d" , &num);
//
//    respuesta = factorial(num);
//
//    printf("\n EL factorial de %d es: %ld \n\n" , num , respuesta);
//
//    printf(" Ingresar base: ");
//    scanf("%d" , &base);
//    printf(" Ingresar exponente: ");
//    scanf("%d" , &exponente);
//
//    rtaPotencia = potencia(base , exponente);
//
//    printf("\n %d ^ %d = %d \n\n" , base , exponente , rtaPotencia);

//    printf(" ARRAY CARGADO... \n\n");
//    mostrarArrayRec(arrayInt , 5 , i);
//    printf("\n ARRAY INVERTIDO... \n\n");
//    mostrarArrayRecInvertido(arrayInt , 5 , i);
//    printf("\n");

//    capicua = verificaArrayCapicua(arrayInt , 5 , i , j , flag);
//
//    if(capicua == 1){
//        printf(" El array es capicua. \n\n");
//    }else{
//        printf(" El array  no es capicua. \n\n");
//    }

//    sumaArray = sumaArrayIntRecursivo(arrayInt , 5 , i);
//
//    printf(" La suma de los elementos del array es: %d \n\n" , sumaArray);

//    menorElemento = buscaMenorArrayInt(arrayInt , 5 , i);
//
//    printf(" El menor elemento del arreglo es: %d \n\n" , menorElemento);


    return 0;
}

/* 1) calcula el factoria de un número */
int factorial(int numero)
{
    int resultado;

    if(numero == 0){  /* condición de corte - 'numero == 0' es la solución trivial */
        resultado = 1;
    }else{
        resultado = numero * factorial(numero - 1); /* 'numero - 1' es el acercamiento a la condición de corte */
    }

    return resultado;
}

/* 2) calcula la potencia de un número  */
int potencia(int base , int exponente)
{
    int resultado;

    if(exponente == 0){
        resultado = 1;
    }else{
        resultado = base * potencia(base , exponente - 1 );
    }

    return resultado;
}

/* 3) recorre el arreglo y lo imprime */
void mostrarArrayRec(int arrInt[] , int validos , int i)
{
    if(i == validos-1){
        printf("[%d]-" , arrInt[i]);
        printf("\n");
    }else{
        printf("[%d]-" , arrInt[i]);
        mostrarArrayRec(arrInt , validos , i+1);
    }
}

/* 4) recorrer array y mostrar de forma invertida */
void mostrarArrayRecInvertido(int arrInt[] , int validos , int i)
{

    if(i==validos-1){
        printf("[%d]-" , arrInt[i]);
    }else{
        mostrarArrayRecInvertido(arrInt , validos , i+1);
        printf("[%d]-" , arrInt[i]);
    }

}

/* 5) verifica si  un array es capicúa */
int verificaArrayCapicua(int arrInt[] , int validos , int i , int j , int flag)
{
    if(i<validos){
        if(arrInt[i] == arrInt[j]){
            flag = 1;
            flag = verificaArrayCapicua(arrInt , validos , i+1 , j-1 , flag);
        }else{
            flag = 0;
        }
    }

    return flag;
}

/* 6) suma elementos de un array */
int sumaArrayIntRecursivo(int arrInt[] , int validos , int i)
{
    int suma = 0;

    if(i<validos){
        suma = arrInt[i] + sumaArrayIntRecursivo(arrInt , validos , i+1);
    }

    return suma;
}

/* 7) busca menor elemento del array */
int buscaMenorArrayInt(int arrInt[] , int validos , int i)
{
    int menor;

    if(i == validos-1){
        menor = arrInt[i];
    }else{
        menor = buscaMenorArrayInt(arrInt , validos , i+1);

        if(arrInt[i] < menor){
            menor = arrInt[i];
        }
    }

    return menor;
}


