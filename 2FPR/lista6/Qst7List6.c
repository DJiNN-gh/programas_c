/* QUESTÃO 07:
Suponha a existência de uma matriz D50x50, contendo as distâncias entre as 50 cidades de determinada Unidade da Federação.
Pede-se a implementação de uma função que, a partir dos dados contidos na matriz D,
determine a distância total de um trajeto que inclui a visita a diversas cidades.
Para isto, o trajeto será representado por um vetor de inteiros, contendo a sequência de cidades a serem visitadas.
Por exemplo, o vetor trajeto = {1, 4, 9, 23} informa que o trajeto iniciará na cidade 1, seguindo para as cidades 4, 9 e 23, nesta ordem. */

#include <stdio.h>
#include <stdlib.h>

float distancia (float matrix_f[50][50], int array_i[], int tam_i);

int main (void){


return 0;}

float distancia (float matrix_f[50][50], int array_i[], int tam_i){

	int i;
	float soma_f=0;

	for(i=0;i<tam_i-1;i++){

		soma_f=matrix_f[array_i[i]][array_i[i+1]];}
	
	return soma_f;}
