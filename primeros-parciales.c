#include<stdio.h>
#include<math.h>

void goldbach (int), problema_1(), problema_2(), problema_3(), problema_4(), problema_5(), problema_6(), problema_7(), problema_8(), problema_9(), problema_10();
int primoParcial (int), paquete_apto(int, int, int, float), zona(int X, int Y), perfecto(int), potencia(int), euclides (int);
float pitagoras(int, int), costo_envio(int, int, int, float);

int main(){

    int ejs;

    system ("cls");

    printf ("\n\tPARCIALES");
    printf ("\n");
    printf ("\n\t1. BUSCAR ENUNCIADO");
    printf ("\n\t2. BUSCAR ENUNCIADO");
    printf ("\n\t3. BUSCAR ENUNCIADO");
    printf ("\n\t4. BUSCAR ENUNCIADO");
    printf ("\n\t5. BUSCAR ENUNCIADO");
    printf ("\n\t6. BUSCAR ENUNCIADO");
    printf ("\n\t7. BUSCAR ENUNCIADO");

    printf ("\n");

    printf("\n\nIngrese el numero de problema a ejecutar: ");
    scanf("%d", &ejs);

    switch (ejs){
    
    case 1:
        problema_1();
        break;

    case 2:
        problema_2();
        break;

    case 3:
        problema_3();
        break;

    case 4:
        problema_4();
        break;

    case 5:
        problema_5();
        break;

    case 6:
        problema_6();
        break;

    case 7:
        problema_7();
        break;

    case 8:
        problema_8();
        break;

    case 9:
        problema_9();
        break;

    }

}

void problema_1(){
    int i;

    for (i = 100 ; i <= 400 ; i++){
        goldbach(i);
    }
}

void problema_2(){

    float total_factura, descuento_deseado, descuento, precio_final;

    printf ("\nIngrese el total de una factura: ");
    scanf ("%f", &total_factura);

    printf ("\nIngrese en porcentaje el descuento a realizar: ");
    scanf ("%f", &descuento_deseado);

    descuento = (descuento_deseado * total_factura) / 100;
    precio_final = total_factura - descuento;

    printf ("\nTotal a pagar: %.2f", precio_final);

}

void problema_3(){

    int year;

    printf ("\nIngrese un a%co: ", 164);
    scanf ("%d", &year);

    if (year % 4 == 0){
        if (year % 100 == 0 && year % 400 == 0){
            printf ("\nEl a%co %d es bisiesto.", 164, year);
        }
    else{
            printf ("\nEl a%co %d no es bisiesto.", 164, year);
        }
    }
}

void problema_4(){

    float notas, sumatoria = 0, promedio = 0, cont_bucle = 0;
   
    do {
        printf ("Ingrese las notas (Termina el ingreso con un negativo): ");
        scanf ("%f", &notas);

        fflush(stdin);

        if (notas >= 0){
           sumatoria += notas;
        }

    cont_bucle += 1;

    } while (notas >= 0);

    promedio = sumatoria / (cont_bucle - 1);

    if (promedio > 4){
        printf ("El alumno aprobo la materia con %.2f", promedio);
    }
    else{
        printf ("El alumno desaprobo la materia con %.2f", promedio);
    }

}

void problema_5(){

    float precio, monto_cliente, vuelto_decimal, decremento = 0, cont_10 = 0;
    int vuelto_entero, cont_50 = 0, cont_25 = 0;

    printf ("\nIngrese el monto a cobrar: ");
    scanf ("%f", &precio);
    
    printf ("\nIngrese el pago: ");
    scanf ("%f", &monto_cliente);

    vuelto_entero = monto_cliente - precio;
    vuelto_decimal = (monto_cliente - precio) - vuelto_entero;

    printf ("\n\tSe devuelven %d monedas de $ 1", vuelto_entero);

    if (vuelto_decimal >= 0.50){
        cont_50 = 1;
        decremento = vuelto_decimal - 0.50;
        printf("\n\tSe devuelven %d monedas de 50 centavos", cont_50);
        if (decremento == 0.25){
            cont_25 = 1;
            decremento = decremento - 0.25;
            printf("\n\tSe devuelven %d monedas de 25 centavos.", cont_25);
        }
        else{
            if (cont_50 != 1){
                cont_10 = decremento * 10.0;
                printf("\n\tSe devuelven %.0f monedas de 10 centavos.",  round(cont_10));
            }
        }
    }
    else{
        cont_10 = vuelto_decimal * 10.0;
        printf("\n\tSe devuelven %.0f monedas de 10 centavos.",  round(cont_10));
    }
}

