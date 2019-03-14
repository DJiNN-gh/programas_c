/* Questão 05:
Dada uma string s, desenvolver uma função recursiva que determine se s é ou não 
um palíndromo. */

#include <stdio.h>
#include <stdlib.h>

int palindromador (char string_c[], unsigned int tam_ui);

int main (void){

	char s[];
	unsigned int a;

	printf("Insira um texto: \n");
	scanf("%s", &s);

	a=strlen(&s);

	determinador(s, a);

return 0;}

int palindromador (char string_c[], unsigned int tam_ui){


	if (tam_ui>=0){

		if (*string_c == string_c[tam_ui-1]){

			determinador (*string_c+1, tam_ui-1);}

	else {

		return 0;}}

return 1;}
