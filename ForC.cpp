/*
*NOMBRE:Suma hasta N
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se suman los numeros hasta n q es el valor q da el usuario
*/

#include<stdio.h>
int main(){
int suma=0;
int n,i;
printf("Ingrese numero hasta el que desea sumar\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
suma=suma+i;
}
printf("la suma es:%d\n",suma);
return 0;
}
