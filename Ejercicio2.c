#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PARTICIPANTES 16

struct datos{
    char nombre [20];
    char sexo;
    int handicap;
};

void enunciado();
struct datos ingresar(struct datos[]);
struct datos imprimir (struct datos[]);
struct datos ordenamiento (struct datos[]);

int main(){
    
    struct datos jugadores[PARTICIPANTES];

    enunciado();
    ingresar(jugadores);
    // ordenamiento(jugadores);
    imprimir(jugadores);
    // imprimir (jugadores);


      
    printf ("\n\n");

}

struct datos ordenamiento (struct datos players[]){

    struct datos AUX;
    int i, j;

    for ( i = 0 ; i < PARTICIPANTES - 1 ; i++){
        for ( j = 0 ; j < PARTICIPANTES - i - 1 ; j++ ){
            // AUX = REEEVEEER EL VIDEO
            AUX = players[j];
            players[j] = players [j+1];
            players[j+1] = AUX;
        }
    }

}

struct datos imprimir (struct datos pairs[]){

    int i;
    printf ("\n\nIMPRESION DE LOS DATOS");
    printf ("\n----------------------");

    printf ( "\n\n%-15s %20s %20s", "Nombre", "Sexo", "Handicap" );

    for ( i = 0 ; i < 16 ; i++ ){
        printf ( "\n%-15s %19c %17d", pairs[i].nombre, pairs[i].sexo, pairs[i].handicap);
    }

}

struct datos ingresar (struct datos pairs[]){

    // int i;
    // for ( i = 0 ; i < 16 ; i++ ){
    //     // Ingresa los nombres de los jugadores, recordando que son vectores de strings y hay que usar las funciones propias de strings.
    //     printf ("\nIngrese el nombre del %d%c jugador/a: ", i + 1, 167);
    //     gets(pairs[i].nombre);
    //     fflush (stdin);
    //     // Ingresa los sexos de los jugadores, mediante un getchar.
    //     printf ("\nIngrese el sexo: ");
    //     pairs[i].sexo = getchar();
    //     fflush (stdin);
    //     // Ingresa los handicaps, mediante un scanf, recordando el uso del anpersand
    //     printf ("\nIngrese el handicap: ");
    //     scanf ("%d", &pairs[i].handicap);
    //     fflush (stdin);
    // }
    int i;

    char nombre[][20] = {"CAROLINA","FEDERICO","EDUARDO","MINERVA", "EMILIANO","ANA","LAURA","PEPE", "LOLA","PACO", "NACHO", "MARIA", "JAVIER", "PAULA", "AYLEN", "HECTOR", "PANCHO" };
    char sexo[] = {'F','M','M','F','M','F','F','M','F','M', 'M', 'F', 'M', 'F', 'F', 'M', 'M'};

    for ( i = 0 ; i < 16 ; i++ ){
        strcpy (pairs[i].nombre , nombre[i]);
        pairs[i].sexo = sexo[i];
        pairs[i].handicap = 1 + rand() % 10;
    }

}

void enunciado(){
    system("cls"); //LIMPIA LA PANTALLA ANTES DE INICIAR EL PROGRAMA, ALGO DEMASIADO UTIL QUE NO SUPE HASTA AHORA.
    printf ("\nENUNCIADO\n---------\nSe desea organizar un torneo de tenes doble mixto con 16 parejas. Los datos de los participantes son: \n\t- Nombre (String de 20 caracteres)\n\t- Sexo (Char)\n\t- Handicap (Int)\nSe pide:\n\ta. Estructurar los datos y permitir su ingreso desde el teclado utilizando para ello un solo vector de estructuras.\n\tb. Indicar cuales son las parejas formadas considerando que el hombre de mayor Handicap debe jugar con la mujer de menos Handicap y viceversa, y asi sucesivamente, a fin de obtener un torneo parejo.\n\tc. Indicar los nombres de la pareja cuya suma de handicaps es la maxima (Considerarla unica)\n\nRESOLUCION\n----------");
}