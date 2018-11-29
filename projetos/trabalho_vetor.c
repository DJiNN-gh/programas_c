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

void chamador ();	// Funcao que exibe menu
void insersor (int array_i[], int valorInserir_i, int *contagem_i);	// Funcao que insere um valor em na ultima posicao livre do vetor
void removedor_Ocorrencia (int array_i[], int tam_i, int valorRemover_i, int *contagem_i);	// Funcao que remove um determinado valor do vetor
void removedor_Posicao (int array_i[], int valorRemover_i, int *contagem_i);	// Funcao que remove o valor de uma determinada posicao do vetor
void alterador (int array_i[], int tam_i, int valorAlterado_i, int valorAlterar_i, int *contagem_i);	// Funcao que altera um determinado valor por outro
int buscador (int array_i[], int tam_i, int valorBuscar_i, int *contagem);	// Funcao que busca um determinado valor no vetor
void mostrador (int array_i[], int *contagem_i);	// Funcao que exibe os valores contidos no vetor

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
				printf("Opcao invalida. Escolha uma das opcoes informadas\n");
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

			array_i[i]=array_i[*contagem_i];
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
void mostrador (int array_i[], int *contagem_i){

	int i=0;

	for (;i<=*contagem_i;i++){

		printf("Valor da posicao %d: %d\n", ++i, array_i[i]);}}


// Funcao Termina
