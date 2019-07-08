#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
	char *nome;
	float av1;
	float av2;
} tLista;

typedef struct node{
	int chave;
	struct node *next;
} tNode;

typedef 

// Função referente a questão 1
void questao_01 (char *string_c);
// Função referente a questão 2
int questao_02 (tNode);
int main (void){


return 0;
}

// Função que recebe um vetor de caracteres e, recursivamente, imprime-o na tela, de maneira inversa
void questao_01 (char *string_c){

	// Testa para ver se o vetor em determinada posição é igual a \0, ou seja, o final de uma string
	if (*string_c != '\0'){

		// Chama novamente a função, somando 1 ao seu endereço de memória, movendo o índice
		questao_01(string_c+1);
		printf("%c", *string_c);
	}

}
