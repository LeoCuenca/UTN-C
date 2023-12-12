#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include <ctype.h>

#define LVE7 3
#define columnas 8
#define filas 8
#define letras 20
#define PALABRAS 5
#define CARACTERES 20

int ejercicio1(), ejercicio2(), ejercicio2(), ejercicio3(), ejercicio4(), ejercicio5(), ejercicio6(), ejercicio7(), ejercicio8(), ejercicio9(), ejercicio10(), tirar_dado (), verificar_igualdad(int[], int[]), verificacion_matriz(int [][columnas]), igualdadFloat (float[], float[], int), igualdadOrdenamiento (float[], float[], int), buscar(char [][CARACTERES], char[], int);

void cargarvec (int, int[]), imprimirvector (int, char, int[]), cargar_vec_random (int, int []), numRepetidosV1 (int[], int), numRepetidosV2 (int[], int), ejercicio11(), ejercicio12(), ejercicio13(), ejercicio14(), ejercicio15(), ejercicio16(), ejercicio17(), ejercicio18(), ejercicio19(), ejercicio20(), ejercicio21(), ejercicio22(), ejercicio23(), ejercicio24(), ejercicio25(), cargar(char [][CARACTERES], int), mostrar(char [][CARACTERES], int), ordenamiento_alfabetico(char [][CARACTERES], int), ordenamiento_alfabetico_inverso (char [][CARACTERES], int), ejercicio26();

float promediovec (int, int []), promedio (int[], int);

int ejs;

