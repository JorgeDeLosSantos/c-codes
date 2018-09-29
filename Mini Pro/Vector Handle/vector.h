typedef struct vector{
	float x;
	float y;
}Vector;

void leer_vectores(Vector *u, Vector *v);
float dot(Vector u, Vector v);
Vector cross(Vector u, Vector v);
Vector sum(Vector u, Vector v);
float mod(Vector u);
void printv(Vector u);
