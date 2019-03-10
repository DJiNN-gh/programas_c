/* Questão 03: Fazer uma função recursiva que, dado um número inteiro N, exiba o mesmo na base 2 (binária). */

#include <stdlib.h>
#include <stdio.h>

void fatorador (int dec);

int main (void){

	int N;

	printf("Insira um valor decimal: \n");
	scanf("%d", &N);

	fatorador(N);

	printf("\n");
return 0;}

void fatorador (int dec){

	if (dec > 1){

		fatorador(dec/2);}
	
	printf("%d", dec%2);}
