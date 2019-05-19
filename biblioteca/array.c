#include <stdio.h>

#define TAM1 100
#define TAM2 50
#define TAM3 23

int main (void){

	char array_c[3], s[128];
	int array_i[3], array_x[100];
	unsigned int i, c; 

	//Testando um array de caracteres
	printf("O tamanho de c(array char): %zu\n", sizeof array_c);
	printf("O numero de elementos de c(array char): %zu\n\n", sizeof array_c / sizeof array_c[0]); // Pode-se utilizar também a seguinte fórmula: sizeof (variavel) / sizeof (tipo_variavel).

	array_c[0]='A';
	array_c[1]=0x42;
	array_c[2]=67;

	for(i=0;i<sizeof array_c / sizeof (char);i++){
		printf("O elemento %d de c(array char) e: %d\n", i, array_c[i]);
		printf("O endereco do array c[%d] em memoria: %p\n", i, &array_c[i]);}

	putchar('\n');

	// Testando um array de inteiros
	printf("O tamanho de i(array int): %zu\n", sizeof array_i);
	printf("O numero de elementos de i(array int): %zu\n\n", sizeof array_i / sizeof array_i[0]);

	array_i[0]='D';
	array_i[1]=0x45;
	array_i[2]=70;

	for(i=0;i<sizeof array_i / sizeof (int);i++){
		
		printf("O elemento %u de i(array int) e: %d\n", i, array_i[i]);
		printf("O endereco do array i[%u] em memoria: %p\n", i, &array_i[i]);}

	putchar('\n');

		for(i=0;i<TAM1;i++){	// Preenchendo de 0 à 99
			
			array_x[i]=i;
			printf("Valor de X na posicao %u: %d\n", i, array_x[i]);}

		putchar('\n');
		
		for(i=0;i<TAM1;i++){	// Preenchendo de 1 à 100
			
			array_x[i]=i+1;
			printf("Valor de X na posicao %u: %d\n", i, array_x[i]);}
		
		putchar('\n');

		for(i=0;i<TAM2;i++){	// Preenchendo potências
			
			array_x[i]=i*i;
			printf("Valor de X na posicao %u: %d\n", i, array_x[i]);}

		putchar('\n');

		array_x[0]=0;
		array_x[1]=1;

		for(i=2;i<TAM3;i++){	// Fibonacci
			
			array_x[i]=array_x[i-1]+array_x[i-2];
			printf("Valor de X na posicao %u: %d\n", i-2, array_x[i]);}

return 0;}
