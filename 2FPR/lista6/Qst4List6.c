/*QUESTÃO 04: Fazer uma função que, dada uma matriz M6x6 determine se ela é simétrica. */

#include <stdio.h>
#include <stdlib.h> 

int verificador (int matrix_i[6][6]);

int main (void){


return 0;}

// Funcao que determina se uma dada matriz e simetrica
int verificador (int matrix_i[6][6]){

	unsigned int i, j;

	for (i=0;i<6;i++){

		for(j=0;j<6;j++){

			if (matrix_i[i][j] != matrix_i[j][i]){

				return 0;}}}

return 1;}
