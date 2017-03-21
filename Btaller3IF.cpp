//NOMBRE: Mayor de tres Numeros
//AUTOR: Luis Sebastian Urbano Luna
//FECHA:
//RESUMEN: Programa para saber el mayor de tres numeros

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int a,b,c;
printf("Ingrese un primer Numero\n");
scanf("%d",&a);
printf("Ingrese un segundo Numero\n");
scanf("%d",&b);
printf("Ingrese un tercer Numero\n");
scanf("%d",&c);

if (a>b && a>c){
     printf ("El Numero mayor es %d\n",a);
}
else if (b>a && b>c){
    printf ("El Numero mayor es %d\n",b);
}
else if (c>a && c>b){
    printf ("El Numero mayor es %d\n",c);
}
return 0;
}
