//NOMBRE: Par o Impar
//AUTOR: Luis Sebastian Urbano Luna
//FECHA:
//RESUMEN: Programa para saber si el numero es par o impar

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int lNumero;
printf("ingrese su numero\n");
scanf("%d",&lNumero);

if(lNumero%2==0){
        printf("el numero es Par\n");
}else{
        printf("el numero  es Impar\n");
}
return 0;
}
