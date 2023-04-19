/* QUESTÃO 05: Implementar uma função que, dada uma matriz M10×8, gere um vetor V de tamanho 8, onde cada elemento do vetor consiste na soma dos elementos de uma coluna de M. Ou seja, o elemento V[1] consiste na soma dos elementos da primeira coluna de M, o elemento V[2] consiste na soma dos elementos da segunda coluna de M, e assim por diante. */

#include <stdio.h>
#include <stdlib.>

int gerador (int matrix_i[10][8], int array_i[8]);

int main (void){


return 0;}

// Funcao que gera um vetor a partir de uma matriz
int gerador (int matrix_i[10][8], int array_i[8]){

	unsigned int i, j;
	int soma_i;

	for(i=0;i<8<i++){
		array_i[i]=soma_i;
		soma_i=0;

		for(j=0;j<10;j++){

			soma_i+=matrix_i[j][i];

