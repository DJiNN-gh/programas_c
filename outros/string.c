#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculador (char string_c[]);
int buscador (char string_c[], char chara_c);
void substituidor (char string_c[], char charaOld_c, char charaNew_c);
void trocador (char string_c[]);
void inversor (char string_c[]);
int palindromador (char string_c[]);

int main (void){

	char c[]="texto";

	printf("O tamanho do texto e: %d\n", calculador(c));

return 0;}

// Funcao que calcula o tamanho de uma string
int calculador (char string_c[]){

	unsigned int i=0, tam_ui;

	tam_ui=strlen(string_c);

	for (;i<tam_ui;i++);

return i;}

// Funcao que busca uma ocorrencia numa string
int buscador (char string_c[], char chara_c){

	unsigned int i=0, cont_ui=0, tam_ui;

	tam_ui=strlen(string_c);

	for (;i<tam_ui;i++){

		if (string_c[i] == chara_c){

			cont_ui++;}}

return cont_ui;}

// Funcao que troca um caracter da string por um novo
void substituidor (char string_c[], char charaOld_c, char charaNew_c){

	unsigned int i=0, j=0, tam_ui;

	tam_ui=strlen(string_c);

	for (;i<tam_ui;i++, j++){
		
		if (string_c[i] == charaOld_c){

			string_c[i]=charaNew_c;}}}

// Funcao que troca o primeiro caracter com o segundo caracter de uma string
void trocador (char string_c[]){

	unsigned int i=0, tam_ui;
	char aux_c;

	tam_ui=strlen(string_c);

	for (;i<tam_ui-1;i+=2){

		aux_c=string_c[i+1];
		string_c[i+1]=string_c[i];
		string_c[i]=aux_c;}}

// Funcao que inverte uma string
void inversor (char string_c[]){

	unsigned int i=0, j;
	char aux_c;

	j=strlen(string_c);

	for (;i<j-1;i++, j--){

		aux_c=string_c[j];
		string_c[j]=string_c[i];
		string_c[i]=aux_c;}}

// Funcao que verifica se a string e um palindromo
int palindromador (char string_c[]){

	unsigned int i=0, j;

	j=strlen(string_c);

	for (;i<j-1;i++, j--){

		if (string_c[i] != string_c[j]){

			return 0;}}

return 1;}
