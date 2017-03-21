/*
*NOMBRE: Factorial de un numero
*AUTOR: Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN: se halla el factorial de un numero ingresado por el usuario
*/
#include<stdio.h>

int main(){
int fac=0;
printf("Ingresa Numero para calcular el factorial\n");
scanf("%d",&fac);
int num=fac-1;
int i=fac;
while (num>=1){
i=i*num;
num--;
}
printf("El factorial de %d es: %d ", fac,i);

return 0;
}
