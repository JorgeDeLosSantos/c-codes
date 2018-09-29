#include<stdio.h>
#include "funciones.h"

int main()
{
	printf("%f\n",PI);
	printf("%f\n",suma(10,3));
	return 0;
}

float suma(float a,float b){
	return a+b;
}

float resta(float a,float b){
	return a-b;
}
