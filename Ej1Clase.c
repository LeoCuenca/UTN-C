#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define CANT 16

struct fecha {
    int dia;
    int mes;
    int anio;
};

struct jugador {
    char nombre[20];
    char sexo;
    struct fecha fecha_nac;
};

void cargar(struct jugador[], int);
void mostrar (struct jugador[], int);
void ordenar(struct jugador[], int);
int fecha_rnd (int, int);


int main (){

    system ("cls");
    srand(time(NULL));

    struct jugador vec [CANT];

    cargar (vec, CANT);
    printf ("\nDATOS SIN ORDENAR\n");
    printf ("-----------------\n");

    mostrar (vec, CANT);
    ordenar (vec, CANT);
    printf ("\nDATOS ORDENADOS\n");
    printf ("---------------\n");
    mostrar (vec, CANT);

    printf("\n\n\n");
}

void ordenar(struct jugador vec[], int L){

    int i, j;
    struct jugador AUX;

    for ( i = 0 ; i < L-1 ; i++ ){
        for ( j = 0 ; j < L-i-1 ; j++ ){
            if ( vec[j].sexo < vec[j+1].sexo || vec[j].sexo == vec [j+1].sexo && vec[j].fecha_nac.anio < vec[j+1].fecha_nac.anio || vec[j].sexo == vec[j+1].sexo && vec[j].fecha_nac.anio == vec[j+1].fecha_nac.anio && vec[j].fecha_nac.mes > vec[j+1].fecha_nac.mes || vec[j].sexo == vec[j+1].sexo && vec[j].fecha_nac.anio == vec[j+1].fecha_nac.anio && vec[j].fecha_nac.mes == vec[j+1].fecha_nac.mes && vec[j].fecha_nac.dia > vec[j+1].fecha_nac.dia){
                AUX = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = AUX;
            }
        }
    }

}

void cargar(struct jugador vec[], int L){

    int i;
    char nombres[][20] = {"CAROLINA","FEDERICO","EDUARDO","MINERVA", "EMILIANO","ANA","LAURA","PEPE", "LOLA","PACO", "NACHO", "MARIA", "JAVIER", "PAULA", "AYLEN", "HECTOR", "PANCHO" };
    char sexo[] = {'F','M','M','F','M','F','F','M','F','M', 'M', 'F', 'M', 'F', 'F', 'M', 'M'};

    for ( i = 0 ; i < 16 ; i++ ){
        strcpy (vec[i].nombre, nombres[i]);
        vec[i].sexo = sexo[i];
        vec[i].fecha_nac.dia = fecha_rnd(1, 30);
        vec[i].fecha_nac.mes = fecha_rnd(1, 12);
        vec[i].fecha_nac.anio = fecha_rnd(2000, 9);
    }

}

void mostrar (struct jugador vec[], int L){

    int i;
    printf ("\n\t%-20s%s\t%s\n", "NOMBRE", "SEXO", "FECHA DE NACIMIENTO");
    for ( i = 0 ; i < 16 ; i++ ){
        printf ("\n\t%-20s%c\t\t%02d/%02d/%d", vec[i].nombre, vec[i].sexo, vec[i].fecha_nac.dia, vec[i].fecha_nac.mes, vec[i].fecha_nac.anio);
    }

    printf ("\n");
}

int fecha_rnd (int piso, int techo){
    return piso + rand () % techo;
}

