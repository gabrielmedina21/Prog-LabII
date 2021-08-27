#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct {
  int matricula;
  char nombre[30];
} stAlumno;

typedef struct {
  int codigo;
  char nombreMat[20];
}stMateria;

typedef struct {
  int matricula;
  int codigo;
  int nota;
}stNota;


int cargaAlumnos(stAlumno arrayAlums[] , int dimAlums);
int cargaMaterias(stMateria arrayMats[] , int dimMats);
int cargaNotas(stNota arrayNotas[] , int dimNotas , stAlumno arrayAlums[] , int valAlums , stMateria arrayMats[] , int valMats);
void mostrarUnAlumno(stAlumno alumno);
void mostrarUnaNota(stNota nota);
void mostrarUnaMateria(stMateria materia);
void mostrarArrayAlums(stAlumno arrayAlums[] , int validos);
void mostrarArrayMats(stMateria arrayMats[] , int validos);

int buscarMatricula(stAlumno arrayAlums[] , int valAlums , int matricula);
int buscarCodigo(stMateria arrayMats[] , int valMats , int code);
void mostrarListaNotas(stAlumno arrayAlums[] , int valAlums , stMateria arrayMats[] , int valMats , stNota arrayNotas[] , int valNotas , char alum[]);

int main()
{
    stAlumno alus[20]; //  almacena los datos de los 20 alumnos.
    stMateria mats[5]; //  almacena los códigos y nombres de las 5 materias.
    stNota notas[100]; //  almacena todas las notas de los alumnos.

    int valMaterias = 0;
    int valAlums = 0;
    int valNotas = 0;
    char alumno[30];

    valMaterias = cargaMaterias(mats , 5);
    valAlums = cargaAlumnos(alus , 20);

    system("cls");

    printf(" LISTADO DE LAS MATERIAS CARGADAS... \n\n");
    mostrarArrayMats(mats , valMaterias);

    printf(" LISTADO DE ALUMNOS CARGADOS... \n\n");
    mostrarArrayAlums(alus , valAlums);

    printf("\n\n");
    system("pause");

    printf(" CARGA DE NOTAS... \n\n");
    valNotas = cargaNotas(notas , 100 , alus , valAlums , mats , valMaterias);

    system("pause");
    system("cls");

//    printf(" Ingresar alumno: ");
//    fflush(stdin);
//    scanf("%s" , &alumno);

    system("cls");

//    printf(" LISTA DE NOTAS DEL ALUMNO... \n\n");
//    mostrarListaNotas(alus , valAlums , mats , valMaterias , notas , valNotas , alumno);

    printf(" LISTA DE NOTAS... \n\n");
    mostarArrayNotas(notas , valNotas);

    return 0;
}

int cargaAlumnos(stAlumno arrayAlums[] , int dimAlums)
{
    char continuar = 's';
    int i = 0;

    while(i<dimAlums && continuar == 's'){
        system("cls");

        printf(" CARGANDO ALUMNOS... \n\n");

        printf(" Ingresar matr%ccula: " , 161);
        scanf("%d" , &arrayAlums[i].matricula);

        printf(" Ingresar nombre: ");
        fflush(stdin);
        gets(&arrayAlums[i].nombre);

        i++;

        printf("\n%cQuieres seguir cargando alumnos? s=SI / n=NO " , 168);
        fflush(stdin);
        continuar = getch();
        printf("\n\n");
    }

    return i;
}

int cargaMaterias(stMateria arrayMats[] , int dimMats)
{
    char continuar = 's';
    int i = 0;

    while(i<dimMats && continuar == 's'){
        system("cls");

        printf(" CARGANDO MATERIAS... \n\n");

        printf(" Ingresar c%cdigo: " , 162);
        scanf("%d" , &arrayMats[i].codigo);

        printf(" Ingresar nombre de la materia: ");
        fflush(stdin);
        gets(&arrayMats[i].nombreMat);

        i++;

        printf("\n%cQuieres seguir cargando materias? s=SI / n=NO " , 168);
        fflush(stdin);
        continuar = getch();
        printf("\n\n");
    }

    return i;
}

