#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//Prototipos de las funciones. Siempre antes del main

int ejercicio_2(), ejercicio_8(), ejercicio_9(), ejercicio_10(), ejercicio_11(), ejercicio_12(), ejercicio_13(), ejercicio_14(), ejercicio_15(), ejercicio_16(), ejercicio_17(), ejercicio_18(), ejercicio_19(), ejercicio_20(), ejercicio_21(), ejercicio_22(), potencia(int, int), ejercicio_23(), ejercicio_24(), ejercicio_25(), ejercicio_26(), ejercicio_27(), ejercicio_28(), ejercicio_29(), primo (int), potencia (int, int), intervalo_primos (int, int), num_perfecto (int), next_ascii(char);

float ejercicio_1(), ejercicio_3(), ejercicio_4(), ejercicio_5(), ejercicio_6();

void ejercicio_7();

int main(){

    int ejs;

    system ("cls");

    printf ("\n\tI - FUNDAMENTOS DE C");
    printf ("\n");
    printf ("\n\t1. Permitir el ingreso del radio (flotante) e imprimir en pantalla la longitud de la circunferencia y la superficie del circulo correspondiente.");
    printf ("\n\t2. Ingresar 3 valores enteros y calcular su promedio.");
    printf ("\n\t3. Realizar un programa que permita el ingreso de las diagonales de un rombo y muestre el valor de su superficie.");
    printf ("\n\t4. Realizar un programa que permita el ingreso de un valor de termperatura y muestre los valores equivalentes en las tres escalas (Celcius, Farenheit y Kelvin).");
    printf ("\n\t   Dado que no se sabe en que escala se ingreso el valor, deberan contemplarse los 3 casos.");
    printf ("\n\t5. Permitir el ingreso de la superficie de un circulo y determinar su diametro utilizando la funcion sqrt(), que retorna la raiz cuadrada de un flotante y esta asociada en la cabecera math.h.");
    printf ("\n\t6. Permitir el ingreso de 5 letras que componen una palabra. Al finalizar mostrar en pantalla la palabra formada por los codigos ASCII de cada letra a los que se le sumo el valor 5.");
    printf ("\n\t7. Realice un programa que dibuje en pantalla un triangulo rectangulo, utilizando asteriscos.");
    printf ("\n");
    printf ("\n\tII - CONTROL DE FLUJO");
    printf ("\n");
    printf ("\n\t8. Se ingresaran numeros enteros positivos. Determinar cuantos de estos son pares. El ingreso finalizara con un numero negativo.");
    printf ("\n\t9. Se ingresaran 100 numeros enteros. Sumar los de orden impar 1,3,5 ... por un lado y los de orden par 2,4,6 ... por otro. Determinar cuales proporcionan la mayor suma.");
    printf ("\n\t10. Se ingresaran numeros enteros hasta que se ingrese 235. Indicar cuantas veces ocurrio el ingreso del numero 23.");
    printf ("\n\t11. Permitir el ingreso de una clave numerica entera. Finalizar el ingreso solamente cuando la clave ingresada sea 23645.");
    printf ("\n\t12. Repetir el problema anterior permitiendo solo 3 ingresos. Luego del tercer intento fallido colocar una advertencia.");
    printf ("\n\t13. Determinar si un numero entero positivo ingresado por teclado es o no un numero perfecto."); 
    printf ("\n\t14. Mostrar los primeros 5 numeros perfectos.");
    printf ("\n\t15. Simular el tiro de una moneda para 1, 10, 100, 1000, 10000 intentos. Mostrar el porcentaje de ocurrencia de cara y seca.");
    printf ("\n\t16. Determinar si hay enteros de 3 cifras cuyo valor sea igual al producto de cada una de las mismas.");
    printf ("\n\t17. Ingresar 10 valores por teclado. Indicar cual fue el mayor y en que posicon entro.");
    printf ("\n\t18. Ingresar 10 valores por teclado. Indicar si esta secuencia es creciente (Todo valor es mayor que el anterior).");
    printf ("\n\t19. Ingresar por teclado un entero decimal positivo. Mostrarlo en pantalla en binario.");
    printf ("\n\t20. Ingresar por teclado un numero binario. Mostrar en pantalla su valor decimal.");
    printf ("\n\t21. Ingrese los datos de 10 alumnos consistentes en legajo y 8 notas. Indicar cual es el alumno de mejor promedio.");
    printf ("\n\t22. Ingresar los datos de los alumnos de un curso. Estos datos consisten en nota (int) y sexo (char: M/F). Indicar si el mejor promedio pertenece a los alumnos o a las alumnas.");
    printf ("\n");
    printf ("\n\tIII - FUNCIONES");
    printf ("\n");
    printf ("\n\t23. Se desea realizar un programa que utilice una funcion que calcule y retorne el valor de X a la Y, siento ambos entero y dando un entero.");
    printf ("\n\t24. Construir una funcion que reciba un entero positivo y retorne 1 si este es primo o 0 en caso contrario.");
    printf ("\n\t25. Utilizar la funcion del problema anterior para construir otra funcion que reciba dos enteros positivos y retorne la cantidad de numeros primos que se encuentran en el rango determinado por ellos.");
    printf ("\n\t26. Utilizar la funcion del problema anterior para mostrar las cantidades de numeros primos que hay en los rangos [1000-2000], [2000-3000] y [3000-4000].");
    printf ("\n\t27. Construir una funcion que reciba un entero positivo y retorne 1 si este es perfecto y 0 si no lo es. Utilizarla para mostrar los primeros 5 numeros perfectos.");
    printf ("\n\t28. Construir una funcion que reciba dos numeros enteros positivos y retorne un 1 si estos constituyen un par de numeros amigos, y 0 si no lo son. Utilizarla para mostrar algun par de numeros amigos.");
    printf ("\n\t29. Construir una funcion que lea un caracter de teclado y lo escriba en pantalla colocando el caracter cuyo codigo ASCII es el siguiente al recibido.");

    printf("\n\n\t\tIngrese el numero de problema a ejecutar: ");
    scanf("%d", &ejs);
    
    switch (ejs)
    {
    case 1:
        ejercicio_1();
        break;
    
    case 2:
        ejercicio_2();
        break;
    
    case 3:
        ejercicio_3();
        break;
    
    case 4:
        ejercicio_4();
        break;
    
    case 5:
        ejercicio_5();
        break;

    case 6:
        ejercicio_6();
        break;

    case 7:
        ejercicio_7();
        break;

    case 8:
        ejercicio_8();
        break;

    case 9:
        ejercicio_9();
        break;

    case 10:
        ejercicio_10();
        break;

    case 11:
        ejercicio_11();
        break;

    case 12:
        ejercicio_12();
        break;

    case 13:
        ejercicio_13();
        break;

    case 14:
        ejercicio_14();
        break;

    case 15:
        ejercicio_15();
        break;

    case 16:
        ejercicio_16();
        break;

    case 17:
        ejercicio_17();
        break;

    case 18:
        ejercicio_18();
        break;

    case 19:
        ejercicio_19();
        break;

    case 20:
        ejercicio_20();
        break;

    case 21:
        ejercicio_21();
        break;

    case 22:
        ejercicio_22();
        break;

    case 23:
        ejercicio_23();
        break;

    case 24:
        ejercicio_24();
        break;

    case 25:
        ejercicio_25();
        break;

    case 26:
        ejercicio_26();
        break;

    case 27:
        ejercicio_27();
        break;

    case 28:
        ejercicio_28();
        break;

    case 29:
        ejercicio_29();
        break;

    }

    return 0;
}