void main(){

    system ("cls");
    
    int ejs;

    printf ("\n\tVECTORES");
    printf ("\n\t--------");
    printf ("\n\t1. Ingrese 20 valores enteros y muestrelos en pantalla en una linea, en el orden de ingreso, y en la linea siguiente, en orden inverso al de ingreso.");
    printf ("\n\t2. Ingrese 20 valores enteros y posteriormente un valor entero adicional al que llamaremos DIV. Indique cuantos componentes del vector son divisibles por DIV.");
    printf ("\n\t3. Realizar una funcion que reciba un vector de enteros y su longitud, y retorne el promedio de sus valores.");
    printf ("\n\t4. Crear una funcion que reciba un vector de enteros y su longitud, y cargue sus variables con valores aleatorios comprendidos entre 0 y 99 (Utilizar la funcion rand).");
    printf ("\n\t5. Realizar una funcion que simule arrojar un dado (Retorna valores enteros aleatorios comprendidos entre 1 y 6).");
    printf ("\n\t   Utilizando dicha funcion realice el experimento de arrojar 1000 veces el dado, almacenando las cantidades de aparicion de cada cara en un vector.");
    printf ("\n\t   Imprima la cantidad de veces que aparecio cada cara y su porcentaje con respecto al total.");
    printf ("\n\t6. Realizar una funcion que reciba un vector de enteros y su longitud y retorne 1 si el vector esta ordenado en forma creciente y 0 en caso contrario.");
    printf ("\n\t7. Implementar una funcion que reciba dos vectores de enteros del mismo tamaño y su longitud, y retorne 1 si ambos vectores son iguales (identicos contenidos en identicas posiciones) y 0 en caso contrario.");
    printf ("\n\t8. Tomando como base el ejemplo de vectores apareados con cuentas bancarias, muestre en pantalla todos los datos de cuentas de tipo 'A'.");
    printf ("\n\t   Tomando como base el mismo ejemplo de vectores apareados con cuentas bancarias, muestre en pantalla los datos de la cuenta de mayor saldo.");
    printf ("\n\t   Tomando como ejemplo de vectores apareados con cuentas bancarias, muestre en pantalla todos los datos de las cuentas cuyo saldo supere los $ 500, ordenados en forma decreciente de saldo (Los mas grandes primeros).");
    printf ("\n\t9. Se ingresaran (En un orden cualquiera) los datos de 16 equipos de futbol, compuestos por codigo del equipo (int) y cantidad de puntos (int).");
    printf ("\n\t    Mostrar la tabla de posiciones (ordenada) y a continuacion el fixture de la primera fecha de play offs, es decir, los partidos entre el primero y el ultimo, el segundo y el anteultimo, etc.");
    printf ("\n\t10. Generar y mostrar una matriz de 8x8 enteros cuyos elementos valgan 0, excepto 2 de ellos que valdran 1 y estaran ubicados en posiciones aleatorias de la matriz. Mostrar dicha matriz en pantalla.");
    printf ("\n\t11. Ingrese 10 valores por teclado. Muestrelos en una linea en el orden ingresado, y en otra linea en el orden inverso al ingresado.");
    printf ("\n\t12. Realice una funcion que reciba un vector de int y su largo, y retorne el promedio de sus valores. Construya una funcion main para testear el funcionamiento.");
    printf ("\n\t13. Implemente una funcion que recibe dos vectores de float, y retorna '1' si son iguales o '0' si no lo son. Son iguales si tienen los mismos datos en el mismo orden.");
    printf ("\n\t14. Realice una funcion similar a la del punto anterior, pero que informe que los vectores son iguales aunque los datos no esten en las mismas posiciones.");
    printf ("\n\t    La funcion no puede modificar los vectores originales pero puede trabajarse con vectores auxiliares.");
    printf ("\n\t15. Ingrese los datos de empleados en dos vectores apareados, con legajos (int) y sueldos (float).");
    printf ("\n\t    Muestre en pantalla los legajos de los empleados que cobren mas de 25000 pesos, en orden ascendente.");
    printf ("\n\t16. Implemente una funcion que reciba un vector de enteros. La funcion debe imprimir en pantalla los numeros que aparecen repetidos en el vector.");
    printf ("\n\t17. Un usuario ingresara dni (int) y edades (int) de 10 personas, que seran almacenados en vectores apareados.");
    printf ("\n\t    Luego se le solicitara al usuario un dni, y el programa lo buscara en el vector previamente construido. Informa la edad de la persona si es encontrada, o muestra error caso contrario.");
    printf ("\n");
    printf ("\n\tSTRINGS");
    printf ("\n\t-------");
    printf ("\n\t18. El usuario ingresara su nombre y el programa lo mostrara en orden inverso.");
    printf ("\n\t19. El usuario ingresara una palabra y el programa la mostrara desplazando cada letra +3. Ej. ABC = DEF.");
    printf ("\n\t20. El usuario ingresa 5 palabras. Mostrarlas en orden alfabetico.");
    printf ("\n\t21. Se ingresa el nombre de N personas y sus edades. Mostrar el nombre de la persona mas joven, suponiendo que las edades no se repiten.");
    printf ("\n\t22. Se ingresan 10 palabras de hasta 20 letras. Determinar cual letra es la que más se repite.");
    printf ("\n\t23. El usuario ingresa un numero de hasta 10 dígitos. Determinar si es o no capicua.");
    printf ("\n\t24. Ingresar 20 palabras para verificar cual es la que mas caracteres tiene.");
    printf ("\n\t25. Ingrese 5 palabras. El programa devolvera la primer palabra segun el alfabeto.");
    printf ("\n\t26. Ejecutar para saber que hace.");

    printf("\n\n\t\tIngrese el numero de problema a ejecutar: ");
    scanf("%d", &ejs);

    switch (ejs){
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
        case 6:
            ejercicio6();
            break;
        case 7:
            ejercicio7();
            break;
        case 8:
            ejercicio8();
            break;
        case 9:
            ejercicio9();
            break;
        case 10:
            ejercicio10();
            break;
        case 11:
            ejercicio11();
            break;
        case 12:
            ejercicio12();
            break;
        case 13:
            ejercicio13();
            break;
        case 14:
            ejercicio14();
            break;
        case 15:
            ejercicio15();
            break;
        case 16:
            ejercicio16();
            break;
        case 17:
            ejercicio17();
            break;
        case 18:
            ejercicio18();
            break;
        case 19:
            ejercicio19();
            break;
        case 20:
            ejercicio20();
            break;
        case 21:
            ejercicio21();
            break;
        case 22:
            ejercicio22();
            break;
        case 23:
            ejercicio23();
            break;
        case 24:
            ejercicio24();
            break;
        case 25:
            ejercicio25();
            break;
        case 26:
            ejercicio26();
            break;
    }
}

int ejercicio1(){

    #define A 10
    int VEC[A], i;

    cargarvec (A, VEC);
    printf ("\n\t\tLinea ordenada directamente: ");
    imprimirvector (A, 68, VEC); //CODIGO ASCII DE LA LETRA D

    printf ("\n\t\tLinea ordenada inversamente: ");
    imprimirvector (A, 73, VEC); //CODIGO ASCII DE LA LETRA I

}

int ejercicio2(){

    #define B 5
    int VEC[B], DIV, contdiv = 0, i;

    cargarvec (B, VEC);
    printf("\n\t\tIngrese el divisor: ");
    scanf ("%d", &DIV);

    for ( i = 0 ; i < B ; i++){
        if ( VEC[i] % DIV == 0 ){
            contdiv += 1;
        }
    }
    printf ("\n\t\t\tDe los %d numeros ingresados, hay %d numero/s divisibles por %d", B, contdiv, DIV);

}

