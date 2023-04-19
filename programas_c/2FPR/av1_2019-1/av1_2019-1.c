#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define CPF 11
#define NOME 64
#define SEXO 9
#define ESTADO 2
#define MUNICIPIO 32
#define TAM 128
#define SEX0 "FEMININO"
#define SEX1 "MASCULINO"


float recursor (float *array_f, unsigned int tam_ui);
void inversor (float matrix_f[15][10]);
unsigned int fatal (FILE *fp);
void separador (FILE *fp, char *path_c);

typedef struct{

	char cpf_c[CPF];
	char nome_c[NOME];
	char sexo_c[SEXO];
	char estado_c[ESTADO];
	char municipio_c[MUNICIPIO];}Tcadastro;

unsigned int carregador (FILE *fp, Tcadastro a_c[CPF], Tcadastro b_c[NOME], Tcadastro c_c[SEXO], Tcadastro d_c[ESTADO], Tcadastro e_c[MUNICIPIO]);
void salvador (FILE *fp, Tcadastro a_c[CPF], Tcadastro b_c[NOME], Tcadastro c_c[SEXO], Tcadastro d_c[ESTADO], Tcadastro e_c[MUNICIPIO]);


int main (void){


return 0;}

// Função que verifica se um vetor está ordenado crescentemente (Qst1)
float recursor (float *array_f, unsigned int tam_ui, unsigned int *check_ui){

	if (tam_ui > 0){

		if (array_f[tam_ui-1] >= recursor(array_f, tam_ui-1)){

			return array_f[tam-1];}

		else
			return FALSE;}
	
	*check_ui=TRUE;}

// Função que inverte a ordem dos elementos de uma matriz (Qst2)
void inversor (float matrix_f[15][10]){

	for(i=0, k=14;i<15;i++, k--){

		for(j=0, l=14;j<10;j++, l--){

			aux_f=matrix_f[i][j];
			matrix_f[i][j]=matrix_f[k][l];
			matrix_f[k][l]=aux_f;}}}

// Função que testa a validade do arquivo (Qst3)
unsigned int fatal (FILE *fp){

	if (fp == NULL){
		
		printf("Nao foi possivel abrir o arquivo\n");
	      	return 1;}	// Retorna 1 indicando verdadeiro para erro

// Função que separa o conteúdo de um arquivo entre valores pares e ímpares em dois novos arquivos (Qst3)
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

// Função que transfere os dados de um arquivo para uma struct (Qst4)
unsigned int carregador (FILE *fp, char *path_c, Tcadastro a[CPF], Tcadastro b[NOME], Tcadastro c[SEXO], Tcadastro d[ESTADO], Tcadastro e[MUNICIPIO]){

	char digito_c='A';
	unsigned int cont_ui=0, i=0, j=0;

	fp=fopen(path_c, "r");

	fatal(fp);

	while (!feof(fp)){

		j=0;
		cont_ui++;

		while (digito_c != '\n'){

			while (digito_c != ';'){

				fgetc(digito_c, fp);
				a[i].cpf_c[j]=digito_c;
				i++;}

			i=0;

			while (digito_c != ';'){

				fgetc(digito_c, fp);
				b[i].nome_c[j]=digito_c;
				i++;}

			i=0;

			while (digito_c != ';'){

				fgetc(digito_c, fp);

				if (digito_c == '0)

					
					strcpy(c.sexo[j], SEX0);
				else
					
					strcpy(c.sexo[j], SEX1);}

			i=0;

			while (digito_c != ';'){

				fgetc(digito_c, fp);
				d[i].cadastro[j]=digito_c;
				i++;}
			
			i=0;

			while (digito_c != ';'){

				fgetc(digito_c, fp);
				e[i].municipio[j]=digito_c;
				i++;}
			i=0;
			j++;}}

	fclose(fp);
	return cont_ui;}

// Função que armazena os dados de uma struct em um arquivo (Qst4)
void salvador (FILE *fp, char *path_c, unsigned int tam_ui, Tcadastro a_c[CPF], Tcadastro b_c[NOME], Tcadastro c_c[SEXO], Tcadastro d_c[ESTADO], Tcadastro e_c[MUNICIPIO]){

	unsigned int i=0;
	char string_c[TAM];

	fp=fopen(path_c, "w+");

	fatal(fp);

	while (tam_ui > 0){

		fprintf(fp, "%s;", a[i].cpf);
	   	fprintf(fp, "%s;", b[i].nome);
		fprintf(fp, "%s;", c[i].sexo);
		fprintf(fp, "%s;", d[i].estado);
		fprintf(fp, "%s\n", e[i].municipio); 

		i++;
		tam_ui--}

	fclose(fp);}