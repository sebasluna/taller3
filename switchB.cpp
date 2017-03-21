/*
*NOMBRE: vocales
*AUTOR: luis sebastian urbano luna
*FECHA:
*DEFINICION:ingresa una vocal y el programa dira si es mayuscula, minuscula o no es una vocal
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
char letra;
printf("Introduzca una vocal:\n");
scanf("%c",&letra);
switch (letra){
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
    case 'A':
        printf ("Es mayuscula\n");
        break;
    case 'E':
        printf ("Es mayuscula\n");
        break;
    case 'I':
        printf ("Es mayuscula\n");
        break;
    case 'O':
        printf ("Es mayuscula\n");
        break;
    case 'U':
        printf ("Es mayuscula\n");
        break;
    default:
        printf ("No es vocal\n");
        break;
    }
    return 0;
    system("PAUSE");
}
