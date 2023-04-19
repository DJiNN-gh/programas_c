/* QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo múltiplo comum) entre dois números. */

#include <stdio.h>
#include <stdlib.h>

int MMC (int valor1, int valor2);

int main (void){

	int vMMC1, vMMC2;

	printf("Insira dois valores: \n");
	scanf("%d %d", &vMMC1, &vMMC2);

	printf("Resultado: %d\n", MMC(vMMC1, vMMC2));

	return 0;}

int MMC (int valor1, int valor2){

	int i, j;

	// printf("%d %d\n\n", valor1, valor2);

	if (valor1 == valor2){
		return valor1;}
	
	else
	if (valor1 >= valor2){
		for(i=valor2, j=valor1;;i+=i){
			
			if (i == j){
				return i;}
			else
			if (i > j){
				j+=j;}}

	return i;}}
