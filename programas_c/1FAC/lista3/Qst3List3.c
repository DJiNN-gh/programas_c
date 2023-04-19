/* QUESTÃO 03: Joãozinho investiu Q reais em uma aplicação com rendimento fixo de R% ao mês. Pede-se a implementação de um programa que calcule o valor (e exiba- o) disponível na conta de Joãozinho após A anos de investimento. */

#include <stdio.h>
#include <stdlib.h>

#define MESES 12
#define PORC 100

int main (void){

	int qAnos, i;
	float vAplic, txRend, vFinalAplic;

	printf("Insira o valor de aplicacao, a taxa de rendimento e a quantidade de anos: \n");
	scanf("%f %f %d", &vAplic, &txRend, &qAnos);
	
	qAnos*=MESES;
	txRend/=PORC;

	for (i=1;i<=qAnos;i++){
		vAplic+=vAplic*txRend;}

	vFinalAplic=vAplic;
	printf("Valor ao final do rendimento: R$.2f\n", vFinalAPlic);}
