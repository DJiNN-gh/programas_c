/* QUESTÃO 02: Desenvolver uma função que, dada uma matriz M15x20, determine se um número X se encontra na linha L da matriz. */

#include <stdio.h>
#include <stdlib.h>

int buscador (int matrix_i[15][20], int valor, unsigned int linha);

int main (void){


return 0;}

// Funcao que busca um determinado valor em uma determinada linha
int buscador (int matrix_i[15][20], int valor, unsigned int linha){

	unsigned int i, j;

	for (i=linha-1;i<linha;i++){

		for (j=0;j<20;j++){

			if (matrix_i[i][j] == valor){

				return 1;}}}

return 0;}
