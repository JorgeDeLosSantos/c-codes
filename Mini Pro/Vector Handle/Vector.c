#include<stdio.h>
#include "vector.h"

int main()
{
	Vector u;
	Vector v;
	leer_vectores(&u,&v);
	printv(u);
	printv(v);
	printv(sum(u,v));
	return 0;
}

void leer_vectores(Vector *u, Vector *v){
	float a,b,c,d;
	printf("Inserte el vector u (separando componentes por coma):\n");
	scanf("%f,%f",&a,&b);
	printf("Inserte el vector v (separando componentes por coma):\n");
	scanf("%f,%f",&c,&d);
	u->x = a;
	u->y = b;
	v->x = c;
	v->y = d;
}

float dot(Vector u, Vector v){
	return (u.x*v.x)+(u.y*v.y);
}

Vector cross(Vector u, Vector v){
	return u;
}

Vector sum(Vector u, Vector v){
	Vector vr = {u.x+v.x,u.y+v.y};
	return vr;
}

void printv(Vector u){
	printf("(%f,%f)\n",u.x,u.y);
}
