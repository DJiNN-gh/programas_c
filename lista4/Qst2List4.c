/* QUESTÃO 02:
Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int n, i, soma=0;

	printf("Insira um valor inteiro: \n");
	scanf("%d", &n);

	for (i=1;i<=n;i++){

		soma+=i;}

	printf("Soma dos valores: %d\n", soma);}
