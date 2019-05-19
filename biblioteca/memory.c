#include <stdio.h>
#include <stdlib.h>

/* A função malloc pode ser declarada como uma macro
 *
 * #define MALLOC(p, size) {\
 * p=malloc(size);\
 * if(p == NULL){\
 * 	fprintf(stderr, "Memoria insuficiente\n");\
 * 	exit(true);\}
 * 	\} */

void *malloc_s (size_t size);

int main (void){

	
	int *b;
	// Exemplo com alocamento de vetores
	printf("Insira o numero de posicoes: \n");
	scanf("%d", &n);

	b=(int*) malloc(N * sizeof(int));


	int **c;
	// Exemplo com alocamento de matrizes
	for (i=0; i<lin;i++){

		c[i]=(int*) malloc(col * sizeof(int));}

	a=(float**) malloc(10 *sizeof(float*));
	for (i=a;i<10;i++){

		a[i]=(float*) malloc(20 * sizeof(float));}

return 0;}

void *malloc_c(size_t size){

	void *p;
	p=malloc(size);

	if(p == NULL){

		fprintf(stderr, "Memoria insuficiente\n");
		exit(true);}

	return p;}
