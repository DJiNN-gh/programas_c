#include <stdio.h>

int main (void){

	char array_c[3];
	int i, array_i[3];

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

	return 0;}
