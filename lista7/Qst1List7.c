/* QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos de N compreendidos no intervalo definido por A e B. */

#include <stdio.h>
#include <stdlib.h>

void intervalo (int N);

int main (void){

	int N;

	printf("Insira o valor de N: \n");
	scanf("%d", &N);

	intervalo(N);}

void intervalo (int N){

	int mult, i, A, B;

	printf("Insira os valores de comeco e termino do intervalo: \n");
	scanf("%d %d", &A, &B);
	for(i=A;i<=B;i++){

	if (i % N == 0){
		printf("Multiplo de N * %d: %d\t", i/N, i);}}}