int cargaNotas(stNota arrayNotas[] , int dimNotas , stAlumno arrayAlums[] , int valAlums , stMateria arrayMats[] , int valMats)
{
    int matricula = 0;
    int codigo = 0;
    int validarMatricula = 0;
    int validarCodigo = 0;
    int i = 0;
    char continuar = 's';

    printf(" CARGANDO NOTAS... \n\n");

    while(i<dimNotas && continuar == 's'){
        system("cls");

        printf(" LISTADO DE ALUMNOS... \n\n");
        mostrarArrayAlums(arrayAlums , valAlums);
        printf(" LISTADO DE MATERIAS... \n\n");
        mostrarArrayMats(arrayMats , valMats);

        printf(" Ingresar matr%ccula: " , 161);
        scanf("%d" , &matricula);

        printf(" Ingresar c%cdigo: " , 162);
        scanf("%d" , &codigo);

        validarMatricula = buscarMatricula(arrayAlums , valAlums , matricula);
        validarCodigo = buscarCodigo(arrayMats , valMats , codigo);

        if(validarMatricula == 1 && validarCodigo == 1){
            printf(" Ingresar nota: ");
            scanf("%d" , arrayNotas[i].nota);
        }else{
            printf("\n La matr%ccula y/o el c%cdigo no coinciden. \n\n" , 161 , 162);
        }

        i++;

        printf("\n%cQuieres ingresar otra nota? s=SI / n=No " , 168);
        fflush(stdin);
        continuar = getch();
        printf("\n\n");
    }

    return i;
}

/* FUNCIONES AUXILIARES */

/* muestra un alumno */
void mostrarUnAlumno(stAlumno alumno)
{
    printf(" *************************** \n");
    printf(" Matr%cula: %d\n" , 161 , alumno.matricula);
    printf(" Nombre  : %s\n" , alumno.nombre);
    printf(" *************************** \n\n");
}

/* muestra una materia */
void mostrarUnaMateria(stMateria materia)
{
    printf(" --------------------------- \n");
    printf(" C%cdigo : %d\n" , 162 , materia.codigo);
    printf(" Materia: %s\n" , materia.nombreMat);
    printf(" --------------------------- \n\n");
}

/* muestra array de alumnos */
void mostrarArrayAlums(stAlumno arrayAlums[] , int validos)
{
    int i;
    int cantAlums = 0;

    for(i=0 ; i<validos ; i++){
        printf(" Alumno N%c%d \n" , 248 , cantAlums+1);
        cantAlums++;

        mostrarUnAlumno(arrayAlums[i]);
    }
}

/* muestra array de materias */
void mostrarArrayMats(stMateria arrayMats[] , int validos)
{
    int i;
    int cantMats = 0;

    for(i=0 ; i<validos ; i++){
        printf(" Materia N%c%d \n" , 248 , cantMats+1);
        cantMats++;

        mostrarUnaMateria(arrayMats[i]);
    }
}

/* busca la matrícula */
int buscarMatricula(stAlumno arrayAlums[] , int valAlums , int matricula)
{
    int i = 0;
    int flag = 0;

    while((i<valAlums) && (flag == 0)){
        if(arrayAlums[i].matricula == matricula){
            flag = 1;
        }else{
            i++;
        }
    }

    return flag;
}

/* busca el código */
int buscarCodigo(stMateria arrayMats[] , int valMats , int code)
{
    int i = 0;
    int flag = 0;

    while((i<valMats) && (flag == 0)){
        if(arrayMats[i].codigo == code){
            flag = 1;
        }else{
            i++;
        }
    }

    return flag;
}

void mostrarUnaNota(stNota nota)
{
    printf(" +-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf(" C%cdigo: %d \n" , 162 , nota.codigo);
    printf(" Matr%ccula: %d \n" , 161 , nota.matricula);
    printf(" Nota: %d \n" , nota.nota);
    printf(" +-+-+-+-+-+-+-+-+-+-+-+-+-+ \n\n");
}

//void mostrarListaNotas(stAlumno arrayAlums[] , int valAlums , stMateria arrayMats[] , int valMats , stNota arrayNotas[] , int valNotas , char alum[])
//{
//    int i = 0;
//    int contNotas = 0;
//
//    while(i < valAlums){
//        if()
//    }
//}

int arrayNotas(stNota arrNotas[] , int dimension , stNota nota)
{
    int i;

    for(i=0 ; i<dimension ; i++){
        arrNotas[i] = nota;
    }

    return i;
}

void mostarArrayNotas(stNota arrNotas[] , int valNotas)
{
    int i=0;
    int cantNotas = 0;

    while(i<valNotas){
        printf(" Nota N%c%d \n" , 248 , cantNotas+1);
        mostrarUnaNota(arrNotas[i]);
        i++;
        cantNotas++;
    }
}