void problema_6(){

    int numero, divisores = 0, i;

    printf ("\nIngrese un numero entero para determinar si es primo: ");
    scanf ("%d", &numero);

    if (numero == 1){
        printf ("El numero 1 no es primo");
    }
    else{
        for (i = numero ; i >= 1 ; i--){
            if (numero % i == 0){
                divisores += 1;
            }
        }
    }

    if (divisores > 2){
        printf ("\nEl numero %d no es primo", numero);
    }
    else{
        printf ("\nEl numero %d es primo", numero);
    }

}

void problema_7(){

    int coordenada_x, coordenada_y, aux_x = 0, aux_y = 0, diferencia_x = 0, diferencia_y = 0, contador = 0;
    float distancia = 0;

    do{

        printf ("\ningrese: ");
        scanf ("%d,%d", &coordenada_x, &coordenada_y);

        if (coordenada_x != -1){

            contador += 1;

            //printf("\nCOORDENADA X = %d // COORDENADA Y = %d // AUX_X = %d // AUX_Y = %d", coordenada_x, coordenada_y, aux_x, aux_y);

            if (contador > 1){
                diferencia_x = coordenada_x - aux_x;
                if (diferencia_x < 0){
                        diferencia_x = diferencia_x * -1;
                }

                diferencia_y = coordenada_y - aux_y;
                if (diferencia_y < 0){
                    diferencia_y = diferencia_y * -1;
                }
            }

            aux_x = coordenada_x;
            aux_y = coordenada_y;

            //printf("\nDIFERENCIA X = %d || DIFERENCIA Y = %d", diferencia_x, diferencia_y);

            distancia = distancia + (float)sqrt(pow (diferencia_x,2) + pow (diferencia_y,2));

            printf ("La distancia es de: %.2f", distancia);
            
        }

    } while (coordenada_x != -1);
   
}

void problema_8(){

    int ancho, alto, profundidad;
    float peso;

    printf ("\n\nIngrese el ancho del paquete: ");
    scanf ("%d", &ancho);
    fflush (stdin);

    printf ("\n\nIngrese el alto del paquete: ");
    scanf ("%d", &alto);
    fflush (stdin);

    printf ("\n\nIngrese el profundidad del paquete: ");
    scanf ("%d", &profundidad);
    fflush (stdin);

    printf ("\n\nIngrese el peso del paquete: ");
    scanf ("%f", &peso);
    fflush (stdin);

    if (paquete_apto(ancho, alto, profundidad, peso) == 1){
        printf ("\n\n\tEl paquete es apto. ");
        printf ("El costo de envio es de $ %.2f", costo_envio(ancho, alto, profundidad, peso));
    }
    else{
        printf ("\n\n\tEl paquete NO es apto. ");
    }

}

void problema_9(){

    int codigo = 0, coordenada_x, coordenada_y, penalizaciones, puntuacion = 0, codigo_ganador = 0, puntuacion_ganador = 0;

    while (codigo != -1){
        
        printf ("\nIngrese el codigo de competidor: ");
        scanf ("%d", &codigo);

        if(codigo != -1){
            printf ("\nIngrese las coordenadas: ");
            scanf ("%d,%d", &coordenada_x, &coordenada_y);

            printf ("\nIngrese la cantidad de penalizaciones: ");
            scanf ("%d", &penalizaciones);

            if (zona(coordenada_x, coordenada_y) == 0){
                puntuacion = 50;
            }
            else{
                if (zona(coordenada_x, coordenada_y) == 1){
                    puntuacion = 40;
                }
                else{
                    if (zona(coordenada_x, coordenada_y) == 2){
                        puntuacion = 30;
                    }
                    else{
                        puntuacion = 0;
                    }
                }
            }

            if (penalizaciones == 1){
                puntuacion = puntuacion * 0.75;
            }
            else{
                if (penalizaciones == 2){
                    puntuacion = puntuacion * 0.50;
                }
            }

        }

        if (puntuacion > puntuacion_ganador){
            puntuacion_ganador = puntuacion;
            codigo_ganador = codigo;
        }
    }

    printf ("\nEl ganador es el participante con el codigo %d con %d puntos", codigo_ganador, puntuacion_ganador);

}

