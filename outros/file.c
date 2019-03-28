#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define MAXCHAR 1000

//void fatal (FILE msg);

int main (){

	FILE *fp;
	char string_c[MAXCHAR];
	int i;
	char* arq = "/Users/allanlopes/Documents/Gloom - Projeto Tradução/Arq002(Monarca_amarelo_1).rtf";
	char* arq2 = "/Users/allanlopes/programas_c/2FPR/lista7/arq.txt";

	fp=fopen(arq, "r");

	//fatal(fp);
	
	if (fp == NULL){
		printf("Nao foi possivel abrir o arquivo\n");
		return 1;}

	while (fgets(string_c, MAXCHAR, fp) != NULL){
		printf("%s", string_c);}
	
	fclose(fp);

	fp=fopen(arq2, "r");
	
	if (fp == NULL){
		printf("Nao foi possivel abrir o arquivo\n");
		return 1;}

	while (fscanf(fp, i) != NULL){
		printf("%d\n", i);}

return 0;}

/*void fatal (FILE msg){
	
	if (msg == NULL){
		printf("Nao foi possivel abrir o arquivo");
		exit(1);}}
*/
