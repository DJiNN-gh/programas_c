#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	no *prox;
	}tNo;

// Outra maneira de definir o ponteiro que "linka" a lista
typedef tNo *tLista;

void exibidor (tLista l);	// Função que exibe todos os valores armazenados numa estrutura
tLista buscador (tLista l, int element_i);	// Função que busca por um determinado valor armazenado em uma estrutura
int alterador (tLista l, int elementIn_i, int elementOut_i);	// Função que altera um valor existente em uma estrutura por um novo valor
int insersor (tLista l, int element_i);	// Função que insere um valor na estrutura

int main (void){

	// Definindo a variável usando a variável tLista
	// tLista l=NULL;
	struct no *l=NULL;

return 0;}

void exibidor (tLista l){

	tLista aux=l;

	while (aux != NULL){

		printf("%d\n", aux->valor);
		aux=aux->prox;}}

tLista buscador (tLista l, int element_i){

	tLista aux=l;

	while (aux){

		if (aux->valor == element_i){

			return aux;}

		aux=ux->prox;}
	
return NULL;}

int alterador (tLista l, int elementIn_i, int elementOut_i){

	tLista aux=l;
	unsigned int cont_ui;

	while (aux){

		if (aux->valor == elementIn_i){

			aux->valor=novo;
			cont_ui++;}
			
		aux=aux->prox;}

	return cont_ui;}

int insersor (tLista l, int element_i){

	tLista aux=(tLista) malloc(sizeof(tNo));

	if (!aux){

		return 1;}	// Retorna 1, indicando verdadeiro para erros

	else{
		aux->valor=element_i;
		aux->prox=l;
		l=aux;
		return 1;}}

// Função que remove todas as estruturas de uma lista
void destruidor (tLista *l){

	tLista aux;

	while (*l != NULL){

		aux=*l;
		*l=(*l)->prox;
		free(aux);}}

// Função que remove todas as estruturas de uma lista de maneira recursiva
void rec_destruidor (tLista *l){

	if (*l){

		rec_destruidor(&(*l)->prox);
		free(*l);
		*l=NULL;}}
