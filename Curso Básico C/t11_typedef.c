/* 
 * t11_typedef.c
*/
#include<stdio.h>
#include<string.h>

// Definimos la estructura
typedef struct Alumno{
	char nombre[100];
	char direccion[100];
	long telefono;
}alumno;

int main()
{
	alumno a;
	puts("Ingrese un nombre");
	gets(a.nombre);
	printf("Nombre: %s\n",a.nombre);
	pause()
	return 0;
}
