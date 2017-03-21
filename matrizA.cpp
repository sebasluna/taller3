/*
*NOMBRE:Matriz
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:
*RESUMEN:se rellena la matriz por medio de numeros ingrsados por el usuario
*/

#include <stdio.h>

int main(){
int columnas,filas,f,c;
printf("Ingrese El Numero De Filas y Columnas\n");
printf("Ingrese Numero De Columnas: ");
scanf("%d",&columnas);
printf("Ingrese Numero De Filas: " );
scanf("%d",&filas);
int arreglo [filas][columnas];

    for(f=0; f<filas; f++){
        for(c=0; c<columnas; c++){
            printf("ingrese valor posicion [%d][%d]\n",f,c);
            scanf("%d",&arreglo[f][c]);
                }
            }
            for(f=0; f<filas; f++){
                for(c=0; c<columnas; c++){
                    printf("posicion [%d][%d]= %d ", f, c,arreglo[f][c]);
        }
        printf("\n");
    }
    return 0;
}