int ejercicio3(){

    #define C 5
    int VEC[C];
    cargarvec(C, VEC);
    printf("\n\t\tPROMEDIO = %.2f", promediovec(C, VEC));

}

int ejercicio4(){

    #define D 5
    int VEC[D];
    cargar_vec_random (D, VEC);
    imprimirvector (D, 68, VEC); //ASCII LETRA D

}

int ejercicio5(){

#define F 1000
int i, VEC[F], j, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0;
float prom1, prom2, prom3, prom4, prom5, prom6;

srand(time(0));

for ( i = 0 ; i < F ; i++){
    VEC[i] = tirar_dado();
    if ( VEC[i] == 1 ){
        cont1 += 1;
    }
    else{
        if ( VEC[i] == 2 ){
            cont2 += 1;
        }
        else{
            if ( VEC[i] == 3 ){
                cont3 += 1;
            }
            else{
                if ( VEC[i] == 4 ){
                    cont4 += 1;
                }
                else{
                    if ( VEC[i] == 5 ){
                        cont5 += 1;
                    }
                    else{
                        if ( VEC[i] == 6 ){
                            cont6 += 1;
                        }
                    }
                }
            }
        }
    }
}

prom1 = ((float) cont1 / F) * 100;
prom2 = ((float) cont2 / F) * 100;
prom3 = ((float) cont3 / F) * 100;
prom4 = ((float) cont4 / F) * 100;
prom5 = ((float) cont5 / F) * 100;
prom6 = ((float) cont6 / F) * 100;

printf ( "\n\nEl 1 aparecio %d veces || Porcentaje de ocurrencia: %.2f %% \n\nEl 2 aparecio %d veces || Porcentaje de ocurrencia: %.2f %% \n\nEl 3 aparecio %d veces || Porcentaje de ocurrencia: %.2f %% \n\nEl 4 aparecio %d veces || Porcentaje de ocurrencia: %.2f %% \n\nEl 5 aparecio %d veces || Porcentaje de ocurrencia: %.2f %% \n\nEl 6 aparecio %d veces || Porcentaje de ocurrencia: %.2f %%", cont1, prom1, cont2, prom2, cont3, prom3, cont4, prom4, cont5, prom5, cont6, prom6 );

}

int ejercicio6(){

    int VEC[6] = {1 , 2 , 3 , 4, 5, 3}, i, min = VEC[0], cont = 0;

    for (i = 0 ; i < 6 ; i++){
        //printf ("\nVEC[%d] = %d", i, VEC[i]);
        if (VEC[i] >= min){
            min = VEC[i];
            cont += 1;
        }
    }

    if (cont != 6){
        printf ("\nLa secuencia no es creciente");
    }
    else{
        printf ("\nLa secuencia es creciente");
    }

}

int ejercicio7(){

    int VEC1[] = {1,2,3}, VEC2[] = {1,2,3};

    verificar_igualdad (VEC1, VEC2);

}

int ejercicio8(){

    #define L 10

    int CUENTA[L] = {458, 321, 744, 228, 349, 201, 198, 705, 789, 227};
    char TIPO[L] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'C', 'B'};
    float SALDO[L] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66}, mayor_saldo = SALDO[0], aux_saldo, aux_cuenta, aux_tipo;
    int i, j, pos_mayor_saldo = 0;

    printf ("\nTodas las cuentas de tipo 'A'\n"); 

    for ( i = 0 ; i < L-1 ; i++ ){

        if ( TIPO[i] == 'A' ){
            printf ("\n\tCUENTA: %d | TIPO: %c | SALDO: %.2f", CUENTA[i], TIPO[i], SALDO[i]);
        }

        if ( SALDO[i] > mayor_saldo ){
            mayor_saldo =SALDO[i];
            pos_mayor_saldo = i;
        }

    }

    printf ("\n\nCuenta con el mayor saldo: \n");
    printf ("\n\tCUENTA: %d | TIPO: %c | SALDO: %.2f", CUENTA[pos_mayor_saldo], TIPO[pos_mayor_saldo], SALDO[pos_mayor_saldo]);
    printf("\n\n");

    for ( i = 0 ; i < L-1 ; i++ ){
        for ( j = 0 ; j < L-i-1 ; j++ ){
            if ( SALDO[j] < SALDO[j+1]){

                aux_cuenta = CUENTA[j];
                CUENTA[j] = CUENTA[j+1];
                CUENTA[j+1] = aux_cuenta;

                aux_tipo = TIPO[j];
                TIPO[j] = TIPO[j+1];
                TIPO[j+1] = aux_tipo;

                aux_saldo = SALDO[j];
                SALDO[j] = SALDO[j+1];
                SALDO[j+1] = aux_saldo;

            }
        }
    }

    for ( i = 0 ; i < L-1 ; i++ ){
        if ( SALDO[i] > 500 ){
            printf ("\n\tCUENTA: %d | TIPO: %c | SALDO: %.2f", CUENTA[i], TIPO[i], SALDO[i]);
        }
    }
    
    printf("\n\n");

}

