/* Pede-se o desenvolvimento de um programa que, através de um menu, permita ao usuário realizar as seguintes operações sobre uma lista (vetor): */

#include <stdio.h>
#include <stdlib.h>

int main (void){

	printf("Bem vindo(a).\n");

	chamador();

	do{
		fflush (stdin);	scanf("%c", &opcao);	opcao=toupper(opcao);
		switch (opcao){

			case 'I':
				printf("Qual valor deseja inserir? \n");
				scanf("%d", &valor);
				insersor(lista, valor, &contagem);
				chamador();
				break;

			case 'O':
				printf("Qual valor deseja remover? \n");
				scanf("%d", &valor);
				removedor_Ocorrencia(lista, tam_vet, valor, &contagem);	// Definir tamanho do vetor!
				chamador();
				break;

			case 'P':
				printf("Qual posicao deseja remover? \n");
				scanf("%d", &valor);
				removedor_Posicao(lista, valor, &contagem);
				chamador();
				break;

			case 'A':
				printf("Qual valor a ser alterado? \n");
				scanf("%d", &valor);
				printf("Qual o novo valor?\n");
				scanf("%d", &valorAux);
				alterador(lista, tam_vet, valor, valorAux, &contagem);
				chamador();
				break;

			case 'B':
				printf("Qual valor a ser buscado? \n");
				scanf("%d", &valor);
				buscador(lista, tam_vet, valor, &contagem);
				
				chamador();
				break;

			case 'L':
				mostrador(lista, &contagem);
				chamador();
				break;

			case 'S':

				chamador();
				break;

			default:
				printf("Opcao invalida. Escolha uma das opcoes validas\n");
				chamador();
				break;}

	} while (opcao != 'S');

return 0;}

// Funcao Chama Menu
void chamador (){

	printf("\t\tMENU\n\nEscolha uma das opcoes abaixo\n");
	printf("[I] Inserir\n");
	printf("[O] Deletar ocorrencia\n");
	printf("[P] Deletar posicao\n");
	printf("[A] Alterar\n");
	printf("[B] Buscar\n");
	printf("[L] Listar\n");
	printf("[S] Sair\n\n");
	printf("Opcao: \n");}

// Funcao Insere
void insersor (int array_i[], int valorInserir_i, int *contagem_i){	// Contador da posicao da lista

	array_i[*contagem_i]=valorInserir_i;
	&contagem_i++;}


// Funcao Remove Ocorrencia
void removedor_Ocorrencia (int array_i[], int tam_i, int valorRemover_i, int *contagem_i){

	int i=0;

	for (;i<tam_i;i++){

		if (array_i[i] == valorRemover_i){

			array_i[i]=array_i[*contagem_i];}
			*contagem_i--;}}

// Funcao Remove Posicao
void removedor_Posicao (int array_i[], int valorRemover_i, int *contagem_i){

	array_i[valorRemover_i]=array_i[*contagem_i];
	*contagem--;}

// Funcao Altera
void alterador (int array_i[], int tam_i, int valorAlterado_i, int valorAlterar_i, int *contagem_i){

	int i=0;

	for (;i<tam_i;i++){

		if (array_i[i] == valorAlterado_i){

			array_i[i]=array_i[*contagem];
			*contagem_i--;}}
		else{
			printf("Valor nao encontrado\n");}}

// Funcao Busca
int buscador (int array_i[], int tam_i, int valorBuscar_i, int *contagem_i){

	int i=0;

	for (;i<tam_i;i++){

		if (array_i[i] == valorBuscar_i){

			return ;}}
		else{
			return -1;}}

// Funcao Lista
void mostrador (int array_i[], int *contagem){

	int i=0;

	for (;i<=*contagem;i++){

		printf("Valor da posicao %d: %d\n", i++, array_i[i]);}}


// Funcao Termina
