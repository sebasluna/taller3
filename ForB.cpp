/*
*NOMBRE:TEMPERATURA
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se ingresa la temperatura y luego se devuelve la mayor la menor y la media
*/
#include<stdio.h>

int main(){
float mayor=0,menor=9999,media=0;
float i,t;

for(i=0; i<24; i+=4){
    printf("ingrese temperatura alas %0.0f hora\n",i);
    scanf("%f",&t);

    if(t>mayor){
        mayor=t;
    }
    if(t<menor){
        menor=t;
        }
        media+=t/6;
}
printf("temperatura Mayor %0.2f\n",mayor);
printf("temperatura Menor %0.2f\n",menor);
printf("temperatura Media %0.2f\n",media);
return 0;
}