int ejercicio9(){

    #define DS 16

    int CODIGO[DS] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160};
    int PUNTOS[DS] = {5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80};
    int i, j, aux_pts, aux_code;

    for ( i = 0 ; i < DS-1 ; i++ ){
        for ( j = 0 ; j < DS-i-1 ; j++ ){
            if ( PUNTOS[j] < PUNTOS[j+1] ){

                aux_code = CODIGO[j];
                CODIGO[j] = CODIGO[j+1];
                CODIGO[j+1] = aux_code;

                aux_pts = PUNTOS[j];
                PUNTOS[j] = PUNTOS[j+1];
                PUNTOS[j+1] = aux_pts; 

            }
        }
    }

    printf("\n\nTABLA DE POSICIONES\n");

    for ( i = 0 ; i < DS ; i++ ){
        printf ("\nCODIGO: %d   |   PUNTOS: %d", CODIGO[i], PUNTOS[i]);
    }

    printf("\n\nFIXTURE\n");

    for ( i = 0 ; i < 8 ; i++ ){
        printf ("\n%d VS %d", CODIGO[i], CODIGO[DS-1-i]);

    }

}

int ejercicio10(){

    srand(time(NULL));

    int matriz[filas][columnas], i, j;

    for (i = 0 ; i < filas ; i++){
        for ( j = 0 ; j < columnas ; j++ ){
            matriz[i][j] = 0;
        }
    }

    for (i = 0 ; i < 2 ; i++){
        matriz[rand()%8][rand()%8] = 1;
    }

    for (i = 0 ; i < filas ; i++){
        printf ("\n\n");
        for ( j = 0 ; j < columnas ; j++ ){
            printf ("%5d", matriz[i][j]);
        }
    }

    printf ("%d", verificacion_matriz(matriz));
}

int verificacion_matriz(int M[][columnas]){

    int i, j, fila1, fila2, columna1, columna2, cont = 1;

    for ( i = 0 ; i < filas ; i++ ){
        for ( j = 0 ; j < columnas ; j++ ){
            if ( M[i][j] == 1 && cont == 1 ){
                cont += 1;
                fila1 = i;
                columna1 = j;
                printf ("\n\nUBICACION DE 1 = [%d][%d]", i,j);
            }
            else{
                if ( M[i][j] == 1 && cont == 2 ){
                    fila2 = i;
                    columna2 = j;
                    printf ("\n\nUBICACION DE 1 = [%d][%d]", i,j);
                }
            }
        }
    }

    if ( fila1 == fila2 ){
        printf ("\n\n\tLos elementos distintos de cero comparten fila.");
    }
    else{
        if ( columna1 == columna2 ){
            printf ("\n\n\tLos elementos distintos de cero comparten columna.");
        }
        else{
            if ( fila1 == fila2-1 && columna1 == columna2-1 || fila1 == fila2-1 && columna1 ==columna2+1 || fila1 == fila2+1 && columna1 == columna2-1 || fila1 == fila2+1 && columna1 == columna2+1 ){
                printf ("\n\n\tLos elementos distintos de cero comparten alguna diagonal.");
            }
        }
    }
}



int verificar_igualdad(int VECTOR1[], int VECTOR2[]){
    
    int i, coincidencias = 0;

    for ( i = 0 ; i < LVE7 ; i++){
        if ( VECTOR1[i] == VECTOR2[i] ){
            coincidencias += 1;
        }
    }

    if ( coincidencias == LVE7 ){
        printf ( "\n\nLos vectores son iguales" );
    }
    
}


void cargarvec (int tam, int VECTOR[]){

    int i, numero;
    for (i = 0 ; i < tam ; i++){
        printf ("\n\tIngrese el %d%c numero: ", i + 1, 167);
        scanf ("%d", &numero);
        VECTOR[i] = numero;
    }

}

