/* QUESTÃO 02: Desenvolver uma função que, dada uma matriz M15x20, determine se um número X se encontra na linha L da matriz. */

#include <stdio.h>
#include <stdlib.h>

int buscador (int matrix_i[][], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui, int valor);

int main (void){


return 0;}

// Funcao que busca um determinado valor em uma determinada linha
int buscador (int matrix_i[][], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui, int valor){

	unsigned int i, j;

	for (i=0;i<sizeColuna_ui;i++){

		for (j=0;j<sizeLinha_ui;j++){

			if (matrix_i[i][j] == valor){

				return 1;}}}

return 0;}
