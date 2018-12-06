/* QUESTÃO 05:
Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores 
conforme forem pares ou ímpares. */

#include <stdio.h>
#include <stdlib.h>

#define TAM_VET 300

void distribuidor (int array_i[], int tam_i, int arrayPar_i[], int arrayImpar_i[], int *j, int *k);

int main (void){

	unsigned int i=0, contPar, contImpar;
	int vetA_i[TAM_VET];
	int vetPar_i[TAM_VET];
	int vetImpar_i[TAM_VET];

	for (;i<TAM_VET;i++){

		printf ("Insira os valores do vetor: \n");
		scanf ("%d", &vetA_i[i]);}

	distribuidor (vetA_i, TAM_VET, vetPar_i, vetImpar_i, &contPar, &contImpar){
		for (;i<contPar;i++){
			printf ("Lista dos valores pares: %d\n", vetPar_i[i]);}}
	
	distribuidor (vetA_i, TAM_VET, vetPar_i, vetImpar_i, &contPar, &contImpar){
		for (;i<contImpar;i++){
			printf ("Lista dos valores impares: %d\n", vetImpar_i[i]);}}
	 
return 0;}

void distribuidor (int array_i[], int tam_i, int arrayPar_i[], int arrayImpar_i[], int *j, int *k){

	unsigned int i=0;

	for (;i<tam_i;i++){
	
		if (array_i[i] % 2 == 0){

			arrayPar_i[*j]=array_i[i];
			*j++;}
		else{
			arrayImpar_i[*k]=array_i[i];
			*k++;}}
