#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void somador (unsigned int *valor1, unsigned int*valor2);

int main (void){


	int a[] = {2017, 2018, 2019};
	unsigned int b=0, c=1;
	char opcao_c;
	unsigned int i=0;

	for (;i<3;i++){

		printf("Elemento na posicao %d: %d\n", i, a[i]);}

		printf("Elemento na primeira posicao: %d\n", *a);
		printf("Elemento na segunda posicao: %d\n", *a+=1);
		printf("Elemento na terceira posicao: %d\n", *a+=1);
	
		printf("O endereco de a e: %p\n", a);

	for (i=0;i<10;i++){

		printf("Deseja somar? \n");
		fflush(stdin);	scanf("%c", &opcao_c);	opcao_c=toupper(opcao_c);

		if (opcao_c == 'S'){
			somador(&b, &c);}
		
		printf("Valor de b: %d\nValor de c: %d", b, c);}


return 0;}

// Funcao que incrementa valor de b (apenas valor, nao endereco)
void somador (unsigned int *valor1, unsigned int *valor2){

	*valor1+=1;
	*valor2=*(valor2+1);}
