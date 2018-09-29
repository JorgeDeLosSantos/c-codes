/* 
 * t3_area_perimetro.c
 * Cálcula el área y perimetro de un rectángulo
*/
#include<stdio.h>

int main()
{
	float base, altura, area, perimetro;
	printf("Base: ");
	scanf("%f",&base);
	printf("Altura: ");
	scanf("%f",&altura);
	area = base*altura;
	perimetro = (2*base)+(2*altura);
	printf("Area = %f\n",area);
	printf("Perimetro = %f\n",perimetro);
	return 0;
}
