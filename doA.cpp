/*
*NOMBRE: Numeros diferentes de 0
*AUTOR: Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Progama que lea numeros hasta 0
*/

#include <iostream>
#include <stdio.h>

int main(){
   int lNumero,i,lTotal;
   do{
       printf("ingrese el numero\n");
       scanf("%d",&lNumero);
           i=0;
           lTotal=i+1;
           i++;
   }while (lNumero!=0);
   printf("Total Intentos %d\n",lTotal);
   printf("Final\n");
   return 0;
}

