#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

struct fecha {
    int dia;
    int mes;
    int anio;
};

struct viajecamion {
    char patente[10];
    char ciudad_origen[50];
    char ciudad_destino[50];
    float peso_transportado;
    struct fecha fecha_viaje;
};

#define N 2
#define cantCamiones 4

void ingreso (struct viajecamion[], int);
void patentes (struct viajecamion[], int);

void main () {

    struct viajecamion datos[N];
    ingreso (datos, N);
    patentes (datos, N);

}

void ingreso (struct viajecamion datosCamion[], int viajes) {

    int i, j;
    int camiones[cantCamiones];

    for ( i = 0 ; i < cantCamiones ; i++ ) {

        printf ("\n\t\tIngrese la patente del %d%c camion: ", i+1, 167);
        gets (datosCamion[i].patente);

        for ( j = 0 ; j < viajes ; j++ ) {

            printf ("\n\t\t\tIngrese la ciudad de origen del %d%c viaje: ", j+1, 167);
            gets (datosCamion[i].ciudad_origen);

            printf ("\n\t\t\tIngrese la ciudad de destino del %d%c viaje: ", j+1, 167);
            gets (datosCamion[i].ciudad_destino);

            printf ("\n\t\t\tIngrese el peso transportado durante el %d%c viaje: ", j+1, 167);
            scanf ("%f", &datosCamion[i].peso_transportado);
            fflush (stdin);

            printf ("\n\t\t\tIngrese la fecha del %d%c viaje (DD/MM/YYYY): ", j+1, 167);
            scanf ("%d/%d/%d", &datosCamion[i].fecha_viaje.dia, &datosCamion[i].fecha_viaje.mes, &datosCamion[i].fecha_viaje.anio);
            fflush (stdin);

        }
    }
}

void patentes (struct viajecamion datosCamion[], int viajes ) {

    int i, j, flag = 0;
    char auxPatente[10];

    for ( i = 0 ; i < cantCamiones ; i++ ) {
        strcpy (auxPatente, datosCamion[i].patente);
        for ( j = i+1 ; j < cantCamiones ; j++ ) {            
            if ( strcmpi (datosCamion[j].patente, auxPatente) == 0 ) {
                flag = 1;
            }   
        }
        if ( flag == 0 ) {
            printf ("\n\t\tPATENTE : %s", datosCamion[i].patente);
        }
        else {
            flag = 0;
        }
    }
    
}

void masViajes (struct viajecamion datosCamion[], int viajes) {

    


}