void problema_10(){

    int num_primo, num_perfecto, num_potencia, num_euclides, i;

    printf ("\nPrimo?: ", num_primo);
    scanf ("%d", &num_primo);
    printf ("%d", primoParcial(num_primo));

    printf ("Perfecto?: ");
    scanf ("%d", &num_perfecto);
    printf ("%d", perfecto(num_perfecto));

    printf ("Exponente?: ");
    scanf ("%d", &num_potencia);
    printf ("2 a la %d es igual a %d", num_potencia, potencia(num_potencia));

    printf ("\nEuclides?: ");
    scanf ("%d", &num_euclides);
    printf ("\n%d", euclides(num_euclides));

    for (i = 2 ; i < 100 ; i++){
        if (primoParcial(i) == 1){
            if (perfecto(euclides(i)) == 1){
                printf ("\nEl numero %d es perfecto", euclides(i));
            }
        }
    }
}

void goldbach (int N){

    int i,j;
    if (N % 2 == 0){
        for (i = N ; i >= 2 ; i--){
            for (j = 2; j <= N ; j++){
                if (primoParcial(i) == 1 && primoParcial(j) == 1){
                    if (j + i == N){
                        printf ("\nLos numeros son: %d y %d", i, j);
                    }
                }
            }
        }
    }
}

int primoParcial (int X){
    int i, cont_div = 0;
    for (i = X ; i >= 1 ; i--){
        if (X % i == 0){
            cont_div += 1;
        }
    }

    if (cont_div == 2){
        return 1;
    }
    else{
        return 0;
    }
}

float pitagoras (int dif_x, int dif_y){

    float distancia;

    distancia = distancia + sqrt(pow (dif_x,2) + pow (dif_y,2));

    return distancia;

}

int paquete_apto(int x, int y, int z, float p){

    if (p < 20 && x < 100 && y < 100 && z < 100 ){
        return 1;
    }
    else{
        return 0;
    }   

}

float costo_envio(int x, int y, int z, float p){

    int i, exceso_peso = 0;
    float costo_total = 0;

    if (p > 5){
        for (i = p ; i > 5 ; i--){
            exceso_peso = exceso_peso + 40;
        }
    }

    if (x > 50 || y > 50 || z > 50){
        return costo_total = (80 + (float)exceso_peso) * 1.30;
    }
    else{
        return costo_total = 80 + exceso_peso;
    }

}

int zona(int X, int Y){

    int zona_aterrizaje = 0;

    if ((X >= -5 && X <= 5) && (Y >= -5 && Y <= 5)){
        return zona_aterrizaje = 0;
    }
    else{
        if ((X >= -7.5 && X <= 7.5) && (Y >= -7.5 && Y <= 7.5)){
            return zona_aterrizaje = 1;
        }
        else{
            if ((X >= -15 && X <= 15) && (Y >= -15 && Y <= 15)){
                return zona_aterrizaje = 2;
            }
            else{
                return zona_aterrizaje = 3;
            }
        }
    }
}

int perfecto(int num){

    int i, sumatoria = 0;

    for (i = num - 1 ; i > 0 ; i--){
        if (num % i == 0){
            sumatoria += i;
        }
    }

    if (sumatoria == num){
        return 1;
    }
    else{
        return 0;
    }

}

int potencia(int exponente){

    int resultado;

    if (exponente == 0){
        return 1;
    }
   else{
        resultado = 2 * potencia (exponente - 1);
    }

}

int euclides (int P){

    int M;

    M = potencia(P - 1) * (potencia(P) - 1);

    return M;

}