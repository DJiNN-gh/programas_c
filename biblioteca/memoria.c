#include <stdio.h>
#include <stdlib.h>

/* 
 * As funções de manipulação de memória presentes na biblioteca stdlib.h servem
 * para criar, remover ou sobrescrever um espaço de memória de modo dinâmico
 * (run-time).
 *
 * A presença dessas funções permitem ao desenvolvedor ajustar finamente o uso
 * de memória de um certo programa, compensado o fato da linguagem C não possuir
 * um gestor de memória embarcado, como outras linguagens possuem.
 *
 * Quanto as funções, são elas:
 *
 * malloc() 
 * calloc()
 * free()
 * realloc()
 *
 * #define MALLOC(p, size) {\
 * p=malloc(size);\
 * if(p == NULL){\
 * 	fprintf(stderr, "Memoria insuficiente\n");\
 * 	exit(true);\}
 * 	\} 
 *
 */

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
