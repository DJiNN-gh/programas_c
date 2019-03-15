/* QUESTÃO 01: O IMC (Índice de Massa Corporal) é um critério da Organização 
Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta
A fórmula é:
	IMC = peso / altura2
Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a 
sua condição de acordo com a tabela abaixo:

IMC em adultos		Condição

IMC < 18,5 		Abaixo do peso
18,5 ≤ IMC < 25,0 	Peso ideal
25,0 ≤ IMC < 30,0 	Sobrepeso
30,0 ≤ IMC < 35,0 	Obesidade grau 1
35,0 ≤ IMC < 40,0	Obesidade grau 2
ICM ≥ 40,0		Obesidade grau 3
*/

#include <stdio.h>
#include <stdlib.h>

#define IMC1	18.5
#define	IMC2	25.5
#define IMC3	30.0
#define IMC4	35.0
#define IMC5	40.0

int main (void){

float peso, altura, imc;

printf("Insira seu peso e altura (em m): \n");
scanf("%f %f", &peso, &altura);

imc=peso/(altura*altura);

if (imc < IMC1){
	printf("Abaixo do peso");}
else
if (imc >= IMC1 && imc < IMC2){
	printf("Peso ideal");}
else
if (imc >= IMC2 && imc < IMC3){
	printf("Sobrepeso");}
else
if (imc >= IMC3 && imc < IMC4){
	printf("Obesidade grau I");}
else
if (imc >= IMC4 && imc < IMC5){
	printf("Obesidade grau II");}
else{
	printf("Obesidade grau III");}
}
