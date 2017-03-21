/*
*NOMBRE:COPIE UN ARREGLO
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Se copia un arreglo de 5 en otro
*/

#include<iostream>
#include<stdio.h>

int main(){
	int lNumero1[5],lNumero2[5];
	for(int i=0;i<5;i++){
        printf("ingrese un numero\n");
		scanf("%d",&lNumero1[i]);
	}
	for(int i=0;i<5;i++){
		lNumero2[i]=lNumero1[i]*2;
	}
	printf("\nMostrando numeros multiplicados por 2:\n");
	for(int i=0;i<5;i++){
		printf("%d\n",lNumero2);
	}
	return 0;
}

