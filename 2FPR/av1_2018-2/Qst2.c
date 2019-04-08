/* Questão 02 [3,0 pontos]:
Dada uma matriz M20x20 contendo valores inteiros, pede-se a implementação das seguintes funções:

a. Buscar o elemento X em M e, caso encontrado, retornar a posição (linha e coluna) 
de sua primeira ocorrência;
b. Determinar se trata-se de um quadrado mágico (ou seja, todas as colunas, linhas 
e diagonais – principal e secundária – apresentam o mesmo valor como soma de seus 
elementos). */

#include <stdio.h>
#include <stdlib.h>

void buscador (int matrix_i[20][20], int element, int *x, int *y);
int determinador (int matrix_i[20][20]);

int main (void){


return 0;}

// Função que busca por um determinado valor em uma matrix e retorna suas coordenadas
void buscador (int matrix_i[20][20], int element, int *x, int *y){

	unsigned int i, j;

	for (i=0;i<20;i++){

		for (j=0;j<20;j++){

			if (matrix_i[i][j] == element){

				*y=i;
				*x=j;

				exit(1);}}}}

// Função que determina se uma matrix é um quadrado mágico
int determinador (int matrix_i[20][20]){
	
	unsigned int i, j;
	int a=0, b=0;
	int arrayA_i[20], arrayB_i[20];

	for (i=0;i<20;i++){
		
		for (j=0;j<20;j++){

			arrayA_i[i]+=matrix_i[i][j];}}
	
	for (i=0;i<20;i++){

		for (j=0;j<20;j++){

			arrayB_i[i]+=matrix_i[j][i];}}

	for (i=0, j=0;i<20;i++, j++){

		a+=matrix_i[i][j];}

	for (i=0, j=19;i<20;i++, j--){

		b+=matrix_i[i][j];}

	for (i=0;i<20;i++){

		if (arrayA_i[i] != arrayB_i[i] && arrayA_i[i] != a && arrayA_i[i] != b)

			return 1;}

return 0;}
