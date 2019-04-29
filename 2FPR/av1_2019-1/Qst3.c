#include <stdio.h>
#include <stdlib.h>

unsigned int fatal (FILE *fp);
void separador (FILE *fp, char *path_c);

int main (void){


return 0;}

// Função que testa a validade do arquivo
unsigned int fatal (FILE *fp){

	if (fp == NULL){
		
		printf("Nao foi possivel abrir o arquivo\n");
	      	return 1;}	// Retorna 1 indicando verdadeiro para erro

// Função que separa o conteúdo de um arquivo entre valores pares e ímpares em dois novos arquivos
void separador (FILE *fp, char *path_c){

	FILE *fpPar, *fpImpar;
	int valor_i, aux_i;
	
	fp=fopen(path_c, "r");
	fatal(fp);

	fpPar=fopen("pares.txt", "w");
	fpImpar=fopen("impares.txt", "w");

	while (!feof(fp)){
		
		fscanf(fp, "%d", &valor_i);

		if ((valor_i % 2) == 0){

			while (!feof(fpPar)){
				
				fscanf(fpPar, "%d", aux_i);

				if (valor_i != aux_i){
			
					fprintf(fpPar, "%d\n", valor_i);}}}
		else{

			while (!feof(fpImpar)){

				fscanf(fpImpar, "%d", aux_i);

				if (valor_i != aux_i){

					fprintf(fpImpar, "%d\n", valor_i);}}}}

	fclose(fp);
	fclose(fpPar);
	fclose(fpImpar);}
