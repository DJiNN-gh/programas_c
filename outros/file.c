#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define MAXCHAR 1024
#define EXTENSAO ".txt"
#define TAM1 128
#define TAM2 256

void fatal (FILE *msg); // A função fatal recebe a stream de dados a ser validada como um ponteiro para o endereço da stream, exibindo uma mensagem de erro e saindo automaticamente caso o arquivo seja inválido ou ilegível
void insersor (FILE *fp, char *path_c, char *element_c);	// A função insersor recebe a stream de dados, o endereço do arquivo e o elemento a ser inserido no arquivo	
void removedor (FILE *fp, char *path_c, char *element_c);	// A função removedor recebe a stream de dados, o endereço do arquivo e o elemento a ser removido do arquivo
int alterador (FILE *fp, char *path_c, char *elementIn_c, char *elementOut_c); // A função recebe a stream de dados, o endereço do arquivo, o elemento a ser removido e o novo elemento
unsigned int buscador (FILE *fp, char *path_c, char *element_c);	// A função buscador recebe a stream de dados, o endereço do arquivo e o elemento a ser buscado. Ela retorna a quantidade de vezes que o valor buscado foi encontrado
void exibidor (FILE *fp, char* path_c);

int main (void){

	FILE *fp;	// Variável que recebe stream do arquivo
	char string_c[MAXCHAR];
	int i=65, j=66, k=67;
	char a[]="65", b[]="66", c[]="67";
	int leitura_i;
	char nome_c[TAM1], conteudo_c[TAM2];
	char* arq;	// Variável que armazena o endereço de um arquivo fornecido pelo usuário
	char* arq2="/Users/allanlopes/programas_c/2FPR/lista7/arq.txt";	// Variável que armazena o endereço de um arquivo
	char* arq3="/Users/allanlopes/Library/Mobile Documents/com~apple~TextEdit/Documents/Mini-mundo Escola de Música.rtf";	// Variável que armazena o endereço de um arquivo


	
	fp=fopen(arq2, "r");

	// Chamando a função que checa se o arquivo é valido
	fatal(fp);	

	// Imprimindo o conteúdo do primeiro arquivo usando a função fgets
	while (fgets(string_c, MAXCHAR, fp) != NULL){
		
		printf("%s", string_c);}
	
	// Encerrando a manipulação do arquivo
	fclose(fp);

	fp=fopen(arq2, "r");

	fatal(fp);

	// Imprimindo o conteúdo do segundo arquivo usando a função feof
	while (!feof(fp)){

		fgets(string_c, MAXCHAR, fp);
		puts(string_c);}

	fclose(fp);
	
	// Criando um arquivo e preenchendo ele com uma determinada string definida em código. A string irá implementar qualquer caractere de formatação no arquivo final
	fp=fopen("arquivo.txt", "w");

	fprintf(fp, "1999\n2000\n2001\n2002\n");
	fprintf(fp, a, b, c);
	putw(i, fp);
	putw(j, fp);
	putw(k, fp);	// A função putw serve para inserir um valor inteiro em um arquivo, que será traduzido como um valor ASCII na sua gravação EX.: putw(65, fp) irá guardar a letra A

	fclose(fp);

	// Criando um arquivo e inserindo um conteúdo qualquer
	printf("Insira o nome do arquivo: \n");
	scanf("%s", nome_c);

	strcat(nome_c, EXTENSAO);

	fp=fopen(nome_c, "a");
	
	printf("Insira o conteúdo do arquivo: \n");
	scanf("%s", conteudo_c);

	fprintf(fp, "%s", conteudo_c);
	fputc('\n', fp);

	fclose(fp);

	exibidor(fp, "teste5.txt");

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

	fprintf(fp, "%s",  element_c);
	fputc('\n', fp);	// O uso do caractere de linha é usado para que o próximo valor vá para a próxima linha

	fclose(fp);}

// Função que remove uma ocorrência em um arquivo
void removedor (FILE *fp, char *path_c, char *element_c){

	FILE *fpAux;
	char string_c[TAM1];
	
	// Abrindo o arquivo passado via parâmetro
	fp=fopen(path_c, "r");
	
	// Testando a validade do arquivo
	fatal(fp);

	// Retornando o cursor para o início do arquivo 
	rewind(fp);
	
	// Iniciando um arquivo auxiliar
	fpAux=fopen("temp.txt", "w");

	// Copiando os dados
	while (!feof(fp)){

		fscanf(fp, "%s", string_c);

		if (strcmp(string_c, element_c) != 0){
			
			fprintf(fpAux, "%s", string_c);}}

	fclose(fp);	// Fechando o arquivo original
	fclose(fpAux);	// Fechando o arquivo auxiliar

	// Deletando o arquivo original
	remove(path_c);
	// Renomeando o arquivo auxiliar
	rename("temp.txt", path_c);}

// Função que altera uma ocorrência em um arquivo
int alterador (FILE *fp, char *path_c, char *elementIn_c, char *elementOut_c){

	FILE *fpAux;
	char string_c[TAM1];

	// Abrindo o arquivo passado via parâmetro
	fp=fopen(path_c, "r");

	// Testando a validade do arquivo
	fatal(fp);

	// Retornando o cursor para o início do arquivo
	rewind(fp);

	// Iniciando um arquivo auxiliar
	fpAux=fopen("temp.txt", "w");

	// Copiando os dados
	while (!feof(fp)){

		fscanf(fp, "%s", string_c);

		if (strcmp(string_c, elementIn_c) == 0){

			rewind(fp);
			
			while (!feof(fp)){

				fscanf(fp, "%s", string_c);
				fprintf(fpAux, "%s", string_c);
				fprintf(fpAux, "%s", elementOut_c);}

		fclose(fp);	// Fechando o arquivo original, caso a decisão encontre verdade
		fclose(fpAux);	// Fechando o arquivo auxiliar, caso a decisão encontre verdade
		// Deletando o arquivo original
		remove(path_c);
		// Renomeando o arquivo auxiliar
		rename("temp.txt", path_c);
		
		return 0;}
	}	// Retorna 0, indicando falso para erros, logo sucesso na operação

	fclose(fp);	// Fechando o arquivo original, caso a decisão encontre falso
	fclose(fpAux);	// Fechando o arquivo auxiliar, caso a decisão encontre falso

	return 1;}	// Retorna 1, indicando verdadeiro para erros, logo houve falha na operação (o elemento a ser alterado não foi encontrado)

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
