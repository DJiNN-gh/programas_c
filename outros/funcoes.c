/* Exemplo de funcao executada pela main, apenas para imprimar resultado calculado pela funcao (nao implementa para a main = void)*/

#include <stdio.h>
#include <stdlib.h>

void fatorial ()

int main (void){

	fatorial();

	return 0;}

void fatorial (){

	int i, N, fat=1;

	printf("Insira o valor de N: \n");
	scanf("%d", &N);

	for(i=2;i<=N;i++){

		fat*=i;}
	printf("!%d=%d", N, fat);}


/* Agora com paramentro (mas sem retorno/implementacao na main)
 * void fatorial (int N);
 *
 * int main (void){
 *
 * 	int i;
 *
 * 	for(i=1;i<=10;i++){
 * 		
 * 		fatorial(i);}}
 * 		
 * void fatorial (int N){
 *
 * 	int i, fat;
 *
 * 	for(i=2;i<=N;i++){
 *
 * 		fat*=i;}
 *
 * 	printf("!%d=%d", N, fat); */

/* Agora com parametro e com retorno
 *
 *		////////	
 *	N  ->	/  fato/  ->	N!
 *   parametro	/rial  /     retorno
 *		////////
 *	
 *	int	fatorial     (int N)
 *
 *	{
 *		int i, fat=1;
 *
 *		for(i=2;i<=N;i++){
 *			
 *			fat*=i;}
 *
 *			return fat;}
 *
 *	int main (void){
 *
 *		int i, s=0;
 *
 *		for(i=1;i<=10;i++){
 *
 *			s+=fatorial(i);}
 *		
 *		printf("Soma = %d\n", s);} */

