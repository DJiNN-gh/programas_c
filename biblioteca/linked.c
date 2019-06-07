#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

// Exemplificando uma struct utilizada para guardar informações sobre álbuns de música
typedef struct album{	// Primeira declaração feita para contornar chamada do ponteiro
	char title[40];	// Chave que guarda o nome do álbum
	char artist[40];// Chave que guarda o nome do artista
	char genre[40]; // Chave que guarda o gênero do álbum
	int date;	// Chave que guarda o ano de lançamento do álbum
	no *next;	// Ponteiro que aponta para o próximo elemento da lista
	}tAlbum;	// Nome da estrutura/lista

// Outra maneira de definir o ponteiro que "linka" a lista
typedef tAlbum *tLista;

int main (void){

	// Definindo a variável usando a variável tLista
	// tLista l=NULL;
	struct album *l=NULL;

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
