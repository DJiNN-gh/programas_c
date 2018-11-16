/* QUESTÃO 05:
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,4,8,16,32,... */

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int n, i;

	printf("Insira o valor de N: \n");
	scanf("%d", &n);

	for (i=1;i<=n;i*=2){
		printf("%d", i);}}
