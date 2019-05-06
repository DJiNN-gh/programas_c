#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define MAXCHAR 1024
#define EXTENSAO ".txt"
#define TAM1 64
#define TAM2 128

void menu (void);	// A função menu não recebe parâmetro algum, apenas exibe uma string de apresentação para o usuário
void fatal (FILE *msg); // A função fatal recebe a stream de dados a ser validada como um ponteiro para o endereço da stream, exibindo uma mensagem de erro e saindo automaticamente caso o arquivo seja inválido ou ilegível
void insersor (FILE *fp, char *path_c, int element_i);	// A função insersor recebe a stream de dados, o endereço do arquivo e o elemento a ser inserido no arquivo	
void removedor (FILE *fp, char *path_c, int element_i);	// A função removedor recebe a stream de dados, o endereço do arquivo e o elemento a ser removido do arquivo
void alterador (FILE *fp, char *path_c, int elementIn_i, int elementOut_i); // A função recebe a stream de dados, o endereço do arquivo, o elemento a ser removido e o novo elemento
unsigned int buscador (FILE *fp, char *path_c, int element_i);	// A função buscador recebe a stream de dados, o endereço do arquivo e o elemento a ser buscado. Ela retorna a quantidade de vezes que o valor buscado foi encontrado
void exibidor (FILE *fp, char *path_c); // A função exibidor recebe a stream de dados e o endereço do arquivo
void organizador (FILE *fp, char *path_c);	// A função organizador recebe a stream de dados do arquivo a ser atualizado (nesse caso, o arquivo auxiliar das outras funções) e manipula-o para que fique ordenado crescentemente. Também recebe o endereço do arquivo que será atualizado

int main (void){

	FILE *fp;
	char opcao_c;
	char arq_c[TAM2];
	int valor_i, valorAux_i;

	menu();
	printf("Insira o nome do seu arquivo: \n");
	scanf("%s", arq_c);

	strcat(arq_c, EXTENSAO);

	do{

		scanf("%c", &opcao_c);
		opcao_c=toupper(opcao_c);

		switch (opcao_c){

			case 'I':
				printf("Qual valor deseja inserir? \n");
				scanf("%d", &valor_i);
				insersor(fp, arq_c, valor_i);
				break;

			case 'R':
				printf("Qual valor deseja remover? \n");
				scanf("%d", &valor_i);
				removedor(fp, arq_c, valor_i);
				break;

			case 'A':
				printf("Qual valor a ser alterado? \n");
				scanf("%d", &valor_i);
				printf("Qual o novo valor? \n");
				scanf("%d", &valorAux_i);
				alterador(fp, arq_c, valor_i, valorAux_i);
				break;

			case 'B':
				printf("Qual valor a ser buscado? \n");
				scanf("%d", &valor_i);
				printf("O valor buscado foi encontrado %d vezes\n", buscador(fp, arq_c, valor_i));
				break;

			case 'E':
				exibidor(fp, arq_c);
				break;

			default:
				printf("Opcao invalida. Digite uma das opcoes informadas\n");
				break;}

	}while (opcao_c != 'S');

	printf("Encerrando... Tenha um bom dia!\n");


return 0;}

// Função que exibe um menu
void menu (void){

	printf("Bem-vindo(a)\n\nInsira sua opcao:\n\t[I]nserir\n\t[R]emover\n\t[A]lterar\n\t[B]uscar\n\t[E]xibir\n\t[S]air \n");}

// Função que valida um arquivo
void fatal (FILE *msg){
	
	if (msg == NULL){
		printf("Nao foi possivel abrir o arquivo");
		exit(1);}}

// Função que insere um valor em um arquivo
void insersor (FILE *fp, char *path_c, int element_i){

	int valor_i;
	unsigned int cont_ui=0;

	fp=fopen(path_c, "a");

	fatal(fp);

	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);

		if (valor_i == element_i){

			cont_ui++;}}

	if (element_i >= cont_ui){

		exit(1);}

	fprintf(fp, "%d\n", element_i);

	organizador(fp, path_c);

	fclose(fp);}

