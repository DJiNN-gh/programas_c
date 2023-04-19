/*QUESTÃO 06:
Considere uma loja que mantém em uma matriz o total vendido por cada funcionário 
pelos diversos meses do ano. Ou seja, uma matriz de 12 linhas (uma por mês) e 10 colunas(10 funcionários). Pede-se o desenvolvimento de uma função para cada item abaixo:

a. Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele 
durante o ano;
d. Determinar o mês com maior índice de vendas;
e. Determinar o funcionário que menos vendeu durante o ano. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CHAR_UPP1 "Janeiro"
#define CHAR_UPP2 "Fevereiro"
#define CHAR_UPP3 "Marco"
#define CHAR_UPP4 "Abril"
#define CHAR_UPP5 "Maio"
#define CHAR_UPP6 "Junho"
#define CHAR_UPP7 "Julho"
#define CHAR_UPP8 "Agosto"
#define CHAR_UPP9 "Setembro"
#define CHAR_UPP10 "Outubro"
#define CHAR_UPP11 "Novembro"
#define CHAR_UPP12 "Dezembro"

double anual (float matrix_f[12][10]);
float mensal (float matrix_f[12][10], char string_c[]);
float funcionario (float matrix_f[12][10], char c);
char* maior (float matrix_f[12][10]);
char menor (float matrix_f[12][10]);

int main (void){

	float matrix_f[12][10];
	char s[128];
	char c;

	printf("R$ %.2f\n", anual(matrix_f));

	printf("Insira o mes a ser buscado: \n");
	scanf("%s", s);
	printf("R$ %.2f\n", mensal(matrix_f, s));
	
	printf("Insira o funcionario a ser buscado: \n");
	fflush(stdin);
	scanf("%c", &c);
	printf("R$ %.2f\n", funcionario(matrix_f, c));
	
	printf("Mes com maior indice de vendas: %s\n", maior(matrix_f));
	
	printf("Funcionario com menor indice de vendas: %c\n", menor(matrix_f));

return 0;}

// Funcao A
double anual (float matrix_f[12][10]){

	unsigned int i, j;
	double soma_d=0;

	for (i=0;i<12;i++){

		for (j=0;j<10;j++){

			soma_d+=matrix_f[i][j];}}
return soma_d;}

// Funcao B
float mensal (float matrix_f[12][10], char string_c[]){

	unsigned int i;
	float soma_f=0;

	if (strcasecmp(string_c, CHAR_UPP1) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[0][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP2) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[1][i];}
		
		return soma_f;}

	else		
	if (strcasecmp(string_c, CHAR_UPP3) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[2][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP4) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[3][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP5) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[4][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP6) == 0 || strcmp(string_c, CHAR_LOW6) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[5][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP7) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[6][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP8) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[7][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP9) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[8][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP10) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[9][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP11) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[10][i];}
		
		return soma_f;}
	else
	if (strcasecmp(string_c, CHAR_UPP12) == 0){

		for (i=0;i<10;i++){

			soma_f+=matrix_f[11][i];}
		
		return soma_f;}

	else{

		return 1;}}
// Funcao C
float funcionario (float matrix_f[12][10], char c){

	unsigned int i;
	float soma_f=0;

	c = toupper(c);

	switch (c){

		case 'A':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][0];}
			return soma_f;
		
		case 'B':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][1];}
			return soma_f;

		case 'C':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][2];}
			return soma_f;

		case 'D':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][3];}
			return soma_f;

		case 'E':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][4];}
			return soma_f;

		case 'F':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][5];}
			return soma_f;

		case 'G':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][6];}
			return soma_f;

		case 'H':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][7];}
			return soma_f;

		case 'I':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][8];}
			return soma_f;

		case 'J':
			for (i=0;i<12;i++){

				soma_f+=matrix_f[i][9];}
			return soma_f;
		
		default:
			return 1;}}

// Funcao D
char* maior (float matrix_f[12][10]){

	unsigned int i, j;
	int mes_i=0;
        float maior_f=0, soma_f=0;
	
	for (i=0;i<10;i++){

		maior_f+=matrix_f[0][i];}

	for (i=1;i<12;i++){

		for (j=0;j<10;j++){

			soma_f+=matrix_f[i][j];}
		
		if (soma_f > maior_f){

			maior_f=soma_f;
			mes_i=i;}}

	switch (mes_i){

		case 0:
			return CHAR_UPP1;
		case 1:
			return CHAR_UPP2;
		case 2:
			return CHAR_UPP3;
		case 3:
			return CHAR_UPP4;
		case 4:
			return CHAR_UPP5;
		case 5:
			return CHAR_UPP6;
		case 6:
			return CHAR_UPP7;
		case 7:
			return CHAR_UPP8;
		case 8:
			return CHAR_UPP9;
		case 9:
			return CHAR_UPP10;
		case 10:
			return CHAR_UPP11;
		case 11:
			return CHAR_UPP12;
		default:
			return "ERROR";}}

// Funcao E
char menor (float matrix_f[12][10]){

	unsigned int i, j;
	char funcionario_c='A';
	float menor_f=0, soma_f=0;

	for (i=0;i<12;i++){

		menor_f+=matrix_f[i][0];}

	for (i=1;i<10;i++){

		for (j=0;j<12;j++){

			soma_f+=matrix_f[j][i];}

		if (soma_f < menor_f){

			menor_f=soma_f;
			funcionario_c++;}}

return funcionario_c;}
