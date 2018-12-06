/* 
QUESTÃO 04:
Implementar um programa que exiba os N primeiros termos de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int n, a1, razao, i;

	printf("Insira os valores de N, do primeiro termo e da razao: \n");
	scanf("%d %d %d", &n, &a1, &razao);

	for (i=a1;i<=n;i+=razao){
		
		printf("%d ", i);}}
