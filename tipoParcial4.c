#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define N 5

struct persona {
    char nombre[20];
    int dni;
    int dni_madre;
    int dni_padre;
};

void sin_hijos (struct persona[], int);

void main () {

    struct persona data[N];
    int i;
    char names[N][20] = {"Leonel", "Gabriela", "Colin", "Celeste", "Guada"};
    int id[N]         = {100, 200, 300, 400, 500};
    int id_madre[N]   = {000, 000, 000, 200, 200};
    int id_padre[N]   = {000, 000, 000, 100, 100};

    for ( i = 0 ; i < N ; i++ ) {
        strcpy (data[i].nombre, names[i]);
        data[i].dni = id[i];
        data[i].dni_madre = id_madre[i];
        data[i].dni_padre = id_padre[i];
    }

    printf ("\n\t\tNOMBRE     DNI     DNI MADRE     DNI PADRE");

    for ( i = 0 ; i < N ; i++ ) {
        printf ("\n\t\t%s     %d     %d     %d", data[i].nombre, data[i].dni, data[i].dni_madre, data[i].dni_padre);
    }

    sin_hijos (data, N);

    printf ("\n\t\tNOMBRE     DNI     DNI MADRE     DNI PADRE");

    for ( i = 0 ; i < N ; i++ ) {
        printf ("\n\t\t%s     %d     %d     %d", data[i].nombre, data[i].dni, data[i].dni_madre, data[i].dni_padre);
    }
}



void sin_hijos (struct persona datos[], int L) {

    int i, j;
    struct persona aux;

    for ( i = 0 ; i < L-1 ; i++) {
        for ( j = 0 ; j < L-i-1 ; j++) {
            if (datos[i].dni != datos[j].dni_madre || datos[i].dni != datos[j].dni_padre && strcmpi (datos[j].nombre, datos[j+1].nombre) > 0){ 
                // if ( strcmpi (datos[j].nombre, datos[j+1].nombre) > 0 ) {
                    aux = datos[j];
                    datos[j] = datos[j+1];
                    datos[j+1] = aux;      
                // }
            }         
        }
    }


}