/*
*NOMBRE: Simulador de una caja
*AUTOR: luis sebastian urbano luna
*FECHA:
*DEFINICION:ingresa el valor a depositar o retirar de una caja
*/
#include<stdio.h>
int main(){
int opcion=1000000;
int ingreso,saco,lTotal1,lTotal2,lFinal;

printf("Hola por favor escoja que desea hacer\n\n");
printf("menu de opciones\n ");
printf("\n1.-Ingresar dinero a la caja\n");
printf("\n2.-Retro de efectivo\n");
printf("\n3.-Consultar saldo actual\n");
printf("\n4.-Salir\n");
scanf("%d",&opcion);
switch(opcion){
case 1:
    {
    printf("cuanto desea ingresar a la caja\n");
    scanf("%d",&ingreso);
    lTotal1=1000000+ingreso;
    printf("el saldo total es: %d\n",lTotal1);
    break;
    }
case 2:
    {
    printf("Retiro en efectivo\n");
    printf("Cuanto deseas retirar:");
    lTotal2=1000000-saco;
    printf("el saldo total es: %d\n",lTotal2);
    break;
    }
case 3:
    {
    lFinal=1000000-(lTotal1+lTotal2);
    printf("el saldo final es: %d\n",lFinal);
    }
default:
    printf("opcion erronea");
}
return 0;
}

