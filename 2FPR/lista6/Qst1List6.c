/* QUESTÃO 01: Faça um função que, dada uma matriz M8×5 de reais, gere a matriz Mt, sua transposta. */

#include <stdio.h>
#include <stdlib.h>

void transpositor (float matrixA_i[8][5], float matrixB_i[5][8]);

int main (void){


return 0;}

// Funcao que realiza a transposicao de uma matriz
void transpositor (float matrixA_i[8][5], float matrixB_i[5][8]){

	unsigned int i, j, k, l;

	for (i=0;i<8;i++){

		for (j=0;j<5;j++){

			matrixB_i[j][i]=matrixA_i[i][j]}}}
