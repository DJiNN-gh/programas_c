/* 1) Exibir os numeros de 1 a 1000
 * 	Sem parametro, sem retorno
 * 
 * 2) Exibir os numeros de 1 a N
 * 	Com parametro (N), sem retorno
 *
 * 3) Calcular a soma dos numeros de 1 a 1000
 * 	Sem parametro, com retorno (s)
 *
 * 4) Calcular a soma dos numeros de 1 a N
 * 	Com parametro (N), com retorno (s)
 *
 * 5) Calculas S = 1+(1/2)+(1/4)+...+(1/N)
 * 	Com parametro (N), com retorno (s)
 *
 * 6) Calcular S = (1/N!)+(2/(N-1)!)+...+(N-1)/2!+N
 * 	Com parametro (N), com retorno (s)
 *
 * 7) Calcular a soma e a media dos numeros de 1 a N
 *	Com parametro (N), com retorno (s, Media)
 *
 * 8) Trocar os conteudos de dois numeros reais
 * 	Com parametro (a, b), com retorno (a, b)
 */


#include <stdio.h>
#include <stdlib.h>

#define TAM_VET 5

float soma (float array_f[], int tam_vet_i);
void inverte (float array_f[], int tam_vet_i);
void binario (int valor);

int main (void){

	int i, tam, valor;
	float vetor_f[TAM_VET];

	tam=sizeof (vetor_f) / sizeof (float);

	for(i=0;i<tam;i++){

		printf("Insira os valores do vetor: \n");
		scanf("%f", &vetor_f[i]);}

	printf("Valor da soma: %.f\n", soma(vetor_f, tam));

	printf("Insira o valor a ser convertido: \n");
	scanf("%d", &valor);

	binario (valor);

return 0;}

// 1) Determinar a soma de todos os numeros de um vetor de X floats:
float soma (float array_f[], int tam_vet_i){

	int i;
	float sum;

	for(i=0;i<tam_vet_i;i++){

		sum+=array_f[i];}
	
	return sum;}

// 2) Inverter os elementos de um vetor de float:
void inverte (float array_f[], int tam_vet_i){

	int i, j;
	float aux;

	for(i=0,j=tam_vet_i-1;i<tam_vet_i/2;i++,j--){

		aux=array_f[j];
		array_f[j]=array_f[i];
		array_f[i]=aux;}}

// 3) Exibir um numero inteiro em binario:
void binario (int valor){
	
	int i=0, j, k, cont=0;
	int array_i[128];

	do{
		array_i[i]=valor%2;
		valor/=2;
		cont++;	i++;
	} while (valor != 0);

	for(j=cont-1, k=1;j>=0;j--, k++){

		printf("Digito %d: %d\n", k, array_i[j]);}}
