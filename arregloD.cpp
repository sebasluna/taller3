/*
*NOMBRE:NUMEROS INVERTIDOS
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Se muestran en la pantalla los numeros invertidos
*/

#include <iostream>
#include <stdio.h>

int main(){
	int lNumeros[5] = {1,2,3,4,5};

	for(int i=4;i>=0;i--){
		printf("\nlos numeros invertidos son:%d\n",lNumeros[i]);
	}
	return 0;
}