void imprimirvector (int tam, char orden, int VECTOR[]){

    int i;
    if ( orden == 73 ){
        for ( i = tam - 1 ; i >= 0 ; i-- ){
            printf ("%5d", VECTOR[i]);
        }
    }
    else{
        for ( i = 0 ; i < tam ; i++ ){
            printf ("%5d", VECTOR[i]);
        }
    }

}

float promediovec (int tam, int VECTOR[]){

    int i, sumatoria = 0;
    float prom = 0;

    for ( i = 0 ; i < tam ; i++){
        sumatoria += VECTOR[i];
    }
    return prom = (float) sumatoria / tam;

}

void cargar_vec_random (int tam, int VECTOR[]){

    int i;
    srand(time(NULL));
    for ( i = 0 ; i < tam ; i++ ){
        VECTOR[i] = rand() % 100;
    }

    imprimirvector(tam, 68, VECTOR);

}

int tirar_dado (){
    return rand() % 6 + 1;
}

void ejercicio11 () {

    int N = 10;
    int i, vec[10];

    printf ("\n");

    for ( i = 0 ; i < N ; i++ ){
        printf ("\t\tIngrese el %d%c valor: ", i + 1 , 167);
        scanf ("%d", &vec[i]);
    }

    printf ("\n\t\t\tImpresion: ");
    for ( i = 0 ; i < N ; i++ ){
        printf ("%d ", vec[i]);
    }

    printf ("\n\t\t\tImpresion Inversa: ");
    for ( i = N-1 ; i >= 0 ; i-- ){
        printf ("%d ", vec[i]);
    }

    printf ("\n\n");

}

void ejercicio12 () {

    int N = 5;
    int i;
    int vector[N];

    printf ("\n");

    for ( i = 0 ; i < N ; i++ ){
        printf ("\t\tIngrese el %d%c numero: ", i+1, 167);
        scanf ("%d", &vector[i]);
    }

    printf ("\n\t\t\tEl promedio de los valores ingresados es: %.2f", promedio (vector, N));
    printf ("\n\n");
    
}

float promedio (int vec[], int vecTam) {

    int i, suma = 0;
    float resultado;

    for ( i = 0 ; i < vecTam ; i++ ) {
        suma += vec[i];
    }

    return resultado = (float) suma / vecTam;

}

void ejercicio13 () {

    int N = 5;
    int i;
    float vec1[N], vec2[N];

    printf ("\n");

    for ( i = 0 ; i < N ; i++ ) {
        printf ("\t\tIngrese el %d%c valor del 1%c vector: ", i+1, 167, 167);
        scanf ("%f", &vec1[i]);
    }

    printf ("\n");

    for ( i = 0 ; i < N ; i++ ) {
        printf ("\t\tIngrese el %d%c valor del 2%c vector: ", i+1, 167, 167);
        scanf ("%f", &vec2[i]);
    }

    if ( igualdadFloat (vec1, vec2, N) ) {
        printf ("\n\t\t\tLos vectores son iguales");
    }
    else {
        printf ("\n\t\t\tLos vectores no son iguales");
    }

    printf ("\n\n");

}

int igualdadFloat (float vecFloat1[], float vecFloat2[], int vecTam) {

    int iguales = 0;
    int i;

    for ( i = 0 ; i < vecTam ; i++ ) {
        if ( vecFloat1[i] != vecFloat2[i] ) {
            iguales = 1;
        }
    }

    if ( iguales == 1 ) {
        return 0;
    }
    else {
        return 1;
    }

}

void ejercicio14 () {

    int i, N = 5;
    float vec1[N], vec2[N];

    printf ("\n");

    for ( i = 0 ; i < N ; i++ ) {
        printf ("\t\tIngrese el %d%c valor del 1%c vector: ", i+1, 167, 167);
        scanf ("%f", &vec1[i]);
    }

    printf ("\n");

    for ( i = 0 ; i < N ; i++ ) {
        printf ("\t\tIngrese el %d%c valor del 2%c vector: ", i+1, 167, 167);
        scanf ("%f", &vec2[i]);
    }

    if ( igualdadOrdenamiento (vec1, vec2, N) ) {
        printf ("\n\t\t\tLos vectores no son iguales.");
    }
    else {
        printf ("\n\t\t\tLos vectores son iguales.");
    }

    printf ("\n\n");

}

