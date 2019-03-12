/* Questão 05:
Dada uma string s, desenvolver uma função recursiva que determine se s é ou não 
um palíndromo. */

#include <stdio.h>
#include <stdlib.h>

int palindromador (char string_c[], unsigned int tam_ui);

int main (void){

	char s[128];
	unsigned int a;

	printf("Insira um texto: \n");
	scanf("%s", s);

	a=strlen(s);

	determinador(s, a);

return 0;}

// Funcao que identifica se uma string e um palindromo
int palindromador (char string_c[], unsigned int tam_ui){		// Dois parâmetros são solitados, a string a ser analisada e o tamanho dessa string



	if (tam_ui>=0){		// O tamanho da string é utilizado para controlar o caso geral e para movimentar a comparação da string

		if (*string_c == string_c[tam_ui-1]){

			determinador (*string_c+1, tam_ui-1);}}

	else {

		return 0;}	// No caso da condicional de comparação entre as duas posições da string ser falso, a função irá retornar zero, indicando falha

return 1;}	// Caso a sequência de chamadas recursiva de comparação seja verdadeira, a função irá retornar um, indicando sucesso
