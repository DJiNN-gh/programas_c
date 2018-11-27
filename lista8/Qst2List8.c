/* QUESTÃO 02:
Implementar uma função que, dado um vetor de reais, troque o primeiro e o segundo elementos, 
em seguida o terceiro e o quarto elementos e assim sucessivamente, até se chegar ao final do 
vetor. */

#include <stdio.h>
#include <stdlib.h>

void trocador (float array_f[], int tamVet);

int main (void){

	int tamVet_i, i;

	printf("Insira o tamanho do vetor: \n");
	scanf("%d", &tamVet_i);

	float * vet_f = malloc(tamVet_i * sizeof(float));

	for(i=0;i<tamVet_i;i++){

		printf("Insira os elementos do vetor: \n");
		scanf("%f", &vet_f[i]);}
	
	trocador(vet_f, tamVet_i);
	
return 0;}

void trocador (float array_f[], int tamVet){

	int i, j, aux;

	for(i=0, j=1;i<tamVet;i+=2, j+=2){

		aux=array_f[j];
		array_f[j]=array_f[i];
		array_f[i]=aux;}}
