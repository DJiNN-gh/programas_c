/* QUESTÃO 02: Faça um programa que exiba todos os elementos da seguinte série, assim como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1*/

#include <stdio.h>
#include <stdlib.h>

#define MESES 12
#define PORC 100

int main (void){

	int qAnos, i;
	float vAPlic, txRend, vAplicFinal;

	printf("Insira o valor de aplicacao, a taxa de rendimento e a quantidade de anos: \n");
	scanf("%f %f %d", &vAPlic, &txRend, &qAnos);

	qAnos*=MESES;
	txRend/=PORC;

	for (i=1;i<=qAnos;i++){
		vAplic+=vAplic*txRend;}

	vFinalAplic=vAplic;
	printf("Valor ao final do rendimento: R$%.2f\n", vFinalAplic);}
