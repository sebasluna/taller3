/*
*NOMBRE:Suma los numeros elevados hasta N
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se suma el resultado de la elevacion de 2  hasta n q es el valor q da el usuario
*/

#include<stdio.h>
int main(){
int suma=0;
int n,i;
printf("Ingrese numero hasta el que desea elevar\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
suma=suma+2*i;
}
printf("la suma es:%d\n",suma);
return 0;
}
