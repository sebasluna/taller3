/*
*NOMBRE:SALIDA DE INDICES
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Se Ingresan los numeros y salen los indices
*/

#include <iostream>
#include <stdio.h>

int main(){
    int lNumeros[100];
    int n;
    printf("por favor ingrese la longitud del arreglo:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d",&lNumeros[i]);
    }
    for(int i=0; i<n; i++){
    printf("\nla posicion %d = %d\n",i,lNumeros[i]);
    }
    return 0;
}
