/* QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as seguintes informações:
a) A quantidade de valores negativos digitados;
b) A média dos valores positivos.*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 3

int main (void){

	int contNeg=0, contPos=0, cont=1;
	float valor, medValor, soma;

	do{
		printf("Insira um valor real: \n");
		scanf("%f", &valor);

		if (valor < 0){
			contNeg++;}
		if (valor > 0){
			soma+=valor;	contPos++;}
		cont++;
	} while (cont <= NUM);

	medValor=soma/contPos;
	printf("Quantidade de valores negativos: %d\nMedia dos valores positivos: %.1f\n", cont, medValor);}
