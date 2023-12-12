#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<stdlib.h>

#define N 6

struct datos {
     char nombre[20];
     int edad;
     char sexo;
};

void ingresoUsuario (struct datos[]);
void ingresoAutomatico (struct datos[]);
void imprimirRegistro (struct datos[]);
void ordenamientoNombre (struct datos[]);
void ordenamientoEdad (struct datos[]);
void ordenamientoSexo (struct datos[]);
void promedioJovenes (struct datos[]);
void parejas (struct datos[]);

void main () {

     struct datos personas[N];

     ingresoAutomatico (personas);

     printf ("\n\t\tImpresion de los registros\n");
     imprimirRegistro (personas);

     printf ("\n\t\tOrdenamiento Alfabetico\n");
     ordenamientoNombre (personas);
     imprimirRegistro (personas);

     printf ("\n\t\tOrdenamiento por Edad\n");
     ordenamientoEdad (personas);
     imprimirRegistro (personas);
     
     printf ("\n\t\tOrdenamiento por Sexo\n");
     ordenamientoSexo (personas);
     imprimirRegistro (personas);

     printf ("\n\t\tOrdenamiento por Sexo y por Edad\n");
     ordenamientoSexoEdad (personas);
     imprimirRegistro (personas);

     printf ("\n\t\tParejas para la competicion\n");
     parejas (personas);
   
     printf ("\n\n");

}

void ingresoUsuario (struct datos people[]) {

     int i;

     for ( i = 0 ; i < N ; i++ ) {

          printf ("\n\t\tIngrese el %d%c nombre: ", i+1, 167);
          gets (people[i].nombre);

          printf ("\t\tIngrese la edad ");
          scanf ("%d", &people[i].edad);
          fflush(stdin);

          printf ("\t\tIngrese el sexo: ");
          scanf ("%c", &people[i].sexo);
          fflush(stdin);

     }

}

void ingresoAutomatico (struct datos people[]) {

     int i;
     char name[N][20] = {"Leonel", "Carla", "Alberto", "Claudia", "Celeste", "Hernan"};
     int age[N] = {33, 32, 62, 61, 2, 30}; 
     char sex[N] = {'m', 'f', 'm', 'f', 'f', 'm'};

     for ( i = 0 ; i < N ; i++ ) {
          strcpy (people[i].nombre, name[i]);
          people[i].edad = age[i];
          people[i].sexo = sex[i];
     }

}

void imprimirRegistro (struct datos people[]) {

     int i;

     for ( i = 0 ; i < N ; i++ ) {
          printf ("\n\t\t\tNombre: %s // Edad: %d // Sexo: %c", people[i].nombre, people[i].edad, people[i].sexo);
     }

     printf ("\n");
}

void ordenamientoNombre (struct datos people[]) {

     int i, j;
     struct datos aux;
     
     for ( i = 0 ; i < N-1 ; i++ ) {
          for ( j = 0 ; j < N-1-i ; j++ ) {
               if ( strcmpi (people[j].nombre, people[j+1].nombre) > 0 ) {
                    aux = people[j];
                    people[j] = people[j+1];
                    people[j+1] = aux;
               }
          }
     }

}

void ordenamientoEdad (struct datos people[]) {

     int i, j;
     struct datos aux;

     for ( i = 0 ; i < N-1 ; i++ ) {
          for ( j = 0 ; j < N-i-1 ; j++ ) {
               if ( people[j].edad > people[j+1].edad ) {
                    aux = people[j];
                    people[j] = people[j+1];
                    people[j+1] = aux;
               }
          }
     }

}

void ordenamientoSexo (struct datos people[]) {

     int i, j;
     struct datos aux;

     for ( i = 0 ; i < N-1 ; i++ ) {
          for ( j = 0 ; j < N-i-1 ; j++ ) {
               if ( people[j].sexo < people[j+1].sexo ) {
                    aux = people[j];
                    people[j] = people [j+1];
                    people[j+1] = aux;
               }
          }
     }
}

void ordenamientoSexoEdad (struct datos people[]) {

     int i, j;
     struct datos aux;

     for ( i = 0 ; i < N-1 ; i++ ) {
          for ( j = 0 ; j < N-i-1 ; j++ ) {
               if ( people[j].sexo < people[j+1].sexo || people[j].sexo == people[j+1].sexo && people[j].edad > people[j+1].edad ) {
                    aux = people[j];
                    people[j] = people[j+1];
                    people[j+1] = aux;
               }
          }
     }

}

void promedioJovenes (struct datos vecPersonas[]){

     int i, j;
     int sumMasculino = 0, sumFemenino = 0, contM = 0, contF = 0;
     float promMasculino, promFemenino;
 
     for ( i = 0 ; i < 6 ; i++ ) {
          if ( vecPersonas[i].sexo == 'm' || vecPersonas[i].sexo == 'M' ) {
               sumMasculino += vecPersonas[i].edad;
               contM += 1;
          }
          else {
               if ( vecPersonas[i].sexo == 'f' || vecPersonas[i].sexo =='F' ) {
                    sumFemenino += vecPersonas[i].edad;
                    contF += 1;
               }
          }
     }

     printf ("\n\n");

     if ( (float) sumMasculino / contM > (float) sumFemenino / contF ) {
          printf ("\t\tLos hombres tienen un mayor promedio de edad");
     }
     else{
          printf ("\t\tLas mujeres tienen un mayor promedio de edad");
     }

}

void parejas (struct datos vecParejas[]) {

     int i, j;
     struct datos aux;
     struct datos vecMasculino[N/2];
     struct datos vecFemenino[N/2];

     for ( i = 0 ; i < N-1 ; i++ ) {
          for ( j = 0 ; j < N-i-1 ; j++ ) {
               if ( vecParejas[j].sexo < vecParejas[j+1].sexo || vecParejas[j].sexo == vecParejas[j+1].sexo && vecParejas[j].edad < vecParejas[j+1].edad ) {
                    aux = vecParejas[j];
                    vecParejas[j] = vecParejas[j+1];
                    vecParejas[j+1] = aux;
               }
          }
     }

     for ( i = 0 ; i < N/2 ; i++ ) {
          vecMasculino[i] = vecParejas[i];
          vecFemenino[i] = vecParejas[i+(N/2)];
     }

     for ( i = 0 ; i < N/2 ; i++ ) {
          printf ("\n\t\t\t%d%c pareja : %s VS %s", i+1, 167, vecMasculino[i].nombre, vecFemenino[i].nombre );
     }

}





