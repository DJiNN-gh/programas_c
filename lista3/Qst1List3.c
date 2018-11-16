/* QUESTÃO 01: Faça um programa que leia um número inteiro positivo N e exiba todos os múltiplos de Y inferiores a N, onde N e Y são fornecidos pelo usuário. */

#include <stdio.h>
#include <stdlib.h>

int main (void){

int n, y, i;

printf("Insira dois valores positivos: \n");
scanf("%d %d", &n, &y);

for(i=0;i<n;i*=y){
	printf("%d\t", i);}}
