/* QUESTÃO 02: Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o número 
de um planeta. Ao final, com auxílio da tabela abaixo, calcular o peso desta pessoa 
no planeta escolhido

Número	Planeta		Gravidade Relativa g
1	Mercurio	0,37
2	Venus		0,88
3	Marte		0,38
4	Jupiter		2,64
5	Saturno		1,15
6	Urano		1,17
7	Netuno		1,18

Para calcular o peso no planeta escolhido, utilize a seguinte fórmula:

pesoPlaneta = (pesoTerra/10) * gravidadePlaneta */

#include <stdio.h>
#include <stdlib.h>

#define MER 0.37
#define VEN 0.88
#define MAR 0,38
#define JUP 2,64
#define SAT 1,15
#define URN 1,17
#define NET 1,18

int main (void){

float peso, pPlaneta;
int numPlaneta;

printf("Insira o seu peso (em Kg) e selecione um planeta a partir da tabela a seguir\nNumero\tPlaneta\n1\tMercurio\n2\tVenus\n3\tMarte\n4\tJupiter\n5\tSaturno\n6\tUrano\n7\tNetuno\n\n");
scanf("%f %d", &peso, &numPlaneta);

switch (numPlaneta){

case 1: 
	pPlaneta=peso*MER;
	printf("Seu peso em Mercurio e: %.2fKgf\n", pPlaneta);
	break;
case 2:
	pPlaneta=peso*VEN;
	printf("Seu peso em Venus e: %.2f\nKgf", pPlaneta);
	break;
case 3:
	pPlaneta=peso*MAR;
	printf("Seu peso em Marte e: %.2f\nKgf", pPlaneta);
	break;
case 4:
	pPlaneta=peso*JUP;
	printf("Seu peso em Jupiter e: %.2f\nKgf", pPlaneta);
	break;
case 5:
	pPlaneta=peso*SAT;
	printf("Seu peso em Saturno e: %.2f\nKgf", pPlaneta);
	break;
case 6:
	pPlaneta=peso*URN;
	printf("Seu peso em Urano e: %.2f\nKgf", pPlaneta);
	break;
case 7:
	pPlaneta=peso*NET;
	printf("Seu peso em Netuno e: %.2f\nKgf", pPlaneta);
	break;
default:
	printf("Insira corretamente o numero correspondente a um planeta!\n");
	break;
}}


