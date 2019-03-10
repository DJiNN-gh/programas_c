#include <stdio.h>
#include <stdlib.h>

int primador (int a, int b);
void disjuntor (int arrayA_i[], int arrayB_i[], unsigned int tamA_ui, unsigned int tamB_ui);
int validador (char string_c[]);

int main (void){

	int valor1_i, valor2_i;
	unsigned int result_ui;

	printf("Insira dois valores inteiros: \n");
	scanf("%d %d", &valor1_i, &valor2_i);

	result_ui=primador(valor1_i, valor2_i);

	if (result_ui == 0){
		printf("Nao sao primos entre si!\n");}
	else{
		printf("Sao primos entre si!\n");}

return 0;}

// Questao 02 - Funcao que testa se dois numeros sao primos entre si
int primador (int a, int b){

	int maior_i;
	unsigned int i;

	if (a >= b){
		maior_i=a;}
	else{
		maior_i=b;}

	for (i=2;i<maior_i;i++){
		
		if (a % i == 0 || b % i == 0){

			return 0;}}
return 1;}

// Questao 03 - Funcao que cria a disjuncao de dois conjuntos
void disjuntor (int arrayA_i[], int arrayB_i[], unsigned int tamA_ui, unsigned int tamB_ui){

	unsigned int j, k, l, m, maior_ui;
	
	if (tamA_ui >= tamB_ui){
		maior_ui=tamA_ui;}
	else{
		maior_ui=tamB_ui;}

	int arrayC_i[maior_ui];

	for (k=0;k<tamA_ui;k++){

		for (l=0;l<tamB_ui;l++){

			if (arrayA_i[k] != arrayB_i[l]){

				for (m=1;m<tamA_ui;m++){

					if (arrayA_i[k] != arrayA_i[m]){

						arrayC_i[j]=arrayA_i[k];	// Preenche vetor C apenas com elementos de A que nao existem em B
						j++;}}}}}}	// j regula o tamanho do vetor C

// Questao 04 - Funcao que valida um endereco de e-mail
int validador (char string_c[]){

	unsigned int i;

	// Teste do primeiro caracter
	if (string_c[0] < 97 || string_c[0] > 122){

		return 0;}

	// Teste do username
	for (i=0;string_c[i] != 64; i++){

		if ((string_c[i] < 48 || string_c[i] > 57) || (string_c[i] < 97 || string_c[i] > 122)){
		
			return 0;}}

	i++;
	
	// Teste do provedor
	for (;string_c[i] != 46; i++){

		if (string_c[i] < 97 || string_c[i] > 122){

			return 0;}}

	i++;

	// Teste do protocolo
	if (string_c[i] != 99 || string_c[i] != 111){

		return 0;}

	i++;

	if (string_c[i] != 111 || string_c[i] != 114){
		
		return 0;}

	i++;

	if (string_c[i] != 109 || string_c[i] != 103){

		return 0;}

	i++;

	if (string_c[i] != 46){

		return 0;}
	
	i++;

	if (string_c[i] != 98 || string_c[i+1] != 114){

		return 0;}

return 1;}	
