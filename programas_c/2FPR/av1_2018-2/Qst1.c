/* Questão 01 [2,0 pontos]:
Desenvolver uma função recursiva que, dado um vetor contendo Q números reais, determine o maior deles. */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TAM 5

float recursor (float array_f[], unsigned int tam_ui);

int main (void){

	float vetor_f[TAM];
	unsigned int tam_ui=TAM;

	for (unsigned int i=0;i<TAM;i++){

		printf("Insira um valor: \n");
		scanf("%f", &vetor_f[i]);}
		

	printf("O maior valor do vetor e: %f\n", recursor(vetor_f, tam_ui));

return 0;}

// Função que determina qual o maior valor dentro de um vetor
float recursor (float array_f[], unsigned int tam_ui){

	static float maior_f=INT_MIN;

	if (tam_ui > 0){

		if (array_f[tam_ui-1] >= maior_f){

			maior_f=array_f[tam_ui-1];}
	
		recursor(array_f, tam_ui-1);}

return maior_f;}

/* Resolução alternativa
 * float questao01 (float v[], int q){
 *
 * 	if (q > 1){	// Caso Geral
 *		
 *		if(v[q-1] >= questao01(v, q-1){
 *
 *			return v[q-1];}
 *
 *		else{
 *			
 *			return questao01(v, q-1);}}
 *
 *		else{
 *
 *			return v[0];}}
