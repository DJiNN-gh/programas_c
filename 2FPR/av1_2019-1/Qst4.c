#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define CPF 11
#define NOME 64
#define SEXO 9
#define ESTADO 2
#define MUNICIPIO 32
#define TAM 128
#define SEX0 "FEMININO"
#define SEX1 "MASCULINO"

typedef struct{

	char cpf_c[CPF];
	char nome_c[NOME];
	char sexo_c[SEXO];
	char estado_c[ESTADO];
	char municipio_c[MUNICIPIO];}Tcadastro;

void fatal (FILE *fp);
unsigned int carregador (FILE *fp, Tcadastro a_c[CPF], Tcadastro b_c[NOME], Tcadastro c_c[SEXO], Tcadastro d_c[ESTADO], Tcadastro e_c[MUNICIPIO]);
void salvador (FILE *fp, Tcadastro a_c[CPF], Tcadastro b_c[NOME], Tcadastro c_c[SEXO], Tcadastro d_c[ESTADO], Tcadastro e_c[MUNICIPIO]);

int main (void){


return 0;}

// Função que testa a validade de um arquivo
void fatal (FILE *fp){

	if (fp == NULL){

		printf("Nao foi possivel abrir o arquivo\n");
		return 1;}}	// Retorna 1 indicando verdadeiro para erro

// Função que transfere os dados de um arquivo para uma struct
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

// Função que armazena os dados de uma struct em um arquivo
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
