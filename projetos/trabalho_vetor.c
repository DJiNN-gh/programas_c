/* Pede-se o desenvolvimento de um programa que, através de um menu, permita ao usuário realizar as seguintes operações sobre o vetor:
1) Inserção de um novo número;
2) Remoção de determinado valor;
3) Remoção do elemento que encontra-se
em uma dada posição;
4) Alteração de um valor por outro;
5) Busca de determinado número, retornando
a sua posição (caso exista no vetor) ou o
valor -1 se não for encontrado;
6) Exibição de todos os elementos do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM_VET 10

void chamador (unsigned int *contagem_ui);	// Funcao que exibe menu
int insersor (int array_i[], int valorInserir_i, unsigned int *contagem_ui);	// Funcao que insere um valor em na ultima posicao livre do vetor
void removedor_Ocorrencia (int array_i[], int valorRemover_i, unsigned int *contagem_ui);	// Funcao que remove um determinado valor do vetor
int removedor_Posicao (int array_i[], int valorRemover_i, unsigned int *contagem_ui);	// Funcao que remove o valor de uma determinada posicao do vetor
int alterador (int array_i[], int valorAlterado_i, int valorAlterador_i, unsigned int *contagem_ui);	// Funcao que altera um determinado valor por outro
int buscador (int array_i[], int valorBuscar_i, unsigned int *contagem_ui);	// Funcao que busca um determinado valor no vetor
void mostrador (int array_i[], unsigned int *contagem_ui);	// Funcao que exibe os valores contidos no vetor
void limpador (int array_i[]);	// Funcao que limpa o vetor (zera todas as suas posicoes)

int main (void){

	char opcao_c;
	int valor_i, valorEntrada_i, valorSaida_i;
	unsigned int contagem_ui=0;
	int lista_i[TAM_VET];	// Aqui entraria malloc para definir um tamanho para o vetor dinamicamente, mas infelizmente nao podemos utilizar 

	printf("Bem vindo(a).\n");

	limpador(lista_i);

	do{

	chamador(&contagem_ui);
		
		fflush(stdin);	scanf("%c", &opcao_c);	opcao_c=toupper(opcao_c);

		switch (opcao_c){

			case 'I':
				printf("Qual valor deseja inserir? \n");
				scanf("%d", &valor_i);
				insersor(lista_i, valor_i, &contagem_ui);
				break;

			case 'O':
				printf("Qual valor deseja remover? \n");
				scanf("%d", &valor_i);
				removedor_Ocorrencia(lista_i, valor_i, &contagem_ui);
				break;

			case 'P':
				printf("Qual posicao deseja remover? \n");
				scanf("%d", &valor_i);
				removedor_Posicao(lista_i, valor_i, &contagem_ui);
				break;

			case 'A':
				printf("Qual valor a ser alterado? \n");
				scanf("%d", &valorEntrada_i);
				printf("Qual o novo valor? \n");
				scanf("%d", &valorSaida_i);
				alterador(lista_i, valorEntrada_i, valorSaida_i, &contagem_ui);
				break;

			case 'B':
				printf("Qual valor a ser buscado? \n");
				scanf("%d", &valor_i);
				printf("Seu valor esta na posicao: %d\n", buscador(lista_i, valor_i, &contagem_ui));
				break;

			case 'L':
				mostrador(lista_i, &contagem_ui);
				break;

			default:
				printf("Opcao invalida. Escolha uma das opcoes informadas\n");
				break;}

	} while (opcao_c != 'S');

printf("Encerrando... Tenha um bom dia!\n\n");
return 0;}

// Funcao Chama Menu
void chamador (unsigned int *contagem_ui){

	printf("\t\t--MENU--\n\nEscolha uma das opcoes abaixo\n");
	
	if (*contagem_ui < TAM_VET){
		printf("[I] Inserir\n");}
	printf("[O] Deletar ocorrencia\n");
	printf("[P] Deletar posicao\n");
	printf("[A] Alterar\n");
	printf("[B] Buscar\n");
	printf("[L] Listar\n");
	printf("[S] Sair\n\n");
	printf("Sua opcao: \n");}

// Funcao Insere
int insersor (int array_i[], int valorInserir_i, unsigned int *contagem_ui){	// Contador da posicao da lista

	unsigned int i=0;

	for (;i<*contagem_ui;i++){

		if(valorInserir_i == array_i[i]){
			printf("Valor ja existente!\n");
			return 0;}}

	array_i[*contagem_ui]=valorInserir_i;
	*contagem_ui+=1;}

// Funcao Remove Ocorrencia
void removedor_Ocorrencia (int array_i[], int valorRemover_i, unsigned int *contagem_ui){

	unsigned int i=0;

	for (;i<*contagem_ui;i++){

		if (array_i[i] == valorRemover_i){

			array_i[i]=array_i[*contagem_ui];}
			array_i[*contagem_ui]=0;
			*contagem_ui-=1;}}

// Funcao Remove Posicao
int removedor_Posicao (int array_i[], int valorRemover_i, unsigned int *contagem_ui){

	if (valorRemover_i > *contagem_ui){
		return 0;}
	else{
		array_i[valorRemover_i]=array_i[*contagem_ui];
		array_i[*contagem_ui]=0;
		*contagem_ui-=1;}}

// Funcao Altera
int alterador (int array_i[], int valorAlterado_i, int valorAlterador_i, unsigned int *contagem_ui){

	unsigned int i=0;

	for (;i<*contagem_ui;i++){

		if (array_i[i] == valorAlterador_i){
			return 0;}
		// else?
		if (array_i[i] == valorAlterado_i){

			array_i[i]=valorAlterador_i;}}}

// Funcao Busca
int buscador (int array_i[], int valorBuscar_i, unsigned int *contagem_ui){

	unsigned int i=0;

	for (;i<=*contagem_ui;i++){

		if (array_i[i] == valorBuscar_i){

			return i;}}
	return -1;}

// Funcao Lista
void mostrador (int array_i[], unsigned int *contagem_ui){

	unsigned int i=0;

	for (;i<=*contagem_ui;i++){

		printf("Valor da posicao %d: %d\n", ++i, array_i[i]);}}

// Funcao Limpa
void limpador (int array_i[]){

	unsigned int i=0;

	for (;i<TAM_VET;i++){
		array_i[i]=0;}}
