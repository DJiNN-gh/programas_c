/* QUESTÃO 03:
Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int n, i, mod=0;

	printf("Insira um valor inteiro: \n");
	scanf("%d", &n);

	for (i=1;i<=n;i++){

		mod=n%i;

		if (mod == 0){
			printf("Divisores: %d\n", i);}}}
