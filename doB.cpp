/*
*NOMBRE: tabla multiplicar
*AUTOR: Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se ingresaa un numero y se retorna la tabla de multiplicar

*/

#include <iostream>
#include <stdio.h>

int main(){
   int lNumero,multiplicar;
   int i=0;
    printf("Ingrese el Numero a multiplicar del 1 al 10\n");
       scanf("%d",&lNumero);
       do{

            multiplicar = lNumero*i;
            printf("%d*%d=%d\n",lNumero,i,multiplicar);
            i++;
       }while (i<=lNumero);
   return 0;
}
