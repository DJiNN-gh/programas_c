#include <stdio.h>

/*
	Um dos tipos de dados mais comuns em linguagens de programação é tipo caractere, do character, comumente abrevido como char
	A característica mais essencial deste tipo de dado é a finalidade de guardar os valores utilizados para a representação
	de caracteres, tendo sua interpretação associada a um valor por muitos compiladores diferentes.

	Na linguagem C, o tipo char é sempre um tipo de tamanho 8 bits/1 byte, tendo representações de 0 a 255.
	Esta limitação de capacidade é utilizada para conter os muitos caracteres alfanuméricos utilizados na computação, definidos
	no padrão ASCII, acrônimo para American Standard Code for Information Interchange, ou Padrão de Código/Cifra Americano para Intercâmbio de Informação
	em português.

	Apesar da associação com caracteres, uma variável do tipo char pode ainda armazenar valores do tipo inteiro e exibi-los.
	Nota-se que, na linguagem C, podemos ler e escrever valores inteiros como caracteres e vice-versa. A resultante dependerá
	exclusivamente da chamada do tipo.
*/

int main (void){
	
	char c;
	unsigned char unsg_c;
	unsigned int unsg_i;

	// Análise de uma variável do tipo char
	printf("Tamanho de C (char) em bytes: %zu\t Em bits: %zu\n", sizeof c, sizeof c*8);
	printf("Valor de C (char): %d\n", c=127);
	printf("Valor de C (char) + 1: %d\n\n", ++c);

	printf("Valor de C: %d\n", c=10);
	printf("Valor de C: %d\n", c=0xa);
	printf("Valor de C: %d\n", c='\n');

	putchar(c);

	// Análise de uma variável do tipo char sem sinal
	printf("Tamanho de C (unsigned char) em bytes: %zu\t Em bits: %zu\n", sizeof unsg_c, sizeof unsg_c*8);
	printf("Valor de C (unsigned char): %d\n", unsg_c=255);
	printf("Valor de C (unsigned char) + 1: %d\n\n", ++unsg_c);

	printf("\t--Tabela ASCII--\n");

	// Pode-se utilizar uma variável de um tipo qualquer, desde que diferente do tipo float, para realizar a impressão de caracteres
	// Isto porque o valor associado à chamada de um tipo char resulta num caractere, sem interferência ou validação do tipo de dado
	for (unsg_i=0;unsg_i<256;unsg_i++){

		printf("Valor: %d\t Caractere: %c\n", unsg_i, unsg_i);
		}

	// Pode-se, dada a natureza da interpretação dos caracteres e seus valores associados, realizar testes lógicos e condicionais
	for (c='A';c <= 'z';c++){

		printf("Valor de C: %d\t Caractere: %c\n", c, c);
	}

return 0;
}