#include <stdio.h>

#define TAM1 100
#define TAM2 50
#define TAM3 23

/* Vetores são alocações estáticas de memória, reservando um espaço contínuo na memória principal.
 * Vetores possuem a propriedade de reservarem apenas espaços do mesmo tipo/tamanho para toda a sua alocação.
 *
 * 	Declaração de um vetor de caracteres de oito posições
 *
 * 	char array_c[8];
 *		// Na declaração, é informado o tamanho do vetor em seu índice.	
 *
 * 	|C|O|N|T|E|U|D|O|
 * 	 0 1 2 3 4 5 6 7
 *
 * 	Vetores iniciam sua contagem de suas posições sempre à partir do 0, logo:
 *
 * 	0 = primeira posição;
 * 	1 = segunda posição;
 * 	2 = terceira posição;
 * 	3 = quarta posição;
 * 	...
 * 	n = enésima+1 posição;
 *
 * 	Chamada do vetor, posição a posição
 *
 * 	array_c[0];
 * 	array_c[1];
 * 	array_c[2];
 * 	...
 * 	array_c[7];
 * 		// Na chamada, é informada a posição do elemento que deseja ser encontrado/manipulado.
 *
 * 	Por se tratar de memória, o índice [0] corresponde ao primeiro endereço de 
 * 	memória do vetor, logo todos os valores subsequentes serão o valor inicial 
 * 	somados ao tamanho correspondente ao tipo do vetor.
 *
 * 	int array_i[3];
 *
 * 	|690|780|870|
 * 	  0   1   2
 *	End+0by
 *	    End+4by
 *	    	End+8by
 *
 *	 char array_c[5];
 *
 *	 |A|L|L|A|N|
 *	  0 1 2 3 4
 *	 End+0by
 *	    End+1by
 *	      End+2by
 *	        End+3by
 *	           End+4by
 *
 */

int main (void){

	char array_c[3], s[128];
	int arrayA_i[3], arrayB_i[100];
	unsigned int i, c; 

	//Testando um array de caracteres
	printf("O tamanho de c(array char): %zu\n", sizeof array_c);
	printf("O numero de elementos de c(array char): %zu\n\n", sizeof array_c / sizeof array_c[0]); // Pode-se utilizar também a seguinte fórmula: sizeof (variável) / sizeof (tipo_variável).

	array_c[0]='A';
	array_c[1]=0x42;
	array_c[2]=67;

	for(i=0;i<sizeof array_c / sizeof (char);i++){
		printf("O elemento %d de c(array char) e: %d\n", i, array_c[i]);
		printf("O endereco do array c[%d] em memoria: %p\n", i, &array_c[i]);}

	putchar('\n');

	// Testando um array de inteiros
	printf("O tamanho de i(array int): %zu\n", sizeof arrayA_i);
	printf("O numero de elementos de i(array int): %zu\n\n", sizeof arrayA_i / sizeof array_i[0]);

	arrayA_i[0]='D';
	arrayA_i[1]=0x45;
	arrayA_i[2]=70;

	for(i=0;i<sizeof arrayA_i / sizeof (int);i++){
		
		printf("O elemento %u de i(array int) e: %d\n", i, arrayA_i[i]);
		printf("O endereco do array i[%u] em memoria: %p\n", i, &arrayA_i[i]);}

	putchar('\n');

		for(i=0;i<TAM1;i++){	// Preenchendo de 0 à 99
			
			arrayB_i[i]=i;
			printf("Valor de X na posicao %u: %d\n", i, arrayB_i[i]);}

		putchar('\n');
		
		for(i=0;i<TAM1;i++){	// Preenchendo de 1 à 100
			
			arrayB_i[i]=i+1;
			printf("Valor de X na posicao %u: %d\n", i, arrayB_i[i]);}
		
		putchar('\n');

		for(i=0;i<TAM2;i++){	// Preenchendo potências
			
			arrayB_i[i]=i*i;
			printf("Valor de X na posicao %u: %d\n", i, arrayB_i[i]);}

		putchar('\n');

		arrayB_i[0]=0;
		arrayB_i[1]=1;

		for(i=2;i<TAM3;i++){	// Fibonacci
			
			arrayB_i[i]=array_x[i-1]+array_x[i-2];
			printf("Valor de X na posicao %u: %d\n", i-2, arrayB_i[i]);}

return 0;}