int igualdadOrdenamiento (float vecFloat1[], float vecFloat2[], int vecTam) {

    int i, j, flag = 0;
    float AUX;

    //Este problema lo pense bastante, como a mi no me interesa en que orden esten, siempre y cuando que los datos en uno, sean los mismos que en el otro, lo q e voy a hacer es ordenarlos, para luego si compararlos caracter a caracter, de esta forma, solamente siendo iguales estos 2 vectores ordenados, se comprobara la igualdad.

    //Esta funcion recibe como argumento a 2 vectores floats, no modifica los originales (vec1 y vec2), sino que simplemente los recibe, los trabaja y devuelve un 1 si son iguales o 0 si no lo son. Tanto vec1 como vec2 nunca fueron modificados.

    for ( i = 0 ; i < vecTam-1 ; i++ ) {
        for ( j = 0 ; j < vecTam-i-1 ; j++ ) {
            if ( vecFloat1[j] > vecFloat1[j+1] ) {
                AUX = vecFloat1[j];
                vecFloat1[j] = vecFloat1[j+1];
                vecFloat1[j+1] = AUX;
            }

            if ( vecFloat2[j] > vecFloat2[j+1] ) {
                AUX = vecFloat2[j];
                vecFloat2[j] = vecFloat2[j+1];
                vecFloat2[j+1] = AUX;
            }
        }
    }

    for ( i = 0 ; i < vecTam ; i++ ) {
        if ( vecFloat1[i] != vecFloat2[i] ) {
            flag = 1;
        }
    }

    return flag;

}

void ejercicio15 () {

    int N = 15;
    int i, j, legajo[N];
    int AUX_LEGAJO;
    float sueldo[N];
    float AUX_SUELDO;
    for ( i = 0 ; i < N ; i++ ) {
        legajo[i] = 40000 + rand() % 50000;
        sueldo[i] = (float) 15000 + rand() % 20000;
    }

    for ( i = 0 ; i < N-1 ; i++ ) {
        for ( j = 0 ; j < N-1-i ; j++ ) {
            if ( sueldo[j] > sueldo[j+1] ) {
                AUX_LEGAJO = legajo[j];
                legajo[j] = legajo[j+1];
                legajo[j+1] = AUX_LEGAJO;

                AUX_SUELDO = sueldo[j];
                sueldo[j] = sueldo[j+1];
                sueldo[j+1] = AUX_SUELDO;
            }
        }
    }

    printf ("\n\t\t%s\t%s\n", "Numero de legajo", "Sueldo");

    for ( i = 0 ; i < N ; i++ ) {
        if ( sueldo[i] > (float) 25000 ) {
            printf ("\n\t\t%10d%20.f", legajo[i], sueldo[i]);
        }
    }

    printf("\n\n");

}

void ejercicio16 () {

    int N = 25;
    int i, vecEntero[N];

    srand(time(NULL));

    for ( i = 0 ; i < N ; i++ ) {
        vecEntero[i] = rand() % 100;
    }

    numRepetidosV2 (vecEntero, N);

    printf ("\n\n");

}

void numRepetidosV1 (int vecEnt[], int vecTam) {

    int i, j;

    printf ("\n\n\t\tIMPRESION DE TODOS LOS DATOS\n");
    for ( i = 0 ; i < vecTam ; i++ ) {
        printf (" %d ", vecEnt[i]);
    }

    printf ("\n\n\t\tIMPRESION DE LOS NUMEROS QUE SE REPITEN\n");
    for ( i = 0 ; i < vecTam ; i++ ) {
        for ( j = 0 ; j < vecTam ; j++) {
            if ( i != j && vecEnt[i] == vecEnt[j] ) {
                printf (" %d ", vecEnt[i]);
            }
        }
    }

}

void numRepetidosV2 (int vecEnt[], int vecTam) {

    int i, j, AUX;

    for ( i = 0 ; i < vecTam-1 ; i++ ) {
        for ( j = 0 ; j < vecTam-i-1 ; j++ ) {
            if ( vecEnt[j] > vecEnt[j+1] ) {
                AUX = vecEnt[j];
                vecEnt[j] = vecEnt[j+1];
                vecEnt[j+1] = AUX;
            }
        }
    }

    printf ("\n\n\t\tIMPRESION DE TODOS LOS DATOS ORDENADOS :");
    for ( i = 0 ; i < vecTam ; i++ ) {
        printf (" %d |", vecEnt[i]);
    }

    printf ("\n\n\t\tIMPRESION DE LOS NUMEROS QUE SE REPITEN :");
    for ( i = 0 ; i < vecTam ; i++ ) {
        if ( vecEnt[i] == vecEnt[i+1] ) {
            printf (" %d ", vecEnt[i]);
        }
    }

}

