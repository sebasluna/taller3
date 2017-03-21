/*
*NOMBRE:UNION DE CADENAS
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESIMEN:Se ingresan dos cadenas al final se devuelve una
*/

#include <iostream>
#include <stdio.h>

int main(){
    char cadena1[]={'s','e','b','a','s','t','i','a','n'};
    char cadena2[]={'l','u','n','a'};
    char resultado[13];
    int i=0;
    for(int i=0; i<9; i++){
        resultado[i]=cadena1[i];
    }
    for (i=0; i<13; i++){
        resultado[i]=cadena2[i+cadena1];
    }
    for (i=0; i<13; i++){
         printf("cadena nueva=%s",resultado[i]);
    }
    return 0;
}
