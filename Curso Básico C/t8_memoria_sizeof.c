/* 
 * t8_memoria_sizeof.c
*/
#include<stdio.h>

int main()
{
	int i = 7;
	int dir = (int)&i;
	printf("dir: %d\n", dir);
	printf("size: %d\n",sizeof(i));
	return 0;
}
