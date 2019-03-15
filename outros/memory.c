#include <stdio.h>
#include <stdlib.h>

/* A função malloc pode ser declarada como uma constante
 *
 * #define MALLOC(p, size) {\
 * p=malloc(size);\
 * if(p == NULL){\
 * 	fprintf(stderr, "Memoria insuficiente\n");\
 * 	exit(true);\}
 * 	\} */

void *malloc_s (size_t size);

int main (void){



return 0;}

void *malloc_c(size_t size){

	void *p;
	p=malloc(size);

	if(p == NULL){

		fprintf(stderr, "Memoria insuficiente\n");
		exit(true);}

	return p;}
