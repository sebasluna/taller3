/*NOMBRE: sumar los Numeros del 1 al 100
*AUTOR: Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Progama el cual nos suma los numeros del 1 al 100
*/

#include <iostream>
#include <stdio.h>

int main(){
int i=0,suma;
while (i<=100){
    suma=suma+i;
    i++;
    }
    printf("la suma de los numeros es:%d\n",suma);
    return 0;
}
