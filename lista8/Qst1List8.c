/* QUESTÃO 01:
Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um 
vetor A. */

#include <stdio.h>
#include <stdlib.h>

int detector (float array_f[], int tamVet, int num);

int main (void){

	int tamVetA_i, i;
	float ocrValor;
	// float *vetorA_f;
	
	printf("Insira o tamanho do vetor: \n");
	scanf("%d", &tamVetA_i);

	float * vetorA_f = malloc(tamVetA_i * sizeof(float));

	printf("Insira o valor a ser buscado: \n");
	scanf("%f", &ocrValor);

	for(i=0;i<tamVetA_i;i++){

		printf("Insira os valores do vetor: \n");
		scanf("%f", &vetorA_f[i]);}

	printf("O numero de ocorrencias foi: %d\n", detector(vetorA_f, tamVetA_i, ocrValor));

return 0;}

int detector (float array_f[], int tamVet, int num){

	int cont, i;
	
	for(i=0;i<tamVet;i++){

		if (array_f[i] == num){

			cont++;}}

return cont;}
