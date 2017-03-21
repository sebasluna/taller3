//NOMBRE: Mayor de los Numeros
//AUTOR: Luis Sebastian Urbano Luna
//FECHA:
//RESUMEN: Programa para saber el mayor de dos numeros

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int a,b;
printf("Ingrese un primer Numero\n");
scanf("%d",&a);
printf("Ingrese un segundo Numero\n");
scanf("%d",&b);

if (a>b){
     printf ("El Numero mayor es %d\n",a);
}else{
     printf ("El Numero mayor es %d\n",b);
}

return 0;
}
