/* QUESTÃO 01: O IMC (Índice de Massa Corporal) é um critério da Organização 
Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta
A fórmula é:
	IMC = peso / altura2
Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a 
sua condição de acordo com a tabela abaixo:

IMC em adultos		Condição

IMC < 18,5 
18,5 ≤ IMC < 25,0 
25,0 ≤ IMC < 30,0 
30,0 ≤ IMC < 35,0 
35,0 ≤ IMC < 40,0
ICM ≥ 40,0
*/

#include <stdio.h>
#include <stdlib.h>

#DEFINE ICM1	18.5
#DEFINE	ICM2	25.5
#DEFINE ICM3	30.0
#DEFINE ICM4	35.0
#DEFINE ICM5	40.0

int main (void){

float peso, altura, icm;

printf("Insira seu peso e altura (em m): \n");
scanf("%f %f", &peso, &altura);

icm=peso/(altura*altura);

if (icm < ICM1){
	printf("Abaixo do peso");}
else
if (icm >= ICM1 && icm < ICM2);{
	printf("Peso ideal");}
else
if (icm >= ICM2 && icm < ICM3){
	printf("Sobrepeso");}
else
if (icm >= ICM3 && icm < ICM4){
	printf("Obesidade grau I);}
else
if (icm >= ICM4 && icm < ICM5){
	printf("Obesidade grau II);}
else
if (icm >= ICM5){
	printf("Obesidade grau III);}
}