float ejercicio_1(){
    float radio = 0, pi = 3.14, longitud_circunferencia = 0, superficie = 0;

    printf("Ingrese el radio: ");
    //NO HAY QUE OLVIDARSE DEL AMPERSAND &
    scanf("%f", &radio);

    longitud_circunferencia = 2 * pi * radio;
    printf("\n\tLongitud de la circunferencia: %.2f", longitud_circunferencia);

    superficie = pi * radio * radio;
    printf("\n\tSuperficie: %.2f", superficie);

    printf("\n\n");
}

int ejercicio_2(){

    int primero = 0, segundo = 0, tercero = 0;
    float promedio = 0;

    printf("\nIngrese el primer numero entero: ");
    scanf("%d", &primero);
    fflush(stdin);

    printf("Ingrese el segundo nume7ro entero: ");
    scanf("%d", &segundo);
    fflush(stdin);

    printf("Ingrese el tercero numero entero: ");
    scanf("%d", &tercero);
    fflush(stdin);

    promedio = (primero + segundo + tercero) / 3;

    printf("\n\tEl promedio de los numeros es: %.2f ", promedio);
    printf("\n\n");
}

float ejercicio_3(){
    float diagonal_mayor = 0, diagonal_menor = 0, superficie = 0;

    printf("Ingrese el valor de la diagonal menor: ");
    scanf("%f", &diagonal_menor);

    printf("Ingrese el valor de la diagonal mayor: ");
    scanf("%f", &diagonal_mayor);

    superficie = (diagonal_mayor * diagonal_menor) / 2;

    printf("\n\tLa superficie del rombo es: %.2f", superficie);
    printf("\n\n");
}

