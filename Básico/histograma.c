#include<stdio.h>
#include<string.h>

#define n 10

void printncar();

int main(){
	int lista[n];
	int i;
	
	/* Lista de números */
	for (i = 0; i < n; ++i)
	{
		printf("Inserte un numero: ");
		scanf("%d", &lista[i]);
	}

	/* Imprime histograma */
	for (i = 0; i < n; ++i)
	{
		printncar(lista[i]);
	}
	return 0;
}

void printncar(int k){
	int ii;
	for (ii = 0; ii < k; ++ii)
	{
		printf("*");
	}
	printf("\n");
}
