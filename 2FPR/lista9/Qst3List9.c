#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct tNo{
	int valor_i;
	tNo *prox;} tLista;

int identificador (tLista l1, tLista l2);

int main (void){


return 0;}

// Função que determina se duas listas são iguais (estão na mesma ordem)
int identificador (tLista l1, tLista l2){

	tLista aux1=l1, aux2=l2;

	while ((aux1 != NULL) && (aux2 != NULL)){

		if (aux1->valor != aux2->valor){

			return 1;}	// Retorna 1 indicando verdadeiro para erros
		
		aux1=aux1->prox;
		aux2=aux2->prox;}

		if ((aux1 == NULL) && (aux2 == NULL)){

			return TRUE;}	// Retorna 1 indicando falso para erros

		else{

			return FALSE;}} 	// Retorna 0 indicando verdadeiro para erros


