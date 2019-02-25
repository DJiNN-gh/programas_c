/* QUESTÃO 03: Desenvolver uma função que gere a seguinte matriz M5x5:

	1	2	3	4	5
	2	3	4	5	6
	3	4	5	6	7
	4	5	6	7	8
	5	6	7	8	9

*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MATRIX 5

void gerador (void);

int main (void){


return 0;}

// Funcao que gera uma determinada matriz 5x5
void gerador (int matrix_i [TAM_MATRIX][TAM_MATRIX]){

	unsigned int i, j, k;

	for (i=0, k=1;i<TAM_MATRIX;i++, k++){

		for (j=0;j<TAM_MATRIX;){

			matrix_i[i][j]=j+k;}}}

