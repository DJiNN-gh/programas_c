/* QUESTÃO 08:
Considere uma matriz Palavras 20x20 de caracteres que simule o jogo caça-palavras. 
Pede-se a implementação de uma função que busque a palavra CASA na matriz. Caso seja 
encontrada, deve ser determinada a posição (linha e coluna) inicial de sua 
primeira ocorrência.
Obs: a palavra pode estar tanto na horizontal quanto na vertical, em ambos os sentidos, porém nunca inclinada. */

#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int cacador (char matrix_c[TAM][TAM], int *x, int *y);

int main (void){


return 0;}

int cacador (char matrix_c[TAM][TAM], int *x, int *y){

	unsigned int i, j;

	for (i=0;i<20;i++){

		for (j=0;j<20;j++){

			if (j<17){
				
				if (matrix_c[i][j] == 'C' && matrix_c[i][j+1] == 'A' && matrix_c[i][j+2] == 'S' && matrix_c[i][j+3] == 'A'){

					*x=j;
					*y=i;

					return 0;}}}}

	for (i=19;i>=0;i--){

		for (j=19;j>=0;j--){

			if (j>2){

				if (matrix_c[i][j] == 'C' && matrix_c[i][j-1] == 'A' && matrix_c[i][j-2] == 'S' && matrix_c[i][j-3] == 'A'){

					*x=j;
					*y=i;

					return 0;}}}}

	for (j=0;j<20;j++){

		for (i=0;i<20;i++){

			if (i<17){

				if (matrix_c[i][j] == 'C' && matrix_c[i+1][j] == 'A' && matrix_c[i+2][j] == 'S' && matrix_c[i+3][j] == 'A'){

					*x=j;
					*y=i;

					return 0;}}}}

	for (j=19;j>=0;j--){

		for (i=19;i>=0;i--){

			if (i>2){

				if (matrix_c[i][j] == 'C' && matrix_c[i-1][j] == 'A' && matrix_c[i-2][j] == 'A' && matrix_c[i-3][j] == 'A'){

					*x=j;
					*y=i;

					return 0;}}}}
return 1;}
