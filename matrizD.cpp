/*
*NOMBRE:MATRIZ 2X2
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se rellena la matriz por medio de numeros ingrsados por el usuario y luego los pasa a la otra matriz
*/
#include<stdio.h>

using namespace std;

int main(){
	int matriz1[2][2];
	int matriz2[2][2];
	int f,c;
	for(int f=0;f<2;f++){
		for(int c=0;c<2;c++){
            printf("ingrese valor posicion [%d][%d]\n",f,c);
            scanf("%d",&matriz1[f][c]);
			matriz2[f][c]=matriz1[f][c];
            }
            for(int f=0;f<2;f++){
                for(int c=0;c<2;c++){
                    printf("posicion [%d][%d]=%d\n ", f, c,matriz2[f][c]);
            }
		}
		printf("\n");
	}
	return 0;
}
