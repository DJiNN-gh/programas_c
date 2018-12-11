/* Pede-se o desenvolvimento de um programa que, através de um menu, permita ao usuário realizar as seguintes operações sobre o vetor:
 *
 * 1) Inserção de um novo número;
 * 2) Remoção de um determinado valor;
 * 3) Remoção de um elemento que encontra-se em uma dada posição;
 * 4) Alteração de um valor por outro;
 * 5) Busca de um determinado número, retornando a sua posição (caso exista no vetor) ou o valor -1 se não for encontrado;
 * 6) Exibição de todos os elementos do vetor.
 *
 * Obs.: Os elementos do vetor devem ser dispostos de maneira crescente sempre. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM_VET 10

void chamador (unsigned int contador_ui);	// Funcao que exibe menu
int insersor (int array_i[], int valorInserir_i, unsigned int *contador_ui);	// Funcao que insere um valor em uma posicao do vetor
int removedor_Ocorrencia (int array_i[], int valorRemover_i, unsigned int *contador_ui);	// Funcao que remove um detemrminado valor do vetor
int removedor_Posicao (int array_i[], int valorRemover_i, unsigned int *contador_ui);	//
int alterador (int array_i[], int anterior_i, int novo_i, unsigned int contador_ui); // Funcao que altera um determinado valor por outro
int buscador (int array_i[], int valorBuscar_i, unsigned int contador_ui);	// Funcao que busca um determinado valor no vetor
void mostrador (int array_i[], unsigned int contador_ui);	// Funcao que exibe os valores contidos no vetor

int main (void){

	char opcao_c;
	int valor_i, valorAntigo_i, valorNovo_i, b;
	unsigned int contagem_ui=0;
	int lista_i[TAM_VET];	// Aqui novamente entraria malloc para definir um tamanho para o vetor dinamicamente, no entanto mais uma vez nao podemos utilizar ¯\_(ツ)_/¯

	printf("Bem vindo(a).\n");

	do{

	chamador(contagem_ui);

		fflush(stdin);	scanf("%c", &opcao_c);	opcao_c=toupper(opcao_c);

		switch (opcao_c){

			case 'I':
				printf("Qual valor deseja inserir? \n");
				scanf("%d", &valor_i);
				b=insersor(lista_i, valor_i, &contagem_ui);
				if (b==0){
					printf("Valor nao inserido!");}
				else{
					printf("Valor inserido com sucesso!");}
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
				scanf("%d", &valorAntigo_i);
				printf("Qual o novo valor? \n");
				scanf("%d", &valorNovo_i);
				alterador(lista_i, valorAntigo_i, valorNovo_i, contagem_ui);
				break;

			case 'B':
				printf("Qual valor a ser buscado? \n");
				scanf("%d", &valor_i);
				b=buscador(lista_i, valor_i, contagem_ui);
				if (b == -1){
					printf("Valor nao encontrado!");}
				else{
					printf("Seu valor esta na posicao: %d\n", buscador(lista_i, valor_i, contagem_ui));}

				break;

			case 'L':
				mostrador(lista_i, contagem_ui);
				break;

			default:
				printf("Opcao invalida. Escolha uma das opcoes informadas\n");
				break;}

	} while (opcao_c != 'S');

printf("Encerrando... Tenha um bom dia!\n\n");
return 0;}

// Funcao Chama Menu
void chamador (unsigned int contador_ui){

	printf("\t\t--MENU--\n\nEscolha uma das opcoes abaixo\n");
	
	if (contador_ui < TAM_VET){
		printf("[I] Inserir\n");}
	printf("[O] Deletar ocorrencia\n");
	printf("[P] Deletar posicao\n");
	printf("[A] Alterar\n");
	printf("[B] Buscar\n");
	printf("[L] Listar\n");
	printf("[S] Sair\n\n");
	printf("Sua opcao: \n");}


// Funcao Insere
int insersor (int array_i[], int valorInserir_i, unsigned int *contador_ui){

	unsigned int i, j;

	for (i=0;i<=*contador_ui;i++){

		if (valorInserir_i == array_i[i]){

			return 0;}}	// Ao tentar inserir um valor ja existente no vetor, nenhuma acao sera tomada, retornando para a funcao que a chamou

	for (i=0;i<=*contador_ui;i++){

		if (valorInserir_i < array_i[i]){

			for (j=i;j<*contador_ui;j++){

				array_i[*contador_ui]=array_i[*contador_ui-1];}
				
			array_i[i]=valorInserir_i;
			*contador_ui+=1;
			return 1;}}}

// Funcao Remove Ocorrencia
int removedor_Ocorrencia (int array_i[], int valorRemover_i, unsigned int *contador_ui){

	unsigned int i=0;

	if (valorRemover_i == array_i[*contador_ui-1]){

		*contador_ui-=1;
		return 1;}

	while (valorRemover_i != array_i[i]){

		i++;
		
		if (i>=*contador_ui){
		
			return 0;}}
	
	// if (valorRemover_i == array_i[i]){
		
		for (;i<*contador_ui;i++){

			array_i[i]=array_i[i+1];}
		*contador_ui-=1;
return 1;}

// Funcao Remove Posicao
int removedor_Posicao (int array_i[], int valorRemover_i, unsigned int *contador_ui){

	unsigned int i;

	if (valorRemover_i >= *contador_ui){

		return 0;}	// Ao tentar remover uma posicao igual ou maior que o contador, nenhuma acao sera tomada, retornando para a funcao que a chamou

	for (i=valorRemover_i;i<*contador_ui-1;i++){

		array_i[i]=array_i[i+1];}
	
	contador_ui-=1;

return 1;}

// Funcao Altera
int alterador (int array_i[], int anterior_i, int novo_i, unsigned int contador_ui){

	unsigned int i=0;

	for (;i<contador_ui;i++){

		if (array_i[i] == novo_i){
			
			return 0;}	// Ao tentar alterar um valor ja existente no vetor, nenhuma acao sera tomada, retornando para a funcao que a chamou

		if (array_i[i] == anterior_i){

			while (array_i[i] < novo_i){

				array_i[i]=array_i[i+1];
				i++;}}
			
			array_i[i-1]=novo_i;}

return 1;}

// Funcao Busca
int buscador (int array_i[], int valorBuscar_i, unsigned int contador_ui){

	unsigned int i=0;

	for (;i<contador_ui;i++){

		if (valorBuscar_i > array_i[i]){

			return -1;}
		else

		if (array_i[i] == valorBuscar_i){

			return i+1;}}

return -1;}
	
// Funcao Lista
void mostrador (int array_i[], unsigned int contador_ui){

	unsigned int i=0;

	for (;i<contador_ui;i++){

		printf("Valor da posicao %d: %d\n", i+1, array_i[i]);}}
