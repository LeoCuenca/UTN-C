#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

struct CAMIONES{
	char MAQUINA;
	int PUNTAJES[5];
	char CODIGO[30];
	
};

float PROM(struct CAMIONES[], int);
void CARGAR(struct CAMIONES[], int);
void MIRAR(struct CAMIONES[], int);
void ORDENAR(struct CAMIONES[],int);

int main (){
	struct CAMIONES CAM[N];
	CARGAR (CAM , N );
	MIRAR (CAM , N );
	PROM (CAM , N );
	ORDENAR (CAM , N);
	MIRAR (CAM , N);
}

float PROM (struct CAMIONES V[], int X){
	int I,J;
	int ACUM = 0;
	float PROM;
		for (I=0;I<X;I++){
			for (J=0;J<5;J++)
			ACUM +=V[I].PUNTAJES[J];
		}
		PROM = (float)ACUM/5;
		return PROM;
}
void CARGAR(struct CAMIONES V[],int X){
	int I,J;
	for	(I=0;I<X;I++) {
	printf ("\n\n\t\t INGRESE LA MAQUINA   :");
	scanf ("%c", &V[I].MAQUINA) ; 
	getchar();
	printf ("\n\n\t\t\t INGRESE EL CODIGO CORRESPONDIENTE :");
	gets (V[I].CODIGO);
	for (J=0;J<5;J++)
		V[I].PUNTAJES[J] = rand()% 101 ;
	
	}
}
void ORDENAR(struct CAMIONES V[], int X){
	int I,J;
	struct CAMIONES AUX;
		for(I=0;I<N-1;I++){
			for (J=0;J<N-I-1;J++)
			/swapping/
			if (V[J].MAQUINA<V[J+1].MAQUINA){
					AUX=V[J];
					V[J]=V[J+1];
					V[J+1]=AUX;
					if (PROM(V[J],X)>PROM(V[J+1],X)){
						AUX=V[J];
						V[J]=V[J+1];
						V[J+1]=AUX;
					}
			}
		
		} 
	
}





void MIRAR (struct CAMIONES V[],int X){
	int I,J;
	printf (" \n\n\t\t\t         PUNAJES           CODIGO           MAQUINA      PROMEDIO  ");
	for (I=0;I<X;I++){
		printf ("\n\n\n\t\t\t   %d   %d   %d   %d   %d      %s      %c   %.2f  ", V[I].PUNTAJES[0], V[I].PUNTAJES[1], 
																				V[I].PUNTAJES[2], V[I].PUNTAJES[3], V[I].PUNTAJES[4], 
																				V[I].CODIGO, V[I].MAQUINA);                                   
																				
	}