/* QUESTÃO 01:
Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores a N. */

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int n, i;

	printf("Insira um valor: \n");
	scanf("%d", &n);

	for (i=0;i<=n;i+=2){
		printf("Numeros inferiores a N: %d\t", i);}}
