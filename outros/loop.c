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

	// O i e impresso atraves de uma repeticao em loop, com uso de um label e um condicional

	printf("\n");

	for (i=0;i<3;i++){
	
		printf("O valor de i e: %u\n", i);}
		
	// O i e impresso atraves de uma repeticao em loop, com uso da estrutura for
		
	printf("\n");

	i=0;

	for (;;){

		printf("O valor de i e: %u\n", i++);}
	if (i > 2){
		break;}
	else{
		continue;}
	
	// O i e impresso atraves de uma repeticao em loop, com o uso da estrutura for sem seus parametros. Sao usados o pos-incremento, o break e o continue para estabelecer os parametros

	printf("\n");

	while (i < 2)
return 0;}
