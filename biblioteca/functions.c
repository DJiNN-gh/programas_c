#include <stdio.h>
#include <stdlib.h>

void fatorial_1 ();
void fatorial_2 (int n);
int fatorial_3 (int n);
float soma (float array_f[], int tam_vet_i);
void inverte (float array_f[], int tam_vet_i);
void binario (int valor);


/*
 *	Modelo gráfico do processamento de uma função
 *
 *		////////	
 *	N  ->	/  fato/  ->	N!
 *  parâmetro	/rial  /     retorno
 *		////////
 *
 */


int main (void){

	int valor_i;

	printf("Insira um valor a ser operado: \n");
	scanf("%d", &valor_i);

	fatorial_1();	// Chamada da primeira função. Não há parâmetro, pois o valor a ser operado será obtido dentro da própria função. Não há retorno, pois o resultado da operação será exibido dentro da própria função.

	fatorial_2(valor_i);	// Chamada da segunda função. Há um parâmetro sendo passado para essa função, e que será operado por ela. Não há retorno, pois o resultado da operação será exibido dentro da própria função.

	int elemento_i=fatorial_3(valor_i);	// Chamada da terceira função. Há um parâmetro sendo passado para essa função, e que será operado por ela. Há um retorno, pois o resultado não é exibido dentro da própria função, sendo necessário que esse retorno seja gravado ou exibido por quem chamou a função originalmente.

	printf("Resultado: %d\n", elemento_i);
				// É possível também realizar um retorno direto para quem chamou a função originalmente, sem a necessidade de gravar o retorno em uma variável auxiliar.
				// printf("Resultado: %d\n", fatorial_3(valor_i));

return 0;}

// Função que realiza a operação fatorial em um valor (sem parâmetro e sem retorno)
void fatorial_1 (){

	int i, n, fat=1;

	printf("Insira o valor de N: \n");
	scanf("%d", &n);

	for(i=2;i<=n;i++){

		fat*=i;}

	printf("!%d=%d", n, fat);}


// Agora com parâmentro, mas sem retorno
void fatorial_2 (int n){
	
	int i, fat;

 	for(i=2;i<=n;i++){

 		fat*=i;}

 	printf("!%d=%d", n, fat);}

// Agora com parâmetro e com retorno
int fatorial_3 (int n){
		
	int i, fat=1;

	for(i=2;i<=n;i++){
			
		fat*=i;}
	
return fat;}


/*	Outros exemplos de funções
 *
 * 1) Exibir os números de 1 a 1000
 * 	Sem parâmetro, sem retorno
 * 
 * 2) Exibir os números de 1 a N
 * 	Com parâmetro (N), sem retorno
 *
 * 3) Calcular a soma dos números de 1 a 1000
 * 	Sem parâmetro, com retorno (s)
 *
 * 4) Calcular a soma dos números de 1 a N
 * 	Com parâmetro (N), com retorno (s)
 *
 * 5) Calculas S = 1+(1/2)+(1/4)+...+(1/N)
 * 	Com parâmetro (N), com retorno (s)
 *
 * 6) Calcular S = (1/N!)+(2/(N-1)!)+...+(N-1)/2!+N
 * 	Com parâmetro (N), com retorno (s)
 *
 * 7) Calcular a soma e a mádia dos números de 1 a N
 *	Com parâmetro (N), com retorno (s, Media)
 *
 * 8) Trocar o valor de duas variáveis reais
 * 	Com parâmetro (a, b), com retorno (a, b)
 */

// 1) Determinar a soma de todos os números de um vetor de X floats:
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

// 3) Exibir um número inteiro em binário:
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

// 4) 
