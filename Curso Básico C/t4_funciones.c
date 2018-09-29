/* 
 * t4_funciones.c
 * Funciones 
*/
#include<stdio.h>

void saludar(){
	printf("Hola, bienvenido...\n");
}

void despedir(){
	printf("Proceso terminado...\n");
}

int cuadrado(int num){
	return num*num;
}

int main()
{
	int numero;
	saludar();
	printf("Inserte un numero: ");
	scanf("%d",&numero);
	printf("n^2 = %d\n", cuadrado(numero));
	despedir();
	return 0;
}
