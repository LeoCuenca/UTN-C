#include<stdio.h>
#define N 10

void mostrar(int[], char[], float[]);
int buscar(int[], int);
void res_busqueda(int[], char[], float[], int);
void ordenar_cuenta(int[], char[], float[]);
void ordenar_tipo(int[], char[], float[]);
void ordenar_saldo(int[], char[], float[]);
void ordenar_tipo_y_cuenta(int [], char [], float []);


int main(){

    int CUENTA[N] = {458, 321, 744, 228, 349, 201, 198, 705, 789, 227};
    char TIPO[N] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'C', 'B'};
    float SALDO[N] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66};
    int busqueda;

    mostrar (CUENTA, TIPO, SALDO);
    ordenar_cuenta(CUENTA, TIPO, SALDO);
    mostrar (CUENTA, TIPO, SALDO);

    mostrar (CUENTA, TIPO, SALDO);
    ordenar_tipo(CUENTA, TIPO, SALDO);
    mostrar (CUENTA, TIPO, SALDO);

    mostrar (CUENTA, TIPO, SALDO);
    ordenar_saldo(CUENTA, TIPO, SALDO);
    mostrar (CUENTA, TIPO, SALDO);

    mostrar (CUENTA, TIPO, SALDO);
    ordenar_tipo_y_cuenta(CUENTA, TIPO, SALDO);
    mostrar (CUENTA, TIPO, SALDO);

    printf ("\n\nIngrese el numero de cuenta a buscar: ");
    scanf ("%d", &busqueda);
    res_busqueda(CUENTA, TIPO, SALDO, buscar (CUENTA, busqueda));

}

void mostrar(int C[], char T[], float S[]){

    int i;

    for ( i = 0 ; i < N ; i++ ){
        printf ("\nCUENTA: %d | TIPO: %c | SALDO: %.2f", C[i], T[i], S[i]);
    }
    printf ("\n\n");
}

int buscar(int C[], int busq){

    int i, posicion;

    for ( i = 0 ; i < N ; i++ ){
        if ( C[i] == busq ){
            posicion = i;
        }
    }

    return posicion;

}

void res_busqueda(int C[], char T[], float S[], int pos){

    if ( pos < 0 ){
        printf ("\n\nEl ingreso es incorrecto");
    }
    else{
        printf ("\n\nLos datos de la cuenta buscada son: CUENTA: %d | TIPO: %c | SALDO: %.2f", C[pos], T[pos], S[pos]);
    }

}

void ordenar_cuenta(int C[], char T[], float S[]){

    int i, j, aux_cuenta, aux_tipo, aux_saldo;

    for ( i = 0 ; i < N-1 ; i++ ){
        for ( j = 0 ; j < N-i-1 ; j++){
            if ( C[j] > C[j+1] ){

                aux_cuenta = C[j];
                C[j] = C[j+1];
                C[j+1] = aux_cuenta;

                aux_tipo = T[j];
                T[j] = T[j+1];
                T[j+1] = aux_tipo;

                aux_saldo = S[j];
                S[j] = S[j+1];
                S[j+1] = aux_saldo;

            }
        }
    }
}

void ordenar_tipo (int C[], char T[], float S[]){

    int i, j, aux_cuenta, aux_tipo, aux_saldo;

    for ( i = 0 ; i < N-1 ; i++ ){
        for ( j = 0 ; j < N-i-1 ; j++ ){
            if ( (int) T[j] > (int) T[j+1] ){

                aux_cuenta = C[j];
                C[j] = C[j+1];
                C[j+1] = aux_cuenta;

                aux_tipo = T[j];
                T[j] = T[j+1];
                T[j+1] = aux_tipo;

                aux_saldo = S[j];
                S[j] = S[j+1];
                S[j+1] = aux_saldo;

            }
        }
    }
}

void ordenar_saldo(int C[], char T[], float S[]){

    int i, j, aux_cuenta, aux_tipo, aux_saldo;

    for ( i = 0 ; i < N-1 ; i++ ){
        for ( j = 0 ; j < N-i-1 ; j++ ){
            if ( S[j] > S[j+1] ){

                aux_cuenta = C[j];
                C[j] = C[j+1];
                C[j+1] = aux_cuenta;

                aux_tipo = T[j];
                T[j] = T[j+1];
                T[j+1] = aux_tipo;

                aux_saldo = S[j];
                S[j] = S[j+1];
                S[j+1] = aux_saldo;

            }
        }
    }


}

void ordenar_tipo_y_cuenta(int C[], char T[], float S[]){

    int i, j, aux_cuenta, aux_tipo, aux_saldo;

    for ( i = 0 ; i < N-1 ; i++ ){
        for ( j = 0 ; j < N-i-1 ; j++ ){
            if ( T[j] > T[j+1] || T[j] == T[j+1] && C[j] > C[j+1] ){

                aux_cuenta = C[j];
                C[j] = C[j+1];
                C[j+1] = aux_cuenta;

                aux_tipo = T[j];
                T[j] = T[j+1];
                T[j+1] = aux_tipo;

                aux_saldo = S[j];
                S[j] = S[j+1];
                S[j+1] = aux_saldo;

            }
        }
    }
}

