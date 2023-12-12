#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<stdlib.h>

#define N 5

struct estacionamientos {
    char direccion[20];
    int lugares[2][10];
};

int menos_lugares (struct estacionamientos[], int);
float promedio (struct estacionamientos[], int);

void main () {

    int i,j,k;
    struct estacionamientos vec[N];
    char direcciones[N][50] = {"UNO", "DOS", "TRES", "CUATRO", "CINCO"};

    for ( i = 0 ; i < N ; i++ ) {
        for ( j = 0 ; j < 2 ; j++ ) {
            for ( k = 0 ; k < 10 ; k++ ) {
                strcpy (vec[i].direccion, direcciones[i]);
                vec[i].lugares[j][k] = rand() % 2;
            }
        }
    }

    for ( i = 0 ; i < N ; i++ ) {
        printf ("\nDIRECCION: %s\n", vec[i].direccion);
        for ( j = 0 ; j < 2 ; j++ ) {
            for ( k = 0 ; k < 10 ; k++ ) {
                printf (" %d ", vec[i].lugares[j][k]);
            }
            printf ("\n");
        }
        printf ("\n");
    }

    printf ("\n\t\tLA FUNCION MENOS LUGARES DEVUELVE : %d", menos_lugares (vec, N));
    printf ("\n\t\tEL PROMEDIO DE OCUPACION ES : %.2f", promedio (vec, N));

}

int menos_lugares (struct estacionamientos vec[], int L) {
    
    int i, j, k, mas_lugares = 0, cont = 0, mas_pos;

    for ( i = 0 ; i < L ; i++ ) {
        for ( j = 0 ; j < 2 ; j++ ) {
            for ( k = 0 ; k < 10 ; k++ ) {
                if ( vec[i].lugares[j][k] == 0 ) {
                    cont += 1;
                }
            }
        }

        if ( cont > mas_lugares ) {
            mas_lugares = cont;
            mas_pos = i;
        }

        cont = 0;
        
    }

    printf ("\n\t\tDireccion: %s", vec[mas_pos].direccion);
    return mas_lugares;
    
}

float promedio (struct estacionamientos vec[], int L){

    int i, j, k, ocupacion = 0;
    float prom;

    for ( i = 0 ; i < L ; i++ ) {
        for ( j = 0 ; j < 2 ; j++ ) {
            for ( k = 0 ; k < 10 ; k++ ) {
                if ( vec[i].lugares[j][k] == 1 ) {
                    ocupacion += 1;
                }
            }
        }
    }

    prom = (float) ocupacion / L;
    return prom;

}