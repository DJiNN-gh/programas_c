/* QUESTÃO 01: Faça um função que, dada uma matriz M8×5 de reais, gere a matriz Mt, sua transposta. */

#include <stdio.h>
#include <stdlib.h>

void transpositor (float matrixA_i[][], float matrixB_i[][], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui);

int main (void){


return 0;}

// Funcao que realiza a transposicao de uma matriz
void transpositor (float matrixA_i[][], float matrixB_i[][], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui){

	unsigned int i, j, k, l;

	for (j=0, l=0;j<sizeLinha_ui;j++, l++){

		for (i=0, k=0;i<sizeColuna_ui;i++, k++){

			matrixB_i[k][l]=matrixA_i[j][i]}}}
