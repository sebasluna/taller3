/*
*NOMBRE:NUMERO MAYOR EN UN VECTOR
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Se Ingresan los numeros y se devuelve el mayor
*/

#include <iostream>
#include <stdio.h>

int main(){
    int lNumero[100];
    int n,mayor=0;
    printf("por favor ingrese la longitud del arreglo:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d",&lNumero[i]);

        if(lNumero[i] > mayor){
            mayor= lNumero[i];
        }
    }
    printf("\nEl mayor elemento del vector es:%d",mayor);
    return 0;
}
