/*
*NOMBRE:SUMA DE VECTORES
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Se Ingresan los numeros y luego se Suman
*/

#include <iostream>
#include <stdio.h>

int main(){
    int suma=0;
    int vector [100];
    int longitud;
    printf("por favor ingrese la longitud\n");
    scanf("%d",&longitud);
    for(int i=0; i<longitud; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d",&vector[i]);
    }
    for(int i=0; i<longitud; i++){
        suma=suma+vector[i];
    }
    printf("resultado de la suma es %d\n",suma);

    return 0;
}
