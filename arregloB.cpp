/*
*NOMBRE:MULTIPLICACION DE VECTORES
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Se Ingresan los numeros y luego se Multiplican
*/

#include <stdio.h>

int main(){
    int multi=1,longitud,i;
    int vector [100];
    printf("por favor ingrese la longitud del vector\n");
    scanf("%d",&longitud);
    for(int i=0; i<longitud; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d",&vector[i]);
    }
    for(int i=0; i<longitud; i++){
        multi=multi*vector[i];
    }
    printf("resultado de la multiplicacion de los elementos es %d\n",multi);
    return 0;
}
