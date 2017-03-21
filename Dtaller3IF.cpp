//NOMBRE: Positivo o Negativo
//AUTOR: Luis Sebastian Urbano Luna
//FECHA:
//RESUMEN: Programa para saber si un numero es positivo o negativo

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int lNumero;
printf("Ingrese un Numero\n");
scanf("%d",&lNumero);

if (lNumero>0){
     printf ("El Numero es positivo\n");
}else{
     printf ("El Numero es negativo\n");
}

return 0;
}
