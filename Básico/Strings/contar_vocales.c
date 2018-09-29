#include<stdio.h>
#include<string.h>

int esvocal(char car);

int main(){
	char texto[1000];
	puts("Inserte una cadena: ");
	gets(texto);
	
	
	printf("%d\n", (int)strlen(texto));
	int i;
	int nvoc = 0;
	for (i = 0; i < strlen(texto); i++)
	{
		if (esvocal(texto[i]) == 1)
		{
			nvoc += 1;
		}
	}
	printf("Vocales = %d\n",nvoc);
	system("PAUSE");
	return 0;
}

int esvocal(char car){
	int i;
	char vocales[] = "aeiou";
	for (i = 0; i < 5 ; i++)
	{
		if (car == vocales[i])
		{
			return 1;	
		}
	}
	return 0;
}
