/* Questão 05:
Fazer uma função que, dado um arquivo texto, determine quantas vezes a string S 
encontra-se no arquivo. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define TAM 128
#define TAM2 10000

int determinador (char *string_c);

int main (void){

	char s[TAM];

	printf("Qual a palavra a ser buscada? \n");
	scanf("%s", s);

	printf("Resultado: %d\n", determinador(s));


return 0;}

int determinador (char *string_c){

	int cont=0;
	FILE *fp;
	char str[TAM2];
	char* arq = "/Users/allanlopes/Documents/Gloom - Projeto Tradução/Arq002(Monarca_amarelo_1).rtf";

	fp=fopen(arq, "r");

	while(fgets(str, TAM2, fp) != NULL){

		if(strcasecmp (str, string_c) == 0){
			cont++;}}
return cont;}
