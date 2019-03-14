/* Questão 02: Desenvolver uma função recursiva que exiba todos os múltiplos do número
N, inferiores ao valor V. */

#include <stdio.h>
#include <stdlib.h>

void multiplicador (int N, int V);

int main (void){

	int n, v;

	printf("Insira um valor para calcular os multiplos: \n");
	scanf("%d", &n);
	printf("Insira um valor limite: \n");
	scanf("%d", &v);

	multiplicador(n, v);

return 0;}

// Funcao que exibe os multiplos de um numero N

void multiplicador (int N, int V){

	unsigned int Q;

	if(V >= N){

		multiplicador(N, V-N);}

	Q=V/N;
	printf("Multiplo: %u\t", N*Q);}
