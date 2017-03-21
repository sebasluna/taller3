/*NOMBRE: sumar los Numeros del 1 al 100
*AUTOR: Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Progama el cual nos suma los numeros del 1 al 100
*/

#include <iostream>
#include <stdio.h>

int main(){
int i=1,suma;
printf("programa\n");
while (i<=50){
        if(i%2==0){
        suma=suma+i;
        i++;
        }else{}
    }
    printf("la suma de los numeros es:%d\n",suma);
    return 0;
}
