#include <stdio.h>
#include <stdlib.h>

int main (void){

	unsigned int i;
	
	i=0;
	printf("O valor de i e: %u\n", i);
	i++;
	printf("O valor de i e: %u\n", i);
	i++;
	printf("O valor de i e: %u\n\n", i);

	// O i e impresso repetidas vezes de 0 a 2, com repeticao de codigo

	i=0;

imprimir:
	printf("O valor de i e: %u\n", i);
	i++;

	if (i < 3){
		goto imprimir;}

	// O i e impresso atraves de uma repeticao em loop, com uso de um label e uma condicional

	printf("\n");

	for (i=0;i<3;i++){
	
		printf("O valor de i e: %u\n", i);}
		
	// O i e impresso atraves de uma repeticao em loop, com uso da estrutura FOR
		
	printf("\n");

	i=0;

	for (;;){

		printf("O valor de i e: %u\n", i++);}
	if (i > 2){
		break;}
	else{
		continue;}
	
	// O i e impresso atraves de uma repeticao em loop, com o uso da estrutura FOR sem seus parametros. Sao usados o pos-incremento, o break e o continue para estabelecer os parametros

	printf("\n");

	i=0;

	while (i < 3){
		printf("O valor de i e: %u\n", i++);}

	// O i e impresso atraves de uma repeticao em loop, com o uso da estrutura WHILE
	
	printf("\n");

	i=0;

	do{
		printf("O valor de i e: %u\n", i++);}
	while (i < 3);
	
	// O i e impresso atraves de uma repeticao em loop, com o uso da estrutura DO... WHILE

	printf("\n");

	i=0;

	while(true){
		
		printf("O valor de i e: %u\n", i);
	if (i > 2){
		break;}
	i++;}

	// O i e impresso atraves de uma repeticao em loop, com o uso da estrutura WHILE e uma condicional para limitar sua execucao.

return 0;}
