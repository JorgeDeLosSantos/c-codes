#include<stdio.h>
#include<math.h>

#define PI 3.1416

int main(){
	/*printf("sin(pi/2) = %f\n", sin(PI/2));
	printf("cos(pi/2) = %f\n", cos(PI/2));
	printf("tan(pi/2) = %f\n", tan(PI/2));
	printf("sin(pi) = %f\n", sin(PI));
	printf("cos(pi) = %f\n", cos(PI));*/
	int i;
	for (i = 0; i < 180; ++i)
	{
		printf("%f\n", sin(PI/i));
	}
}
