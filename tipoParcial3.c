#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

struct sala {
    int codigo;
    int butaca[4][6];
    char peli[30];
};

int mas_vista (struct sala vec[4]) {

    int i, j, k, cont = 0, audiencia = 0, code;

    for ( i = 0 ; i < 4 ; i++ ) {
        for ( j = 0 ; i < 4 ; j++ ) {
            for ( k = 0 ; j < 6 ; k++ ) {
                if ( vec[i].butaca[j][k] == 1) {
                    cont =+ 1;
                }
            }
        }
        if ( cont > audiencia ) {
            audiencia = cont;
            code = i;
        }
    }

    return code;

}

int buscar_peli (struct sala vec[4], char titulo[30]) {

    int i, code = -1;

    for ( i = 0 ; i < 4 ; i++ ) {
        if ( strcmpi (titulo, vec[i].peli) == 0 ) {
            code = i;
        }
    }

    return code;






}