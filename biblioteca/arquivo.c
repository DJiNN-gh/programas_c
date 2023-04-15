#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define MAXCHAR 1024
#define EXTENSAO ".txt"
#define TAM1 64
#define TAM2 128

void fatal (FILE *msg);

int main (void){

	FILE *fp;	// Variável que recebe stream do arquivo
	char string_c[MAXCHAR];
	int i=65, j=66, k=67, l;
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

	fprintf(fp, "%s\n", conteudo_c);

	fclose(fp);

	fp=fopen("teste1.txt", "w+");

	fatal(fp);

//	printf("Insira um valor: \n");
//	scanf("%d", &l);

//	fprintf(fp, "%d", l);
	fprintf(fp, "%d", 1998);

	fclose(fp);

return 0;}

void fatal (FILE *msg){

	if (msg == NULL){

		printf("Erro ao abrir arquivo!\n");
		exit(1);}}
