/*
*NOMBRE:MATRIZ TRANSPUESTA
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se rellena la matriz por medio de numeros ingrsados por el usuario y luego se regresa en forma transuesta
*/
#include<stdio.h>

int main(){
int matriz[3][3];
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("Digite un numero [%d][%d]:\n",f,c);
			scanf("%d",&matriz[f][c]);
		}
	}
	printf("\nMatriz Normal\n");
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("%d",matriz[f][c]);
		}
		printf("\n");
	}
	printf("\nMatriz Transpuesta\n");
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("%d",matriz[c][f]);
		}
		printf("\n");
	}
	return 0;
}
