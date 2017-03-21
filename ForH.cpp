/*
*NOMBRE:DESCOMPOSICION DE FACTORES
*AUTOR:LUIS SEBASTIAN URBANO LUNA
*FECHA:
*RESUMEN:INGRESA UN NUMERO Y LE DEBUELVE SU DESCOMPOSICION
*/
#include <stdio.h>

int main(){
int lNumero,i;
printf("ingrese un numero\n");
scanf("%d",&lNumero);
for(i=2;i<=lNumero;i++){
    while(lNumero%i==0){
        printf("%d x",i);
        lNumero=lNumero/i;
        }
    }
printf("%d",lNumero);
return 0;
}