float ejercicio_4(){
    float temperatura = 0, C = 0, F = 0, K = 0;
    printf("Ingrese la temperatura: ");
    scanf("%f", &temperatura);
    //Este ejercicio no tiene sentido, con un condicional se resolveria 1000% mejor.
    printf("\n\n");
}

float ejercicio_5(){
    float superficie = 0, pi = 3.14, diametro = 0;
    printf("\nIngrese la superficie del circulo: ");
    scanf("%f", &superficie);
    diametro = (sqrt(superficie / pi)) * 2;
    printf("\tEl diametro es %.2f", diametro);
    printf("\n\n");
}

float ejercicio_6(){
    char letra1, letra2, letra3, letra4, letra5;

    printf("\nIngrese la primer letra: ");
    scanf("%c", &letra1);
    fflush(stdin);

    printf("Ingrese la segunda letra: ");
    scanf("%c", &letra2);
    fflush(stdin);

    printf("Ingrese la tercer letra: ");
    scanf("%c", &letra3);
    fflush(stdin);

    printf("Ingrese la cuarta letra: ");
    scanf("%c", &letra4);
    fflush(stdin);

    printf("Ingrese la quinta letra: ");
    scanf("%c", &letra5);
    fflush(stdin);

    //Notemos que los tipos de formato de datos (%d / %c) son los que me hacen mostrar EN ESTE CASO, las letras o sus valores en ASCII. Si en lugar de %c ponemos %d, nos mostrara el codigo ASCII al que corresponde esa letra (+5 en el caso de este ejercicio).

    printf("\n\tLa palabra es: %c%c%c%c%c",letra1+5,letra2+5,letra3+5,letra4+5,letra5+5);
    printf("\n\n");

}

