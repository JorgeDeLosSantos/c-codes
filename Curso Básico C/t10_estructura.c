/* 
 * t10_estructura.c
*/
#include<stdio.h>
#include<string.h>
// Definimos la estructura
struct alumno{
	char nombre[100];
	int nota;
};

int main()
{
	struct alumno a1;
	a1.nota = 10;
	char nombre[] = "Jorge";
	strcpy(a1.nombre,nombre);
	printf("Nombre: %s\nNota: %d\n",a1.nombre,a1.nota);
	return 0;
}
