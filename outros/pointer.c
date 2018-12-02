#include <stdio.h>
#include <stdlib.h>

int main (void){

	int a[] = {2017, 2018, 2019};

	for (unsigned int i=0;i<3;i++){

		printf("Elemento na posicao %d: %d\n", i, a[i]);}

		printf("Elemento na primeira posicao: %d\n", *a);
		printf("Elemento na segunda posicao: %d\n", *a+=1);
		printf("Elemento na terceira posicao: %d\n", *a+=1);
	
		printf("O endereco de a e: %p\n", a);

return 0;}
