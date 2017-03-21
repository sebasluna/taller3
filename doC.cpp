/*
NOMBRE:Rango
AUTOR:Luis Sebastian Urbano Luna
FECHA:
RESUMEN:lee valores enteros en un promedio [20-30] o se introduzca el cero ademas sumara los mayores a este
*/

#include<stdio.h>

int main(){
int lNumero,suma=0;
    do{
        printf("Ingrese un numero \n");
        scanf("%d",&lNumero );
        if(lNumero>0 ){
            suma=suma+lNumero;
        }
    }while((lNumero != 0) && (lNumero<20 || lNumero>30 ));
    printf("La suma de los valores mayores a cero es %d \n", suma);
    return 0;
}
