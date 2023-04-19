#include <stdio.h>
#include <stdlib.h>

#define TAM_INT 32

void fatorial_1 ();
// Protótipo de uma função
// 
// void					fatorial_1		( )
//  /\					    /\			 /\
//  ||					    ||			 ||
// Definição do tipo de retorno		Nome da função		Parâmetros da função
//
// O retorno irá ditar o quê irá	O nome será a		Parâmetros/argumentos
// retornar para a função que		maneira de chamar	são as variáveis que
// a chamou anteriormente.		uma função.		serão trabalhadas pela
//								funçäo.

void fatorial_2 (int n);
int fatorial_3 (int n);
int calculador_1 ();
int calculador_2 (int n);
float calculador_3 (int n);
void calculador_4 (int n, int *soma_i, float *media_f);
void trocador (float *a, float *b);
float calculador_5 (float *array_f, unsigned int tam_ui);
void inversor (float *array_f, unsigned int tam_ui);
void conversor (int valor_i);

/*
 *	Modelo abstrato do processamento de uma função
 *
 *		////////	
 *	N  ->	/  fato/  ->	N!
 *  parâmetro	/rial  /     retorno
 *		////////
 *
 * É enviado um argumento para que a função o trabalhe.
 * Então, um processamento é feito em cima desse argumento.
 * Ao final, um resultado é retornado para quem chamou essa função.
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
 * 	Com parâmetro (n), sem retorno
 *
 * 3) Calcular a soma dos números de 1 a 1000
 * 	Sem parâmetro, com retorno (i)
 *
 * 4) Calcular a soma dos números de 1 a N
 * 	Com parâmetro (n), com retorno (i)
 *
 * 5) Calculas S = 1+(1/2)+(1/4)+...+(1/N)
 * 	Com parâmetro (n), com retorno (s)
 *
 * 6) Calcular a soma e a média dos números de 1 a N
 *	Com parâmetro (N), com retorno (s, Media)
 *
 * 7) Trocar o valor de duas variáveis reais
 * 	Com parâmetro (a, b), com retorno (a, b)
 * 
 * 8) Calcular a soma de todos os valores de um vetor de reais
 * 	Com parâmetro (vet, tam), com retorno (soma)
 *
 * 9) Inverter os elementos de um vetor de reais
 * 	Com parâmetro (vet, tam), sem retorno
 *
 * 10) Converter e exibir um número inteiro em binário
 * 	Com parâmetro (valor), sem retorno
 */

// 1) Função que exibe os números de 1 a 1000
void exibidor_1 (){

	for (unsigned int i=1; i<=1000; i++){

		printf("%u ", i);}}

// 2) Função que exibe os números de 1 a N
void exibidor_2 (int n){

	for (unsigned int i=1; i<=n; i++){

		printf("%u ", i);}}

// 3) Função que calcula a soma dos números de 1 a 1000
int calculador_1 (){

	int soma_i=0;

	for (unsigned int i=1;i<=1000;i++){

		soma_i+=i;}

return soma_i;}

// 4) Função que calcula a soma dos números de 1 a N
int calculador_2 (int n){

	int soma_i=0;

	for (unsigned int i=1; i<=n; i++){

		soma_i+=i;}

return soma_i;}

// 5) Função que calcula a soma de expoentes negativos
float calculador_3 (int n){

	float soma_f=0;

	for (unsigned int i=1;i<=n; i+=i){

		soma_f+=1/i;}

return soma_f;}

// 6) Função que calcula a soma dos números de 1 a N e tira a média
void calculador_4 (int n, int *soma_i, float *media_f){

	for (unsigned int i=1;i<=n;i++){

		*soma_i+=i;}
	
	*media_f=*soma_i/n;}

// 7) Função que troca o valor de duas variáveis reais
void trocador (float *a, float *b){

	float aux_f;

	aux_f=*a;
	*a=*b;
	*b=aux_f;}

// 8) Função que calcula a soma de todos os números de um vetor de X valores reais
float calculador_5 (float *array_f, unsigned int tam_ui){

	unsigned int i;
	float soma_f;

	for (i=0;i<tam_ui;i++){

		soma_f+=array_f[i];}
	
return soma_f;}

// 9) Função que inverte os elementos de um vetor de reais
void inversor (float *array_f, unsigned int tam_ui){

	unsigned int i, j;
	float aux_f;

	for (i=0,j=tam_ui-1;i<tam_ui/2;i++,j--){

		aux_f=array_f[j];
		array_f[j]=array_f[i];
		array_f[i]=aux_f;}}

// 10) Função que exibe um número inteiro em binário
void conversor (int valor_i){
	
	unsigned int i=0, j, k, cont_ui=0;
	int array_i[TAM_INT];

	do{
		array_i[i]=valor_i%2;
		valor_i/=2;
		cont_ui++;
		i++;
	} while (valor_i != 0);

	for (j=cont_ui-1, k=1;j>=0;j--, k++){

		printf("Digito %d: %d\n", k, array_i[j]);}}
