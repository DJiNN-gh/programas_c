/* QUESTÃO 04:
Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...
Nota: observem que a diferença entre o 1o e 2o elementos é igual a 1, entre o 2o e 3o é igual a 2, entre o 3o e o 4o é igual a 3, e assim sucessivamente. */

#include <stdio.h>
#include <stdlib.h>

#define TAM_VET 50

void armazenador (int array_i[], int tam_i);

int main (void){


return 0;}

void armazenador (int array_i[], int tam_i){

	unsigned int j=1;

	array_i[0]=1;

	for(;j<tam_i;j++){

		array_i[j]=array_i[j-1]+j;}}


