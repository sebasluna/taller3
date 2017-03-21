/*
*NOMBRE:Suma los numeros enteros mayores a 0
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se suman los numeros enteros mayores a 0
*/

#include<stdio.h>
int main(){
int suma=0;
int i;
for(i=1;i<=10;i++){
suma=suma+i*i;
}
printf("la suma de los cuadrados de los primeros 10 numeros mayores a 0 es:%d\n",suma);
return 0;
}
