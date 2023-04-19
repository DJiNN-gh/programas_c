/* QUESTÃO 02:
Implementar uma função que converta determinada temperatura em graus Celsius para graus Fahrenheit. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float conversor_C_to_F ();
float conversor_F_to_C ();

int main (void){

	char opConv;

	printf("Deseja realizar uma conversao de:\nA) Celsius para Fahrenheit\nB) Fahrenheit para Celsius\n \n");
	fflush(stdin);	scanf("%c", &opConv);	opConv=toupper(opConv);

	switch (opConv){

		case 'A':
			printf("Resultado: %f\n", conversor_C_to_F());
			break;
		case 'B': 
			printf("Resultado: %f\n", conversor_F_to_C());
			break;
		default:
			printf("Insira uma das opcoes!");
			break;}}

float conversor_C_to_F (){

	float celsius, resFahr;

	printf("Insira o valor em Celsius: \n");
	scanf("%f", &celsius);

	resFahr=((celsius/5)*9)+32;
	return resFahr;}

float conversor_F_to_C (){

	float fahrenheit, resCel;

	printf("Insira o valor em Fahrenheit: \n");
	scanf("%f", &fahrenheit);

	resCel=(((fahrenheit-32)/9)*5);
	return resCel;}
