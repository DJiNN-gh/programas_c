/* QUESTÃO 04:
Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no 
último ano. Faça um algoritmo que calcule o valor do crédito de acordo com a tabela abaixo.

Saldo Médio		Percentual
 
Inferior a 1000		nenhum crédito
 
de 1000 a 1500		20% do saldo médio
 
de 1501 a 2500		30% do saldo médio

acima de 2500		40% do saldo médio */

#include <stdio.h>
#include <stdlib.h>

#DEFINE PORC1 0.2	// Valores de calculo da porcentagem
#DEFINE PORC2 0.3
#DEFINE PORC3 0.4

int main (void){

float sMedio, cEspecial;

printf("Insira o saldo medio do ano anterior: \n");
scanf("%f", &sMedio);

if (sMedio<1000){
	cEspecial=0;
	printf("Voce possui R$%f de Credito Especial", cEspecial");}
else
if (sMedio>=1000 && sMedio<=1500){
	cEspecial=sMedio*PORC1;
	printf("Voce possui R$%f de Credito Especial", cEspecial");}
else
if (sMedio>=1501 && sMedio<=2500){
	cEspecial=sMedio*PORC2;
	printf("Voce possui R$%f de Credito Especial", cEspecial");}
else
if (sMedio>2500){
	cEspecial=sMedio*PORC3;
	printf("Voce possui R$%f de Credito Especial", cEspecial");}
}
