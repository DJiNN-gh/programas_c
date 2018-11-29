#include <stdio.h>

int main (void){

	char array_c[3];
	int i, array_i[3];
	int array_x[100];

	printf("O tamanho de c (array char): %zu\n", sizeof array_c);
	printf("O numero de elementos de c (array char): %zu\n\n", sizeof array_c / sizeof array_c[0]); // Pode-se utilizar a formula sizeof -variavel- / sizeof -tipo_variavel-

	array_c[0]='A';
	array_c[1]=0x42;
	array_c[2]=67;

	for(i=0;i<sizeof array_c / sizeof (char);i++){
		printf("O elemento %d de c(array char) e: %d\n", i, array_c[i]);
		printf("O endereco do array c[%d] em memoria: %p\n\n", i, &array_c[i]);}
		printf("O endereco do array c (array char) em memoria: %p\n", array_c);
		printf("O endereco do array &c (array char) em memoria: %p\n\n", &array_c);

	printf("O tamanho de i (array int): %zu\n", sizeof array_i);
	printf("O numero de elementos de i (array int): %zu\n\n", sizeof array_i / sizeof array_i[0]);

	array_i[0]='D';
	array_i[1]=0x45;
	array_i[2]=70;

	for(i=0;i<sizeof array_i / sizeof (int);i++){
		printf("O elemento %d de i(array int) e: %d\n", i, array_i[i]);
		printf("O endereco do array i[%d] em memoria: %p\n\n", i, &array_i[i]);}
		printf("O endereco do array i (array int) em memoria: %p\n", array_i);
		printf("O endereco do array &i (array int) em memoria: %p\n\n", &array_i);

		for(i=0;i<100;i++){	// Preenchendo de 0 a 99
			array_x[i]=i;
			printf("Valor de X na posicao %d: %d\n", i, array_x[i]);}
		
		for(i=0;i<100;i++){	// Preenchendo de 1 a 100
			array_x[i]=i+1;
			printf("Valor de X na posicao %d: %d\n", i, array_x[i]);}
		
		for(i=0;i<100;i++){	// Preenchendo potencias
			array_x[i]=i*i;
			printf("Valor de X na posicao %d: %d\n", i, array_x[i]);}

		for(i=1;i<100;i++){	// Preenchendo em intervalos de 3
			array_x[i]=array_x[i-1]+3;
			printf("Valor de X na posicao %d: %d\n", i, array_x[i]);}

		for(i=2;i<100;i++){	// Fibonacci
			array_x[i]=array_x[i-1]+array_x[i-2];
			printf("Valor de X na posicao %d: %d\n", i, array_x[i]);}

	return 0;}
