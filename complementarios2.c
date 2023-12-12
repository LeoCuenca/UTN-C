#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<stdlib.h>

struct camion {
    char patente[8];
    float viajes[100];
};

void distanciaRecorrida (struct camion[], char[]);

void main () {

    int i;
    char patente[8];
    struct camion cargaViajes[10];
    strcpy (cargaViajes[0].patente, "VZU460");

    for ( i = 0 ; i < 100 ; i++ ) {
        cargaViajes[0].viajes[i] = 1 + rand() % 99;
    }

    printf ("\n\t\tIngrese la patente: ");
    gets (patente);

    distanciaRecorrida (cargaViajes, patente);

}

void distanciaRecorrida (struct camion vector[], char pat[]) {

    int i, j, flag = 0;
    float sumatoria = 0;

    for ( i = 0 ; i < 10 ; i++ ) {
        if ( strcmpi (vector[i].patente, pat) == 0 ) {
            for ( j = 0 ; j < 100 ; j++ ) {
                sumatoria += vector[i].viajes[j];
                flag = 1;
            }
            printf ("\n\n\t\tLa distancia recorrida fue de %f", sumatoria);
        }
    }
    
    if ( flag == 0 ) {
        printf ("\n\n\t\tLa patente ingresada no fue encontrada.");
    }

}

