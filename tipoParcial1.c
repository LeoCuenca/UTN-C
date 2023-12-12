#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<stdlib.h>
#include<time.h>

struct alumno {
    char nombre[20];
    float notas[4];
};

int reprobados (struct alumno[], int n, int materia);
void ordenados (struct alumno[], int n, int materia);

void main () {
    int i, j;
    struct alumno datos[5];
    int mat;
    char name[5][20] = {"Leonel", "Carla", "Gabri", "Guada", "Celes"};

    srand(time(NULL));

    for ( i = 0 ; i < 5 ; i++ ) {
        for ( j = 0 ; j < 4 ; j++ ) {
            strcpy (datos[i].nombre, name[i]);
            datos[i].notas[j] = 2 + rand() % 8;
        }
    }

    for ( i = 0 ; i < 5 ; i++ ) {
        printf ("\n\n\t\tNOMBRE = %s", datos[i].nombre);
        for ( j = 0 ; j < 4 ; j++ ) {
            printf ("     %.2f     ", datos[i].notas[j]);
        }
    }

    printf ("\n\n\tIngrese la materia a comprobar: ");
    scanf ("%d", &mat);

    // reprobados (datos, 5, mat);
    ordenados (datos, 5, mat);

    for ( i = 0 ; i < 5 ; i++ ) {
        printf ("\n\n\t\tNOMBRE = %s", datos[i].nombre);
        for ( j = 0 ; j < 4 ; j++ ) {
            printf ("     %.2f     ", datos[i].notas[j]);
        }
    }

}

int reprobados (struct alumno strVecAlumnos[], int N, int materia) {

    int i, j;
    int contReprobados = 0;

    for ( i = 0 ; i < N ; i++ ) {
        if ( strVecAlumnos[i].notas[materia-1] < 7 ) {
            printf ("\n\t\tALUMNO REPROBADO: %s", strVecAlumnos[i].nombre);
            contReprobados += 1;
        }
    }

    return contReprobados;

}

void ordenados (struct alumno vecAlumnos[], int N, int materia) {

    int i, j;
    struct alumno aux;

    for ( i = 0 ; i < N-1 ; i++ ) {
        for ( j = 0 ; j < N-i-1 ; j++ ) {
            if ( vecAlumnos[j].notas[materia-1] < vecAlumnos[j+1].notas[materia-1] ) {
                aux = vecAlumnos[j];
                vecAlumnos[j] = vecAlumnos[j+1];
                vecAlumnos[j+1] = aux;
            }
        }
       for ( j = 0 ; j < N-i-1 ; j++ ) {
            if ( vecAlumnos[j].notas[materia-1] < 7 && strcmpi (vecAlumnos[j].nombre, vecAlumnos[j+1].nombre) > 0 ) {
                aux = vecAlumnos[j];
                vecAlumnos[j] = vecAlumnos[j+1];
                vecAlumnos[j+1] = aux;
            }
        }
    }

}