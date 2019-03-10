/* QUESTÃO 03: Desenvolver uma função que gere a seguinte matriz M5x5:

	1	2	3	4	5
	2	3	4	5	6
	3	4	5	6	7
	4	5	6	7	8
	5	6	7	8	9

*/

#include <stdio.h>
#include <stdlib.h>

void gerador (int matrix_i [5][5]);

int main (void){


return 0;}

// Funcao que gera uma determinada matriz 5x5
void gerador (int matrix_i [5][5]){

	unsigned int i, j, k;

	for (i=0, k=1;i<5;i++, k++){

		for (j=0;j<5;j++){

			matrix_i[i][j]=j+k;}}}

