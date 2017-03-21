#include <stdio.h>

int main(){
int n,resultado;
printf("\n Introduzca un entero\n");
scanf("%d",&n);
int f=2;
int ant=1;
while(f<=n){
resultado=f+ant;
ant=f;
f=resultado;
}

if(n==0) resultado=0;
if(n==1 || n==2) resultado=1;

printf("Fibonacci(%d) = %d ", n, resultado);
return 0;

}
