/* Questão 04: Pede-se a implementação de uma função recursiva que exiba os n primeiros termos de uma PG (Progressão Geométrica), onde a1 é o seu primeiro termo e q a razão.
Observação: uma PG consiste em uma sequência de valores, iniciadas pelo valor a1. Os demais elementos são definidos como o anterior multiplicado pela razão. */

#include <stdio.h>
#include <stdlib.h>

void progressor (int termo1_i, int razao_i, unsigned int n);

int main (void){

	int a1, q;
	unsigned int n;

	printf("Insira um valor inicial, uma razao e o numero de termos desejados: \n");
	scanf("%d %d %d", &a1, &q, &n);

	progressor (a1, q, n);

return 0;}

void progressor (int termo1_i, int razao_i, unsigned int n){

	printf("%d,", termo1_i);

	if (n > 1){

		progressor ((termo1_i*=razao_i), razao_i, n-1);}}