void ejercicio_7(){
    int catetos = 0, i = 1, j = 1;
    //Son 2 ciclos anidados, uno aumenta en alto y otro en ancho, en la misma cuantia, ya que son iguales.
    printf("Ingrese el tamaño de los catetos: ");
    scanf("%d", &catetos);

    for (i = 1; i <= catetos; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}

int ejercicio_8(){

    int numeros = 0, pares = 0;

    do {
        printf("Ingrese numeros enteros positivos (Para terminar ingrese un negativo): ");
        scanf("%d", &numeros);
        if (numeros % 2 == 0){
            pares = pares + 1;
        }
    } while (numeros > 0);

    printf("Se ingresaron %d numeros pares", pares);
    printf("\n\n");

}

int ejercicio_9(){

    int i = 1, numero = 0, orden_par = 0, orden_impar = 0;

    for (i = 1; i <= 10; i++){
        printf("Ingrese el %d%c numero: ", i, 167);
        scanf("%d", &numero);

        if (i % 2 == 0){
            orden_par = orden_par + numero;
        }
        else{
            orden_impar = orden_impar + numero;
        }
    }

    printf("\n\tLos numeros de orden par suman: %d", orden_par);
    printf("\n\tLos numeros de orden impar suman: %d", orden_impar);

    printf("\n\n");

}

int ejercicio_10(){
    int numero = 0, acum_23 = 0, flag = 0;

    do{
        printf("Ingrese numeros enteros distintos a 235: ");
        scanf("%d", &numero);

        if (numero == 23){
            acum_23 = acum_23 + 1;
            flag = 1;
        }
    } while(numero != 235);

    if (flag = 1){
        printf("\n\tSe ha ingresado %d veces el numero 23", acum_23);
    }

    printf("\n\n");
}

int ejercicio_11(){
    int clave = 0;
    do{
        printf("Ingrese una clave (Finaliza con el ingreso de 23645): ");
        scanf("%d", &clave);
    } while (clave != 23645);

    printf("\n\n");
}

int ejercicio_12(){
    int clave = 0, i = 0, flag = 0;

    do{
        printf("Ingrese una clave (Finaliza con el ingreso de 23645): ");
        scanf("%d", &clave);
        flag = flag + 1;
    } while (clave != 23645 && flag < 3);

    if (flag == 3){
        printf("\n\n\t%c Se ha ingresado incorrectamente 3 veces. Intentalo mas tarde !", 173);
    }

    printf("\n\n");
}

int ejercicio_13(){
    int numero = 0, suma = 0, i = 1;
    printf("\nIngrese un numero para determinar si es perfecto: ");
    scanf("%d", &numero);

    for (i = 1 ; i < numero ; i++){
        if (numero % i == 0){
            suma = suma + i;
        }
    }

    if (numero == suma){
        printf("\n\tEl numero %d es perfecto", numero);
    }
    else{
        printf("\n\tEl numero %d no es perfecto", numero);
    }

    printf("\n\n");

}

int ejercicio_14(){

    //Este metodo encuentra los primeros 4, pero el 5º numero perfecto esta en el orden de los 33 millones, por lo que el programa nunca termina de evaluar las situaciones.
    int  contador_perfectos = 0, suma = 0, i = 1, contador = 0;
    do{
        contador = contador + 1;
         for (i = (contador - 1); i > 0; i--){
            if (contador % i == 0){
                suma = suma + i;
            }
        }
        if (suma == contador){
            contador_perfectos = contador_perfectos + 1;
            printf("\n El numero %d ES PERFECTO", contador);
        }
        suma = 0;
    } while (contador_perfectos < 5);
    
    printf("\n\n");

}

int ejercicio_15(){
    int i = 0, intentos = 0, cara_o_seca = 0, suma_cara = 0, suma_seca = 0;
    float porc_caras = 0, porc_secas = 0;

    srand(time(NULL));

    printf("%c Cuantas veces queres tirar la moneda ? ", 168);
    scanf("%d",&intentos);
    fflush(stdin);
    for (i = 0; i < intentos; i++){
        cara_o_seca = rand() % 2;
        if (cara_o_seca == 0){
            suma_cara = suma_cara + 1;
        }
        else{
            suma_seca = suma_seca + 1;  
        }   
    }

    porc_caras = ( (float) suma_cara / intentos ) * 100;
    porc_secas = ( (float) suma_seca / intentos ) * 100;

    printf("\n\tLa moneda salio cara un %.2f %% y un %.2f %% de secas", porc_caras, porc_secas);
}

int ejercicio_16(){
    int i = 0, unidades = 0, decenas = 0, centenas = 0, operacion = 0, flag = 0;
    for (i = 100; i <= 999; i++){
        centenas = i / 100;
        decenas = (i / 10)%10;
        unidades = i % 10;
        operacion = centenas * decenas * unidades;
        if (operacion == i){
            printf("\nMultiplicando las cifas del numero %d da el mismo numero", i);
            flag = 1;
        }
        // printf("\n\tI = %d // %d * %d * %d = %d", i, centenas, decenas, unidades, operacion); 
    }
    if (flag == 0){
        printf("\nNo existe ningun numero que cumpla con lo solicitado");
    }
    printf("\n\n");
}

int ejercicio_17(){
    int i = 1, numero = 0, mayor = 0, posicion = 0;
    for(i = 1; i <= 10; i++){
        printf("\nIngrese el %d%c numero: ", i, 167);
        scanf("%d", &numero);
        if (numero >= mayor){
            mayor = numero;
            posicion = i;
        }
    }
    printf("\n\tEl numero %d fue el mayor y entro en la %d%c posicion: ", mayor, posicion, 167);
    printf("\n\n");
}

int ejercicio_18(){
    int i = 1, flag = 0, numero = 0, secuencial = 0;

    for (i = 1; i <= 5; i++){
        printf("\nIngrese el %d%c numero: ", i, 167);
        scanf("%d", &numero);
        if (numero < secuencial){
            flag = 1;
        }
        else{
            secuencial = numero;
        }
    }
    if (flag != 0){
        printf("\n\tLa secuencia no es creciente");
    }
    else{
        printf("\n\tLa secuencia es creciente");
    }

    printf("\n\n");
}

int ejercicio_19(){

    int decimal, resto, cociente, exponente = 0, binario = 0;

    printf ("\nIngrese un numero decimal: ");
    scanf ("%d", &decimal);
    cociente = decimal;

    while (cociente > 0){

        resto = cociente % 2;
        cociente = cociente / 2;
        binario += resto * potencia (10, exponente);
        exponente++;

    }

    printf ("%d", binario);
    printf ("\n");
}

int ejercicio_20(){

    int binario, cociente, decimal = 0, exponente = 0, resto;

    printf ("\nIngrese un numero binario: ");
    scanf ("%d", &binario);
    cociente = binario;

    while (cociente >= 1){
        resto = cociente % 10;
        decimal = decimal + resto * potencia (2,exponente);
        cociente = cociente / 10;
        exponente++;
    }

    printf ("\nEl numero binario %d expresado en decimal es el %d", binario, decimal);

}

int ejercicio_21(){
    int i = 1, j = 1, nota = 0, sumatoria = 0, posicion_alumno = 0;
    float promedio = 0, mayor_promedio = 0;
     
    for (i = 1; i <= 10; i++){
        for (j = 1; j <= 8; j++){
            printf("Ingrese la %d%c nota del %d%c alumno: ", j, 167, i, 167);
            scanf("%d", &nota);
            sumatoria = sumatoria + nota;
        }
        promedio = (float) sumatoria / (j - 1);
        if (promedio > mayor_promedio){
            mayor_promedio = promedio;
            posicion_alumno = i;
        }
        sumatoria = 0;
        printf("\n");
    }
    printf ("\n\tEl %d%c alumno obtuvo %.2f, siendo el mejor promedio del curso.", posicion_alumno, 167, mayor_promedio);
    printf("\n\n");
}

int ejercicio_22(){
    //Estuve renegando con este ejercicio, ya que la 'sumatoria_hombres' me daba un numero mostruoso ... Luego de darle mil vueltas al ejercicio, descubri que el problema era que no habia inicializado la variable en 0 (O en el valor que corresponda), y por esto el programa empezaba con basura en el sector de memoria de 'sumatoria_hombres'. Una vez inicializada, se soluciono el inconveniente.
    int nota = 0, sumatoria_mujeres = 0, sumatoria_hombres = 0, cantidad_alumnos = 0, i = 1, cantidad_mujeres = 0, cantidad_hombres = 0;
    float promedio_hombres = 0, promedio_mujeres = 0;
    char sexo;

    printf("%c Cuantos alumnos desea ingresar? ", 168);
    scanf("%d", &cantidad_alumnos);
    fflush(stdin);

    for (i = 1; i <= cantidad_alumnos; i++){
        printf("\nSeleccionar el sexo (M / F): ");
        scanf("%c", &sexo);
        fflush(stdin);

        switch (sexo){
            case 109:
                printf("\tIngrese la nota del alumno: ");
                scanf("%d", &nota);
                fflush(stdin);
                sumatoria_hombres = sumatoria_hombres + nota;
                cantidad_hombres = cantidad_hombres + 1;
                break;
            case 77:
                printf("\tIngrese la nota del alumno: ");
                scanf("%d", &nota);
                fflush(stdin);
                sumatoria_hombres = sumatoria_hombres + nota;
                cantidad_hombres = cantidad_hombres + 1;
                break;
            case 102:
                printf("\tIngrese la nota de la alumna: ");
                scanf("%d", &nota);
                fflush(stdin);
                sumatoria_mujeres = sumatoria_mujeres + nota;
                cantidad_mujeres = cantidad_mujeres + 1;
                break;
            case 70:
                printf("\tIngrese la nota de la alumna: ");
                scanf("%d", &nota);
                fflush(stdin);
                sumatoria_mujeres = sumatoria_mujeres + nota;
                cantidad_mujeres = cantidad_mujeres + 1;
                break;
        }
    }

    promedio_hombres = (float) sumatoria_hombres / cantidad_hombres;
    promedio_mujeres = (float) sumatoria_mujeres / cantidad_mujeres;

    if (promedio_hombres > promedio_mujeres){
        printf("\n\tLos hombres tienen un promedio de %.2f, que es mejor que el de las mujeres.", promedio_hombres);
    }
    else{
        printf("\n\tLas mujeres tienen un promedio de %.2f, que es mejor que el de los varones.", promedio_mujeres);
    }   

    printf("\n\n");
}   

int ejercicio_23(){
    
    int base = 0, exponente = 0;

    printf ("\n\tIngrese el valor de la base: ");
    scanf("%d", &base);
    fflush(stdin);

    printf ("\tIngrese el valor del exponente: ");
    scanf("%d", &exponente);
    fflush(stdin);

    printf("\n\t\tEl numero %d elevado a la %d es %d", base, exponente, potencia(base, exponente));
    printf("\n\n");
}

int ejercicio_24(){

    int numero;
    printf ("\n\tIngrese un numero positivo: ");
    scanf ("%d", &numero);

    if (primo(numero)){
        printf ("\n\t\tEl numero es primo");
    }
    else{
        printf ("\n\t\tEl numero no es primo");
    }
    printf("\n\n");
}

int ejercicio_25(){

    int numero1, numero2, asd;

    printf ("\n\tIngrese el 1%c numero: ", 167);
    scanf ("%d", &numero1);
    fflush (stdin);

    printf ("\tIngrese el 2%c numero: ", 167);
    scanf ("%d", &numero2);
    fflush (stdin);

    printf ("\n\t\tHay %d numeros primos entre el %d y el %d.", intervalo_primos(numero1 , numero2), numero1, numero2);
    printf("\n\n");
}

int ejercicio_26(){
    printf ("\n\tHay %d numeros primos entre 1000 y 2000", intervalo_primos (1000,2000));
    printf ("\n\tHay %d numeros primos entre 2000 y 3000", intervalo_primos (2000,3000));
    printf ("\n\tHay %d numeros primos entre 3000 y 4000", intervalo_primos (3000,4000));
    printf("\n\n");
}

int ejercicio_27(){

    int numero;

    printf ("\nIngrese el numero a verificar: ");
    scanf ("%d", &numero);

    if (num_perfecto(numero)){
        printf ("\n\tEl numero %d es perfecto", numero);
    }
    else{
        printf ("\n\tEl numero %d no es perfecto", numero);
    }
    printf("\n\n");
}

int ejercicio_28(){

    int numero1, numero2;

    printf ("\n\tIngrese el 1%c numero: ", 167);
    scanf ("%d", &numero1);
    fflush(stdin);

    printf ("\tIngrese el 2%c numero: ", 167);
    scanf ("%d", &numero2);
    fflush(stdin);

    if (num_amigos(numero1 , numero2) == 1){
        printf ("\n\t\tLos numeros %d y %d son amigos", numero1, numero2);
    }
    else{
        printf ("\n\t\tLos numeros %d y %d no son amigos", numero1, numero2);
    }
    printf("\n\n");
}

int ejercicio_29(){

    char caracter;

    printf ("\n\tIngrese el caracter: ");
    // Tener muy presente el tema del fflush cuando se usa el getchar(), sino no te deja ingresar el dato.
    fflush(stdin);
    // A getchar() se lo debe guardar en una variable, tenerlo tambien MUY PRESENTE.
    caracter = getchar();

    printf ("\n\t\tEl caracter ingresado fue el '%c' (ASCII: %d) y su siguiente caracter en el codigo ASCII es el '%c' (ASCII: %d)", caracter, caracter, next_ascii(caracter), next_ascii(caracter));
    printf("\n\n");
}

int intervalo_primos (int X , int Y){

    int i, cont_primos = 0;

    for (i = X; i <= Y; i++){
        if (primo(i) == 1){
            cont_primos = cont_primos + 1;
        }
    }

    return cont_primos;
}

int num_perfecto (int X){

    int i, sumatoria = 0, cociente = 0;

    for (i = 1; i < X; i++){
        if (X % i == 0){
            sumatoria = sumatoria + i;
        }
    }

    if (sumatoria == X){
        return 1;
    }
    else{
        return 0;
    }
}

int primo(int X){
    int cont_cocientes = 0, i;

    for (i = 1; i <= X; i++){
        if ( X % i == 0){
            cont_cocientes++;
        }
    }

    if (cont_cocientes == 2){
        return 1;
    }
    else{
        return 0;
    }

}

int potencia(int X, int Y){
    int resultado;

    if (Y == 0){
        return 1;
    }
    else{
        resultado = X * potencia (X, Y-1);
        return resultado;
    }
}

int num_amigos (int X, int Y){

int i, j, sumatoria_x = 0, sumatoria_y = 0;

    for (i = 1; i < X; i++){
        if (X % i == 0){
            sumatoria_x = sumatoria_x + i;
        }
    }

    for (j = 1; j < Y; j++){
        if (Y % j == 0){
            sumatoria_y = sumatoria_y + j;
        }
    }

    if (sumatoria_x == Y){
        return 1;
    }
    else{
        return 0;
    }

}

int next_ascii(char X){

    char caracter;
    caracter = X + 1;

    return caracter;

}