void ejercicio17 () {

    int N = 2;
    int vecDNI[N], vecEdad[N];
    int i, busqueda, encontrado = 0;

    for ( i = 0 ; i < N ; i++ ) {

        printf ("\n\t\tIngrese el DNI de la %d%c persona: ",i+1, 167);
        scanf ("%d", &vecDNI[i]);
        fflush(stdin);

        printf ("\t\tIngrese la edad de la %d%c persona: ", i+1, 167);
        scanf ("%d", &vecEdad[i]);
        fflush(stdin);

    }

    printf ("\n\t\t\t Ingrese el DNI de la persona a buscar: ");
    scanf ("%d", &busqueda);

    for ( i = 0 ; i < N ; i++ ) {
        if ( busqueda == vecDNI[i] ) {
            printf ("\n\t\t\tSe encontro a la persona con el DNI %d y la misma tiene %d a%cos.", vecDNI[i], vecEdad[i], 164);
            encontrado = 1;
        }
    }

    if ( encontrado == 0 ) {
        printf ("\n\t\t\tNo se ha encontrado a la persona.", vecDNI[i], vecEdad[i], 164);
    }

    printf ("\n\n");

}

void ejercicio18 () {

    char nombre[20];
    int i;

    printf ("\n\t\tIngrese su nombre: ");
    gets (nombre);

    printf("\n\t\t\tNombre ingresado: ");

    for ( i = 0 ; i < strlen(nombre) ; i++ ) {
        printf ("%c ", nombre[i]);
    }

    printf("\n\t\t\tNombre al inverso: ");

    for ( i = strlen(nombre) ; i >= 0 ; i-- ) {
        printf ("%c ", nombre[i]);
    }

    printf("\n\n");

}

void ejercicio19 () {

    char palabra[20];
    int i;

    printf ("\n\t\tIngrese una palabra: ");
    gets (palabra);


    for ( i = 0 ; i < strlen(palabra) ; i++ ) {
        if ( toupper(palabra[i]) == 88 || toupper(palabra[i]) == 89 || toupper(palabra[i]) == 90 ) {
            palabra[i] = palabra[i] - 23;
        }
        else{
            palabra[i] = palabra[i] + 3;
        }
    }

    printf ("\n\n\t\tLa nueva palabra es: %s", palabra);
    
}

void ejercicio20 () {

    int i, j;
    char palabra[5][20], aux_palabra[20];

    for ( i = 0 ; i < 5 ; i++ ) {
        printf ("\n\t\tIngrese la %d%c palabra: ", i+1, 167);
        gets (palabra[i]);
    }

    for ( i = 0 ; i < 5-1 ; i++ ) {
        for ( j = 0 ; j < 5-i-1 ; j++) {
            if ( strcmpi (palabra[j], palabra[j+1] ) > 0 ) {
                strcpy (aux_palabra, palabra[j]);
                strcpy (palabra[j], palabra[j+1]);
                strcpy (palabra[j+1], aux_palabra);
            }
        }
    }

    printf ("\n\t\tLISTADO DE PALABRAS ORDENADAS\n");
    for ( i = 0 ; i < 5 ; i++ ) {
        printf ("\n\t\t\t%s", palabra[i]);
    }

    printf ("\n\n");

}

void ejercicio21 () {

    int i;
    int N = 10;
    char nombre[N][20];
    int edad[N];
    char nombreMayor[20];
    int edadMayor = 0;

    for ( i = 0 ; i < N ; i++ ) {

        printf ("\n\t\tIngrese el nombre de la %d%c persona: ", i+1, 167);
        gets (nombre[i]);

        printf ("\t\tIngrese la edad: ");
        scanf ("%d", &edad[i]);
        fflush(stdin);

    }

    for ( i = 0 ; i < N-1 ; i++ ) {
        if ( edad[i] > edadMayor ) {
            strcpy (nombreMayor, nombre[i]);
            edadMayor = edad[i];
        }
    }

    printf ("\n\n\t\t\t\tNOMBRE MAYOR : %s", nombreMayor);

}

void ejercicio22 () {

    int i, j, k;
    char palabra[2][20];
    char todasJuntas[100];
    int inicio = 0;
    
    for ( i = 0 ; i < 2 ; i++ ) { //Recorre una por una las palabras

        printf ("\n\t\tIngrese la palabra: ");
        gets (palabra[i]);

        for ( j = inicio ; j <= inicio + strlen (palabra[i]) ; j++) { //Recorre una por una las letras de cada palabra
            todasJuntas[j] = palabra[i][j];
            inicio = strlen (palabra[i]);
        }

        printf ("\n\t\t\tINICIO : %d", inicio);

    }

    printf ("\n\n\t\t\tTODAS JUNTAS = %s", todasJuntas);

}

