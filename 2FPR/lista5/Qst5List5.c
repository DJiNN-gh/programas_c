/* Questão 05:
Dada uma string s, desenvolver uma função recursiva que determine se s é ou não 
um palíndromo. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromador (char string_c[], unsigned int tam_ui);

int main (void){

	char s[128];
	unsigned int a;

	printf("Insira um texto: \n");
	scanf("%s", s);

	a=strlen(s);

	printf("%d\n", palindromador(s, a));

return 0;}

// Função que identifica se uma string é um palíndromo
int palindromador (char string_c[], unsigned int tam_ui){		// Dois parâmetros são solitados, a string a ser analisada e o tamanho dessa string



	if (tam_ui>=0){		// O tamanho da string é utilizado para controlar o caso geral e para movimentar a comparação da string

		if (*string_c == string_c[tam_ui-1]){

			palindromador (string_c+=1, tam_ui-1);}	// O endereço da posição inicial da string é acrescido em um, enquanto a posição final decresce igualmente

	else {

		return 0;}}	// No caso da condicional de comparação entre as duas posições da string ser falso, a função irá retornar zero, indicando falha

return 1;}	// Caso a sequência de chamadas recursiva de comparação seja verdadeira, a função irá retornar um, indicando sucesso
