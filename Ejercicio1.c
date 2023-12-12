#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

// #define LNAME 10

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct inferiores{
    char nombre[20];
    char sexo;
    struct fecha nacimiento;
};

char random_name (int);
int fecha_rnd (int, int);

int main(){

    srand(time(NULL));

    printf ("\n\t1. Los datos de los 130 integrantes de las divissiones inferiores de un club se encuentran almacenados en un vector de estructuras de las siguienmte manera:\n\tNombre (string de 20 caracteres), sexo (char) y fecha de nacimiento (estructura de tipo fecha: int dia, int mes, int a%co).\n\tSe pide mostrar los nombres discriminados por sexo y categoria sabiendo que Juveniles incorpora hasta los nacidos en 2005, Cadetes hasta 2007 e Infantiles hasta 2009", 164);

    struct inferiores uno, dos, tres;

    strcpy (uno.nombre, "Juan");
    strcpy (dos.nombre, "Florencia");
    strcpy (tres.nombre, "Celeste");

    uno.sexo = 77;
    dos.sexo = 70;
    tres.sexo = 70;

    uno.nacimiento.dia = fecha_rnd (1,31);
    uno.nacimiento.mes = fecha_rnd (1,12);
    uno.nacimiento.anio = fecha_rnd (2000, 2009);

    dos.nacimiento.dia = 10;
    dos.nacimiento.mes = 5;
    dos.nacimiento.anio = 2007;

    tres.nacimiento.dia = 19;
    tres.nacimiento.mes = 4;
    tres.nacimiento.anio = 2009;

    int i;


    








    printf ("\n\n");
    // random_name(LNAME);
}

char random_name (int longitud) {
     int i;
     char a;
     for ( i = 0 ; i < longitud ; i++ ){
         printf ("%c", 65 + rand() %  25);
     }
}

int fecha_rnd (int piso, int techo){
    return piso + rand () % techo;
}