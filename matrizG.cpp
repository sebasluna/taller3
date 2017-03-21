/*
*NOMBRE:Matriz
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se rellena la matriz por medio de numeros ingrsados por el usuario
*/
#include<stdio.h>

int main(){
	int numeros[100][100],filas,columnas;
	printf("Digite el numero de filas:");
	scanf("%d",&filas);
	printf("Digite el numero de columnas:");
    scanf("%d",&columnas);

	for(int f=0;f<filas;f++){
		for(int c=0;c<columnas;c++){
			printf("Digite un numero [%d][%d]:\n",f,c);
			scanf("%d",&numeros[f][c]);
		}
	}
	if(filas==columnas){
            printf("es una matriz simetrica");
        }else{
            printf("No es una matriz simetrica");

    }
	return 0;
}

