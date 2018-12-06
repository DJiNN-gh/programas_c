/* QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo termo da sequência de Fibonacci. */

#include <stdio.h>
#include <stdlib.h>

int fibo (int N);

int main (void){

	int N;

	printf("Insira o termo desejado: \n");
	scanf("%d", &N);
	printf("O termo e: %d\n", fibo(N));}

	// fibo(N);}

int fibo (int N){

	int term1=0, term2=1, termRes, i;
		
	for(i=3;i<=N;i++){

		termRes=term1+term2;
		term1=term2;
		term2=termRes;}
		
		// printf("Termo: %d\n\n", term1);
		// printf("Termo: %d\n\n", termRes);}
		
		return termRes;}
