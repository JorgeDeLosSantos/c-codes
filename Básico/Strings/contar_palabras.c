#include<stdio.h>
#include<string.h>


int main(){
	//char texto[1000];
	char linea[100];
	char archivo[50] = "texto.txt";
	FILE *fid;
    
	fid = fopen(archivo, "rt");
	if (fid == NULL)
	{
		return 0;
	}
	while (!feof(fid))
	{
		fgets(linea, 100, fid);
		puts(linea);
	}
	return 0;
}
