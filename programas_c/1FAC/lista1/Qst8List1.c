/*QUESTÃO 08:
Faça um algoritmo para calcular a conta final de um hóspede de um hotel, considerando que:
	
	a) Devem ser obtidos o nome do hóspede, o tipo do apartamento utilizado 
	(A, B, C ou D),	o número de diárias utilizadas pelo hóspede e o valor do consumo 
	interno do hóspede;
	b) O valor da diária é determinado pela seguinte tabela:
Tipo de Apartamento	Valor da diária
A			R$ 350,00
B			R$ 275,00
C			R$ 200,00
D			R$ 150,00
	c) O valor da taxa de serviço equivale a 10% da conta.

A conta a ser apresentada ao cliente deve conter: o nome do hóspede, o tipo do apartamento, o valor total das diárias, o valor do consumo interno, o subtotal, o valor da taxa de serviço e o total geral.*/

#include <stdio.h>
#include <stdlib.h>

#define APTO_A 350
#define APTO_B 275
#define APTO_C 200
#define APTO_D 150
#define TXSVC 0.10

int main (void){

int diaria;
float vConsumo, sTotal, Tservico, tTotal;
char tApto, nHospede[128];

printf("Insira o nome do hospede: \n");
scanf("% s", &nHospede);
printf("Insira o tipo do quarto utilizado. Utilize a seguinte tabela como referencia:\nTipo deApartamento\nA\nB\nC\nD\n\n");
scanf("% c", &tApto);
printf("Insira o numero de diarias e o valor de consumo interno: \n");
scanf("%d %f", &diaria, &vConsumo);

tApto=toupper(tApto);

switch (tApto){
	case 'A':
	vDiaria=(float)diaria*APTO_A;
	break;
	
	case 'B':
	vDiaria=(float)diaria*APTO_B;
	break;

	case 'C':
	vDiaria=(float)diaria*APTO_C;
	break;

	case 'D':
	vDiaria=(float)diaria*APTO_D;
	break;}
	continue;

sTotal=vDiaria+vConsumo;
tServico=sTotal*TXSC;
tTotal=sTotal+tServico;

printf("---FORMULARIO DE INFORMACOES---\nNome do hospede-\t%s\nApto. utilizado-\t%c\nValor total das diarias-\t%.2f\nValor do consumo interno-\t%.2f\nSubtotal-\t%.2f\nTaxa de servico cobrada-\t%.2f\nTotal Geral-\t%.2f\n", nHospede, tApto, vDiaria, vConsumo, sTotal, tServico, tTotal)}
