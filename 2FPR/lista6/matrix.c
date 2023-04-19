#include <stdio.h>
#include <stdlib.h>

#define TAM_MATRIX 5

void transpositor (int matrixA_i[] [], int matrixB_i[] [], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui);
int buscador (int matrix_i[] [], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui, int valor);
void gerador (void);

int main (void){


return 0;}

// Funcao que realiza a transposicao de uma matriz
void transpositor (int matrixA_i[] [], int matrixB_i[] [], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui){

	unsigned int i, j, k, l;

	for (j=0, l=0;j<sizeLinha_ui;j++, l++){

		for (i=0, k=0;i<sizeColuna_ui;i++, k++){

			matrixB_i[k][l]=matrixA_i[j][i]}}}

// Funcao que busca um determinado valor em uma determinada linha
int buscador (int matrix_i[] [], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui, int valor){

	unsigned int i, j;

	for (i=0;i<sizeColuna_ui;i++){

		for (j=0;j<sizeLinha_ui;j++){

			if (matrix_i[i] [j] == valor){

				return 1;}}}

return 0;}

// Funcao que gera uma determinada matriz 5x5
void gerador (void){

	unsigned int i, j, k;
	int matrix_i[5] [5];

	for (i=0, k=1;i<TAM_MATRIX;i++, k++){

		for (j=0;j<TAM_MATRIX;){

			matrix_i[i] [j]=i+k;}}}

// Funcao que determina se uma dada matriz e simetrica
void verificador (int matrix_i[] [], unsigned int sizeLinha_ui, unsigned int sizeColuna_ui){

	unsigned int i, j;

	for (i=0;i<sizeColuna_ui;i++){

		for(j=0;j<sizeLinha_ui;j++){



