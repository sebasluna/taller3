/*
*NOMBRE:IGUALDAD
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:Se compara si un numero de los ya guardados es igual a los demas
*/

#include<iostream>
#include<stdio.h>

int main(){
	int lNumeros[5] = {1,2,3,4,10};
	int suma=0,mayor=0;
	for(int i=0;i<5;i++){
		suma += lNumeros[i];
		if(lNumeros[i]>mayor){
			mayor = lNumeros[i];
		}
	}
	if(mayor == suma-mayor){
		printf("\nEl numero %d es igual a la suma de los demas vectores\n",mayor);
            }else{
                printf("No existe ningun numero que sea igual a la suma de los demas vectores");
                }
	return 0;
}
