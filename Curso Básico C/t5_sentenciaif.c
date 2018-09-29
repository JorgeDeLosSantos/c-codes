/* 
 * t5_sentenciaif.c
 * Sentencia de control if
*/
#include<stdio.h>

void espar(int n){
	if (n % 2 == 0){
		printf("Par\n");
	}
	else{
		printf("Impar\n");
	}
}

int main()
{
	int numero;
	printf("Inserte un numero: ");
	scanf("%d",&numero);
	espar(numero);
	return 0;
}
