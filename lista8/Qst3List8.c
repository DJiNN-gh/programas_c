/* QUESTÃO 03:
Pede-se a implementação de uma função que, dado um vetor contendo números reais, determine se o mesmo encontra-se ordenado de forma crescente. */

#include <stdio.h>
#include <stdlib.h>

bool checador (float array_f[], int tamVet_i);

int main (void){

	int tamVet_i, i;

	printf("Insira o tamanho do vetor: \n");
	scanf("%d", &tamVet_i);

	float *vet_f = malloc(tamVet_i * (float));

	for(i=0;i<tamVet_i;i++){

	
		printf("Insira os elementos do vetor: \n");
		scanf("%f", &vet_f[i]);}
	
	if (checador(vet_f, tamVet_i)==0){

		printf("Não esta ordenado de forma crescente");}
	else{
		printf("Esta ordenado de forma crescente");}

return 0;}

bool checador (float array_f[], int tamVet_i){
	int i,j;

	for (i=0,j=1; i<tamvet_i; i++, j++){
		
		if (array_f[i] > array_f[j]){
		return 0;}}
	
	return 1;}
