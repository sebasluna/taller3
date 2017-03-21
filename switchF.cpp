/*
*NOMBRE: menu opciones
*AUTOR: luis sebastian urbano luna
*FECHA:
*DEFINICION:se escoje primero que se desea ralizar y luego ya pasa a sacar el cubo o saber si un numero es par o impar
*/

#include<stdio.h>
#include<math.h>

int main(){
int opcion;
int lNumero,cubo;
printf("Hola por favor escoja que desea hacer\n\n");
printf("menu de opciones\n ");
printf("\n1.-Cubo de un numero\n");
printf("\n2.-Saber si un numero es par o impar\n");
printf("\n3.-Salir\n");
scanf("%d",&opcion);
switch(opcion){
    case 1:
        {
        printf("Ingrese un numero al que se le va a sacar el cubo ");
        scanf( "%d", &lNumero );
        cubo=lNumero*lNumero*lNumero;
        printf("el cubo del numero es: %d\n",cubo);
        break;
        }
    case 2:
        {
        printf( "Introduzca un numero para saber si es par o impar");
        scanf( "%d",&lNumero );
            if (lNumero%2== 0){
                    printf( "el numero es par" );
                }else{
                    printf( "el numero es impar" );
        }
        }
    case 3:
        {
        printf("CHAO Gracias por utilzar el programa\n");
        printf("salio del programa\n");
        }
    default:
        printf("vuelva a intentar");
    }
return 0;
}
