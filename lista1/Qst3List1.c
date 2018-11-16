/*QUESTÃO 03:
Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu sexo e 
altura, utilizando as seguintes fórmulas:
	para homens: (72,7*h)-58
	para mulheres: (62.1*h)-44.7
*/

#include <stdio.h>
#include <stdlib.h>

#DEFINE VAR1 72.2	// Valor 1 para formula Homens
#DEFINE VAR2 58		// Valor 2 para formula Homens
#DEFINE VAR3 62.1	// Valor 1 para formula Mulheres
#DEFINE VAR4 44.7	// Valor 2 para formula Mulheres

int main (void){

int altura;
float pIdeal;
char sexo;

printf("Insira a altura (em cm) e o sexo (M ou F)\n");
scanf("%d", &altura);
scanf("% c", &sexo);

sexo=toupper(sexo);
switch (sexo){

case 'M':

pIdeal=(VAR1*altura)-VAR2;
printf("Seu peso ideal e: %f\n", pIdeal);
break;

case 'F':

pIdeal=(VAR3*altura)-VAR4;
printf("Seu peso ideal e: %f\n", pIdeal);
break;

default:

printf("Informe o sexo corretamente!");
break;
}
}
