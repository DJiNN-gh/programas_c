/* QUESTÃO 06: Faça um programa que leia um número N inteiro, menor do que 20 (se for maior ou igual a 20, o programa deve exibir uma mensagem de erro). Após isso, o programa deve imprimir os números no intervalo de 1 a 99 cujos algarismos somem N.*/

#include <stdio.h>
#include <stdlib.h>

#define LIM 19
#define DEC 10
#define ATE 99

int main (void){

	int n, i, dez, uni, soma;

	printf("Insira um valor inteiro inferior a 20: \n");
	scanf("%d", &n);

	if (n >= LIM){
	       printf("Valor invalido!");}
	else{	
	for (i=1;i<=ATE;i++){
		dez=i/DEC;	uni=i%DEC;
		soma=dez+uni;
		
		if (soma == n){
			printf("Valor: %d\t", i);}}}}		
