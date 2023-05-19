#include <stdio.h>
#include <limits.h>
#include <stdint.h>

/*
	Em muitas linguagens de programação diferentes podemos encontrar o tipo de dado inteiro, do inglês integer, abrevido comumente
	como int, e pode armazenar valores dos conjuntos dos naturais e dos inteiros, assim como o 0.

	Na linguagem C, seu tamanho fica definido de acordo com a compilação utilizada, podendo variar de 2 bytes de tamanho a 8 bytes
	de tamanho por padrão.

	Pode-se também, através de modificadores, reduzir ou extender sua capacidade de representações, bem como remover o
	sinal de negativo nativo ao tipo.

	Exemplo:

		inteiro de 4 bytes com sinal

		menor valor					zero				maior valor
		-2,147,483,648...			0...				2,147,483,647

		inteiro de 4 bytes sem sinal

		menor valor (zero)			maior valor
		0...						4,294,967,295

	Nota-se que os valores representados mudam, porém o número de representações permanece igual, sendo a diferença a presença da
	representação de valores negativos para o inteiro sem sinal.

	O número de representações de um inteiro se dará pela fórmula ((2⁸)^n)-1, onde 2 é a base binária, 8 é o número de bits em um byte e n é
	o valor de bytes que o inteiro possui.
*/

int main (void){

	int i=INT_MAX;
	// Declaração padrão do tipo inteiro. Seu tamanho muda de acordo com a versão de compilação da linguagem

	unsigned int unsgi_i=UINT_MAX;
	// O modificador unsigned remove a capacidade da variável de representar valores menores que zero dentro do conjunto dos inteiros

	int32_t i32_i=INT32_MAX;
	// Declaração padrão de um inteiro de 32 bits/4 bytes

	uint32_t ui32_i=UINT32_MAX;
	// Declaração padrão de um inteiro de 32 bits/4 bytes sem sinal

	int16_t i16_i=SHRT_MAX;
	// Declaração padrão de um inteiro de 16 bits/2 bytes

	uint16_t ui16_i=USHRT_MAX;
	// Declaração padrão de um inteiro de 16 bits/2 bytes sem sinal

	int8_t i8_i=CHAR_MAX;
	// Declaração padrão de um inteiro de 8 bits/1 byte

	uint8_t ui8_i=UCHAR_MAX;
	// Declaração padrão de um inteiro de 8 bits/1 byte sem sinal

	short int sint_i=SHRT_MAX;
	// O modificador short reduz o tamanho do tipo da variável à metade do seu valor normal

	unsigned short int usint_i=USHRT_MAX;
	long int lint_i=ULLONG_MAX;
	// O modificador long extende o tamanho do tipo da variável ao dobro do seu valor normal

	unsigned long int ulint_i=ULLONG_MAX;

	// Análise do inteiro
	printf("Tamanho de i (int) em bytes: %zu\t Em bits: %zu\n", sizeof i, sizeof i*8);
	printf("Valor de i (int): %d\n", i);
	printf("Valor de i (int) + 1: %d\n\n", ++i);
	
	// Análise do inteiro sem sinal (unsigned)
	printf("Tamanho de i (unsigned int) em bytes: %zu\t Em bits: %zu\n", sizeof unsgi_i, sizeof unsgi_i*8);
	printf("Valor de i (unsigned int): %u\n", unsgi_i);
	printf("Valor de i (unsigned int) + 1: %u\n\n", ++unsgi_i);

	// Análise do inteiro32
	printf("Tamanho de i (int32) em bytes: %zu\t Em bits: %zu\n", sizeof i32_i, sizeof i32_i*8);
	printf("Valor de i (int32): %d\n", i32_i);
	printf("Valor de i (int32) + 1: %d\n\n", ++i32_i);

	// Análise do inteiro32 sem sinal (unsigned)
	printf("Tamanho de i (uint32) em bytes: %zu\t Em bits: %zu\n", sizeof ui32_i, sizeof ui32_i*8);
	printf("Valor de i (uint32): %u\n", ui32_i);
	printf("Valor de i (uint32) + 1: %u\n\n", ++ui32_i);

	// Análise do inteiro16
	printf("Tamanho de i (int16) em bytes: %zu\t Em bits: %zu\n", sizeof i16_i, sizeof i16_i*8);
	printf("Valor de i (int16): %d\n", i16_i);
	printf("Valor de i (int16) + 1: %d\n\n", ++i16_i);

	// Análise do inteiro16 sem sinal (unsigned)
	printf("Tamanho de i (uint16) em bytes: %zu\t Em bits: %zu\n", sizeof ui16_i, sizeof ui16_i*8);
	printf("Valor de i (uint16): %u\n", ui16_i);
	printf("Valor de i (uint16) + 1: %u\n\n", ++ui16_i);

	// Análise do inteiro8
	printf("Tamanho de i (int8) em bytes: %zu\t Em bits: %zu\n", sizeof i8_i, sizeof i8_i*8);
	printf("Valor de i (int8): %d\n", i8_i);
	printf("Valor de i (int8) + 1: %d\n\n", ++i8_i);

	// Análise do inteiro8 sem sinal (unsigned)
	printf("Tamanho de i (uint8) em bytes: %zu\t Em bits: %zu\n", sizeof ui8_i, sizeof ui8_i*8);
	printf("Valor de i (uint8): %u\n", ui8_i);
	printf("Valor de i (uint8) + 1: %u\n\n", ++ui8_i);

	// Análise do inteiro reduzido (short int)
	printf("Tamanho de i (short int) em bytes: %zu\t Em bits: %zu\n", sizeof sint_i, sizeof sint_i*8);
	printf("Valor de i (short int): %d\n", sint_i);
	printf("Valor de i (short int) + 1: %d\n\n", ++sint_i);

	// Análise do inteiro reduzido sem sinal (unsigned short int)
	printf("Tamanho de i (unsigned short int) em bytes: %zu\t Em bits: %zu\n", sizeof usint_i, sizeof usint_i*8);
	printf("Valor de i (unsigned short int): %u\n", usint_i);
	printf("Valor de i (unsigned short int) + 1: %u\n\n", ++usint_i);

	// Análise do inteiro extendido
	printf("Tamanho de i (long int) em bytes: %zu\t Em bits: %zu\n", sizeof lint_i, sizeof lint_i*8);
	printf("Valor de i (long int): %lu\n", lint_i);
	printf("Valor de i (long int) + 1: %lu\n\n", ++lint_i);

	// Análise do inteiro extendido sem sinal (unsigned)
	printf("Tamanho de i (unsigned long int) em bytes: %zu\t Em bits: %zu\n", sizeof ulint_i, sizeof ulint_i*8);
	printf("Valor de i (unsigned long int): %lu\n", ulint_i);
	printf("Valor de i (unsigned long int) + 1: %lu\n\n", ++ulint_i);

	return 0;
}