void ejercicio23 () {

    int i;
    int numero, digito;
    int descNumero[10];

    printf ("\n\t\tIngrese un numero de 10 digitos: ");
    scanf ("%d", &numero);

    for ( i = 0 ; i < 10 ; i++ ) {
        descNumero[i] = numero % 10;
        printf ("\n\t\t\tNUMERO : %d", descNumero[i]);
    }
    
}

void ejercicio24(){
    int i, max_char = 0;
    char palabra[20], mayor_palabra[20];

    for ( i = 0 ; i < 5 ; i++ ){

        printf ("\n\nIngrese la %d%c palabra: ", i + 1, 167);
        gets(palabra);

        if ( strlen(palabra) > max_char ){
            strcpy (mayor_palabra, palabra);
            max_char = strlen(palabra);
        }        
    
    }

    printf ("\n\tLa palabra mas larga es %s y tiene %d caracteres", mayor_palabra, max_char);
}

void ejercicio25(){

    int i;
    char palabra[letras], primer_palabra[letras];

    for ( i = 0 ; i < 5 ; i++ ){ 

        printf ("\n\nIngrese la %d%c palabra: ", i + 1, 167);
        gets(palabra);

        if (strcmpi(palabra, primer_palabra) < 0){
            strcpy(primer_palabra, palabra);
        }
    
    }

    printf ("\n\tLa primer palabra en orden alfabetico es %s", primer_palabra);

}

void ejercicio26(){

    char nombres[PALABRAS][CARACTERES], busqueda[20];

    printf ("\n\nImpresion de los registros antes de que sean cargados (Se muestra la basura que hay en memoria\n");
    mostrar (nombres, PALABRAS); // CON ESTO PODEMOS COMPROBAR QUE ANTES DE LA CARGA, EN MEMORIA HAY BASURA
    cargar (nombres, PALABRAS);

    printf ("\n\nImpresion de los registros sin ordenar\n");
    mostrar (nombres, PALABRAS);

    printf ("\n\nIngrese un nombre a buscar: ");
    gets (busqueda);

    if ( buscar(nombres, busqueda, PALABRAS) != 0 ){
        printf ("\n\tLa palabra %s se ha encontrado en la posicion %d", busqueda, buscar(nombres, busqueda, PALABRAS));
    }
    else{
        printf ("\n\nEl nombre no se ha encontrado");
    }
    
    printf ("\n\nImpresion de los registros ordenados alfabeticamente\n");
    ordenamiento_alfabetico (nombres, PALABRAS);
    mostrar (nombres, PALABRAS);

    printf ("\n\nImpresion de los registros ordenados a la inversa\n");
    ordenamiento_alfabetico_inverso (nombres, PALABRAS);
    mostrar (nombres, PALABRAS);

    printf ("\n\n");

}

void cargar(char VS[][CARACTERES], int PAL){

    int i;
    char VECSTR[][CARACTERES] = {"Celeste", "Leonel", "Alberto", "Claudia", "Carla"};

    for ( i = 0 ; i < PAL ; i++ ){
        strcpy (VS[i], VECSTR[i]);
    }

}

void mostrar(char VS[][CARACTERES], int PAL){

    int i;

    for ( i = 0 ; i < PAL ; i++ ){
        printf ("\n\t%s", VS[i]);
    }

}

void ordenamiento_alfabetico(char VS [][CARACTERES], int PAL){

    int i, j;
    char AUX[CARACTERES];

    for ( i = 0 ; i < PAL - 1 ; i++ ){
        for ( j = 0 ; j < PAL - i - 1 ; j++ ){
            if (stricmp(VS[j], VS[j+1]) > 0){
                strcpy (AUX, VS[j]);
                strcpy (VS[j], VS[j+1]);
                strcpy (VS[j+1], AUX);
            }
        }
    }
}

void ordenamiento_alfabetico_inverso (char VS[][CARACTERES], int PAL){

    int i, j;
    char AUX[CARACTERES];
    
    for ( i = 0 ; i < PAL - 1 ; i++ ){
        for ( j = 0 ; j < PAL - 1 - i ; j++){
            if (stricmp(VS[j], VS[j+1]) < 0){
                strcpy (AUX, VS[j]);
                strcpy (VS[j], VS[j+1]);
                strcpy (VS[j+1], AUX);
            }
        }
    }

}

int buscar(char VS[][CARACTERES], char busqueda[20], int PAL){

    int i;

    for ( i = 0 ; i < PAL ; i++ ){
        if ( stricmp(VS[i],busqueda) == 0 ){
            return i + 1;
        }
    }
}
