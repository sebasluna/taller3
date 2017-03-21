//NOMBRE: Numero Igual
//AUTOR: Luis Sebastian Urbano Luna
//FECHA:
//RESUMEN: Programa para saber si un numero es igual a alguno de los ya introducidos anteriormente

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int a,b,c,d;
printf("Ingrese tres Numeros\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("Ahora ingrese un nuevo Numero\n");
scanf("%d",&d);

if (a==d){
     printf ("El primer Numero es igual al nuevo\n");
}else if (b==d){
    printf ("El segundo Numero es igual al nuevo\n");
}else if (c==d){
    printf ("El tercer Numero es igual al nuevo\n");
}else{
    printf("Ninguno Numero es igual\n");
    }
return 0;
}
