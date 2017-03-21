/*
*NOMBRE: vocales
*AUTOR: luis sebastian urbano luna
*FECHA:
*DEFINICION:ingresa una vocal y el programa dira si es minuscula o no lo es
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
char minuscula;
printf("Introduzca una vocal:\n");
scanf("%c",&minuscula);
switch (minuscula){
    case 'a':
        printf ("Es minuscula\n");
        break;
    case 'e':
        printf ("Es minuscula\n");
        break;
    case 'i':
        printf ("Es minuscula\n");
        break;
    case 'o':
        printf ("Es minuscula\n");
        break;
    case 'u':
        printf ("Es minuscula\n");
        break;
    default:
        printf ("No es minuscula o no es vocal\n");
        break;
    }
    return 0;
     system("PAUSE");
}
