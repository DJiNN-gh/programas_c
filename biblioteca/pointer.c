#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* 
 * Variáveis do tipo ponteiro (pointer) guardam o endereço para o conteúdo de alguma variável.
 * Essas variáveis possuem o tamanho da palavra correspondente à arquitetura do processador. 
 * O intervalo entre cada conteúdo, em memória, é do tamanho do tipo designado ao ponteiro na sua criação.
 * Exemplo: uma máquina x86 possui ponteiros de tamanho 32 bits enquanto uma máquina x64 possui ponteiros de tamanho 64 bits.
 *
 */

int main (void){

	char opcao_c;
	unsigned char c=0;
	unsigned int i=0, j=0, k=1;
	
	// Declaração de ponteiros	
	int a[]={2017, 3017, 4017};	// Modo de atribuição de valores inteiros a um vetor.
	char s[]="Allan";	// Modo de atribuição de caracteres à uma string.
	int *p=&a[0];
	char *q=&s[0];

	printf("O endereço de p e: %p\n", p);
	printf("O conteudo de p e: %d\n", *p);
	printf("O tamanho de p e: %zu bytes\n", sizeof(p));	// O resultado dessa chamada muda de acordo com a arquitetura da CPU.

	putchar('\n');

	printf("O endereço de q e: %p\n", q);
	printf("O conteudo de q e: %c, em hexa %x\n", *q, *q);
	printf("O tamanho de q e: %zu bytes\n", sizeof(q));	// O resultado dessa chamada muda de acordo com a arquitetura da CPU.

	putchar('\n');
	
	// Testando um vetor de inteiros
	for (;i<3;i++){

		printf("Elemento na posicao %u: %d\n", i, a[i]);
		printf("O endereco da posicao %u e: %p\n", i, &a[i]); // Utilizando o operador & para buscar o endereço de cada posição. Nesse caso, a utilização desse operador é opcional para vetores.
		printf("O endereco da posicao %u e: %p\n", i, (a+i));	// Utilizando a soma do endereço com um inteiro 4 bytes.
		printf("O tamanho de a(int) e: %zu\n", sizeof(a));}

	putchar('\n');

	// Testando um vetor de caracteres
	for (;c<5;c++){

		printf("Elemento na posicao %u: %c, em hexa: %x\n", c, s[c], s[c]);
		printf("O endereco da posicao %u e: %p\n", c, &s[c]); // Utilizando o operador & para buscar o endereço de cada posição. Nesse caso, a utilização desse operador é opcional para vetores.
		printf("O endereco da posicao %u e: %p\n", c, (s+c));	// Utilizando a soma do endereço com um inteiro 1 byte.
		printf("O tamanho de s(char) e: %zu\n", sizeof(s));}

	putchar('\n');

	// Demonstrando a aritmética de ponteiros
	// Vetor de inteiros
	// Aqui, é somado 1 à variável do tipo ponteiro para inteiro. O compilador irá subentender que o inteiro possui 4 bytes e irá acrescer 4 posições de memória na sua soma.
	printf("Elemento na primeira posicao: %d\n", *a);
	printf("Elemento na segunda posicao: %d\n", *(a+1));
	printf("Elemento na terceira posicao: %d\n", *(a+2));
	
	putchar('\n');

	// Vetor de caracteres
	// Aqui, é somado 1 à variável do tipo ponteiro para caractere. O compilador irá subentender que o inteiro possui 1 byte e irá acrescer 1 posição de memória na sua soma.
	printf("Elemento na primeira posicao: %c, em hexa: %x\n", *s, *s);
	printf("Elemento na segunda posicao: %c, em hexa: %x\n", *(s+1), *(s+1));
	printf("Elemento na terceira posicao: %c, em hexa: %x\n", *(s+2), *(s+2));
	printf("Elemento na quarta posicao: %c, em hexa: %x\n", *(s+3), *(s+3));
	printf("Elemento na quinta posicao: %c, em hexa: %x\n", *(s+4), *(s+4));
	
return 0;}
