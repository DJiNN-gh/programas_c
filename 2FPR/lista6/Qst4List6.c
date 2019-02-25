/*QUESTÃO 04: Fazer uma função que, dada uma matriz M6x6 determine se ela é simétrica. */

#include <stdio.h>
#include <stdlib.h>

#define TAM_MATRIX 5 

int verificador (int matrix_i[TAM_MATRIX][TAM_MATRIX]);

int main (void){


return 0;}

// Funcao que determina se uma dada matriz e simetrica
int verificador (int matrix_i[TAM_MATRIX][TAM_MATRIX]){

	unsigned int i, j;

	for (i=0;i<sizeColuna_ui;i++){

		for(j=0;j<sizeLinha_ui;j++){

			if (matrix_i[i][j] != matrix_i[j][i]){

				return 0;}}}

return 1;}
