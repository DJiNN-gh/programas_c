#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define MAXCHAR 1024
#define EXTENSAO ".txt"
#define TAM1 64
#define TAM2 128

void fatal (FILE *msg); // A função fatal recebe a stream de dados a ser validada como um ponteiro para o endereço da stream, exibindo uma mensagem de erro e saindo automaticamente caso o arquivo seja inválido ou ilegível
void insersor (FILE *fp, char *path_c, char *element_c);	// A função insersor recebe a stream de dados, o endereço do arquivo e o elemento a ser inserido no arquivo	
void removedor (FILE *fp, char *path_c, char *element_c);	// A função removedor recebe a stream de dados, o endereço do arquivo e o elemento a ser removido do arquivo
void alterador (FILE *fp, char *path_c, char *elementIn_c, char *elementOut_c); // A função recebe a stream de dados, o endereço do arquivo, o elemento a ser removido e o novo elemento
unsigned int buscador (FILE *fp, char *path_c, char *element_c);	// A função buscador recebe a stream de dados, o endereço do arquivo e o elemento a ser buscado. Ela retorna a quantidade de vezes que o valor buscado foi encontrado
void exibidor (FILE *fp, char* path_c); // A função exibidor recebe a stream de dados e o endereço do arquivo
void organizador (FILE *fp, char *path_c);	// A função organizador recebe a stream de dados do arquivo a ser atualizado (nesse caso, o arquivo auxiliar das outras funções) e manipula-o para que fique ordenado crescentemente. Também recebe o endereço do arquivo que será atualizado

int main (void){


return 0;}

// Função que valida um arquivo
void fatal (FILE *msg){
	
	if (msg == NULL){
		printf("Nao foi possivel abrir o arquivo");
		exit(1);}}

// Função que insere um valor em um arquivo
void insersor (FILE *fp, char *path_c, char *element_c){

	fp=fopen(path_c, "a");

	fatal(fp);

	fprintf(fp, "%s\n",  element_c);

	organizador(fp, path_c);

	fclose(fp);}

// Função que remove uma ocorrência em um arquivo
void removedor (FILE *fp, char *path_c, char *element_c){

	FILE *fpAux;
	char string_c[TAM1];
	
	// Abrindo o arquivo passado via parâmetro
	fp=fopen(path_c, "r");
	
	// Testando a validade do arquivo
	fatal(fp);
	
	// Iniciando um arquivo auxiliar
	fpAux=fopen("temp.txt", "w+");

	// Copiando os dados
	while (!feof(fp)){

		fscanf(fp, "%s", string_c);

		if (strcmp(string_c, element_c) != 0){
			
			fprintf(fpAux, "%s\n", string_c);}}
	

	organizador(fpAux, path_c);

	fclose(fp);	// Fechando o arquivo original
	fclose(fpAux);	// Fechando o arquivo auxiliar

	// Deletando o arquivo original
	remove(path_c);
	// Renomeando o arquivo auxiliar
	rename("temp.txt", path_c);}

// Função que altera uma ocorrência em um arquivo
void alterador (FILE *fp, char *path_c, char *elementIn_c, char *elementOut_c){

	FILE *fpAux;
	char string_c[TAM1];

	// Abrindo o arquivo passado via parâmetro
	fp=fopen(path_c, "r");

	// Testando a validade do arquivo
	fatal(fp);

	// Iniciando um arquivo auxiliar
	fpAux=fopen("temp.txt", "w+");

	// Copiando os dados
	while (!feof(fp)){

		fscanf(fp, "%s", string_c);

		if (strcmp(string_c, elementIn_c) != 0){	// Quando os elementos contidos no arquivo original forem diferentes do elemento a ser removido, serão copiados para o arquivo auxiliar
		
			fprintf(fpAux, "%s\n", string_c);}
		else{	// Quando os elementos contidos no arquivo original forem iguais, o novo elemento será copiado

			fprintf(fpAux, "%s\n", elementOut_c);}}

		organizador(fpAux, path_c);
		
		fclose(fp);	// Fechando o arquivo original
		fclose(fpAux);	// Fechando o arquivo auxiliar

		// Deletando o arquivo original
		remove(path_c);
		// Renomeando o arquivo auxiliar
		rename("temp.txt", path_c);}

// Função que busca uma ocorrência em um arquivo	
unsigned int buscador (FILE *fp, char *path_c, char *element_c){

	char string_c[TAM1];
	unsigned int cont=0;

	fp=fopen(path_c, "r");

	fatal(fp);

	while (!feof(fp)){

		fscanf(fp, "%s", string_c);

		if (strcmp(string_c, element_c) == 0){	// Caso o elemento a ser encontrado for igual ao elemento do arquivo na linha atual, o contador será acrescido em um
			cont++;}}

	fclose(fp);

	return cont;}

// Função que lista o conteúdo de um arquivo
void exibidor (FILE *fp, char *path_c){

	char string_c[TAM1];

	fp=fopen(path_c, "r");
	
	fatal(fp);

	while (!feof(fp)){

		fscanf(fp, "%s", string_c);
		printf("%s\n", string_c);}

	fclose(fp);}

// Função que realiza a ordenação do arquivo
void organizador (FILE *fp, char *path_c){
	
	FILE *fpAux;
	char string_c[TAM1], stringAux_c[TAM1], stringMaior_c[TAM1];

	fpAux=fopen("sort.txt", "w+");

	rewind(fp);

	fscanf(fp, "%s", string_c);
	fprintf(fpAux, "%s\n", string_c);	// Insere o primeiro elemento do arquivo original no arquivo auxiliar para referência
	fscanf(fpAux, "%s", stringAux_c);	// Armazena o primeiro elemento do arquivo em uma string auxiliar para referência

	while (!feof(fp)){

		fscanf(fp, "%s", string_c);
		rewind(fpAux);

		while (!feof(fpAux)){

			if (strcmp(string_c, stringAux_c) <= 0){

				fprintf(fpAux, "%s\n", string_c);
				fscanf(fpAux, "%s", stringAux_c);}

			if (strcmp(string_c, stringMaior_c) > 0){

				fseek(fpAux, 0, SEEK_END);
				fprintf(fpAux, "%s\n", string_c);
				strcpy(string_c, stringMaior_c);}
		
			fscanf(fpAux, "%s", stringAux_c);}}
	
	// Deletando o arquivo original
	remove(path_c);
	// Renomeando o arquivo auxiliar
	rename("sort.txt", path_c);}