// Função que remove uma ocorrência em um arquivo
void removedor (FILE *fp, char *path_c, int element_i){

	FILE *fpAux;
	int valor_i;
	unsigned int cont_ui=0;
	
	// Abrindo o arquivo passado via parâmetro
	fp=fopen(path_c, "r");
	
	// Testando a validade do arquivo
	fatal(fp);
	
	// Iniciando um arquivo auxiliar
	fpAux=fopen("temp.txt", "w+");


	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);

		if (valor_i == element_i){

			cont_ui++;}}

	if (element_i >= cont_ui){

		exit(1);}
	
	// Copiando os dados
	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);

		if (valor_i != element_i){
			
			fprintf(fpAux, "%d\n", valor_i);}}
	

	organizador(fpAux, path_c);

	fclose(fp);	// Fechando o arquivo original
	fclose(fpAux);	// Fechando o arquivo auxiliar

	// Deletando o arquivo original
	remove(path_c);
	// Renomeando o arquivo auxiliar
	rename("temp.txt", path_c);}

// Função que altera uma ocorrência em um arquivo
void alterador (FILE *fp, char *path_c, int elementIn_i, int elementOut_i){

	FILE *fpAux;
	int valor_i;
	unsigned int cont_ui=0;

	// Abrindo o arquivo passado via parâmetro
	fp=fopen(path_c, "r");

	// Testando a validade do arquivo
	fatal(fp);

	// Iniciando um arquivo auxiliar
	fpAux=fopen("temp.txt", "w+");

	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);

		if (valor_i == elementIn_i){

			cont_ui++;}}

	if (elementIn_i >= cont_ui){

		exit(1);}

	// Copiando os dados
	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);

		if (valor_i != elementIn_i){	// Quando os elementos contidos no arquivo original forem diferentes do elemento a ser removido, serão copiados para o arquivo auxiliar
		
			fprintf(fpAux, "%d\n", valor_i);}
		else{	// Quando os elementos contidos no arquivo original forem iguais, o novo elemento será copiado

			fprintf(fpAux, "%d\n", elementOut_i);}}

		organizador(fpAux, path_c);
		
		fclose(fp);	// Fechando o arquivo original
		fclose(fpAux);	// Fechando o arquivo auxiliar

		// Deletando o arquivo original
		remove(path_c);
		// Renomeando o arquivo auxiliar
		rename("temp.txt", path_c);}

// Função que busca uma ocorrência em um arquivo	
unsigned int buscador (FILE *fp, char *path_c, int element_i){

	unsigned int cont=0;
	int valor_i;

	fp=fopen(path_c, "r");

	fatal(fp);

	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);

		if (valor_i == element_i){	// Caso o elemento a ser encontrado for igual ao elemento do arquivo na linha atual, o contador será acrescido em um
			cont++;}}

	fclose(fp);

	return cont;}

// Função que lista o conteúdo de um arquivo
void exibidor (FILE *fp, char *path_c){

	int valor_i;

	fp=fopen(path_c, "r");
	
	fatal(fp);

	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);
		printf("%d\n", valor_i);}

	fclose(fp);}

// Função que realiza a ordenação do arquivo
void organizador (FILE *fp, char *path_c){
	
	FILE *fpAux;
	int valor_i, valorAux_i, valorMaior_i;

	fpAux=fopen("sort.txt", "w+");

	rewind(fp);

	fscanf(fp, "%d", &valor_i);
	fprintf(fpAux, "%d\n", valor_i);	// Insere o primeiro elemento do arquivo original no arquivo auxiliar para referência
	fscanf(fpAux, "%d", &valorAux_i);	// Armazena o primeiro elemento do arquivo em uma string auxiliar para referência

	while (!feof(fp)){

		fscanf(fp, "%d", &valor_i);
		rewind(fpAux);

		while (!feof(fpAux)){

			if (valor_i <= valorAux_i){

				fprintf(fpAux, "%d\n", valor_i);
				fscanf(fpAux, "%d", &valorAux_i);}

			if (valor_i >= valorMaior_i){

				fseek(fpAux, 0, SEEK_END);
				fprintf(fpAux, "%d\n", valor_i);
				valorMaior_i=valor_i;}
		
			fscanf(fpAux, "%d", &valorAux_i);}}
	
	// Deletando o arquivo original
	remove(path_c);
	// Renomeando o arquivo auxiliar
	rename("sort.txt", path_c);}
