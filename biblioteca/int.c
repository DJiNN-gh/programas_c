#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main (void){

	int i=INT_MAX;
	unsigned int unsg_i=UINT_MAX;
	int32_t int_i=INT32_MAX;
	uint32_t uint_i=UINT32_MAX;
	int16_t sint_i=SHRT_MAX;
	uint16_t usint_i=USHRT_MAX;
	int8_t ssint_i=CHAR_MAX;
	uint8_t ussint_i=UCHAR_MAX;
	long int lint_i=ULLONG_MAX;
	unsigned long int ulint_i=ULLONG_MAX;

	// Analise do inteiro
	printf("O tamanho de i (int) em bytes e: %zu\t Em bits: %zu\n", sizeof i, sizeof i*8);
	printf("Valor de i (int): %d\n", i);
	i++;
	printf("Valor de i (int) +1: %d\n\n", i);
	
	// Analise do inteiro sem sinal (unsigned)
	printf("O tamanho de i (unsigned int) em bytes e: %zu\t Em bits: %zu\n", sizeof unsg_i, sizeof unsg_i*8);
	printf("Valor de i (unsigned int): %u\n\n", unsg_i);

	// Analise do inteiro32
	printf("O tamanho de i (int32) em bytes e: %zu\t Em bits: %zu\n", sizeof int_i, sizeof int_i*8);
	printf("Valor de i (int32): %d\n", int_i);
	int_i++;
	printf("Valor de i (int32) +1: %d\n\n", int_i);

	// Analise do inteiro32 sem sinal (unsigned)
	printf("O tamanho de i (uint32) em bytes e: %zu\t Em bits: %zu\n", sizeof uint_i, sizeof uint_i*8);
	printf("Valor de i (uint32): %u\n\n", uint_i);

	// Analise do inteiro16
	printf("O tamanho de i (int16) em bytes e: %zu\t Em bits: %zu\n", sizeof sint_i, sizeof sint_i*8);
	printf("Valor de i (int16): %d\n", sint_i);
	sint_i++;
	printf("Valor de i (int16) +1: %d\n\n", sint_i);

	// Analise do inteiro16 sem sinal (unsigned)
	printf("O tamanho de i (uint16) em bytes e: %zu\t Em bits: %zu\n", sizeof usint_i, sizeof usint_i*8);
	printf("Valor de i (uint16): %d\n\n", usint_i);

	// Analise do inteiro8
	printf("O tamanho de i (int8) em bytes e: %zu\t Em bits: %zu\n", sizeof ssint_i, sizeof ssint_i*8);
	printf("Valor de i (int8): %d\n", ssint_i);
	ssint_i++;
	printf("Valor de i (int8) +1: %d\n\n", ssint_i);

	// Analise do inteiro8 sem sinal (unsigned)
	printf("O tamanho de i (uint8) em bytes e: %zu\t Em bits: %zu\n", sizeof ussint_i, sizeof ussint_i*8);
	printf("Valor de i (uint8): %d\n\n", ussint_i);

	// Analise do inteiro64
	printf("O tamanho de i (int64) em bytes e: %zu\t Em bits: %zu\n", sizeof lint_i, sizeof lint_i*8);
	printf("Valor de i (int64): %lu\n", lint_i);
	lint_i++;
	printf("Valor de i (int64) +1: %lu\n\n", lint_i);

	// Analise do inteiro64 sem sinal (unsigned)
	printf("O tamanho de i (uint64) em bytes e: %zu\t Em bits: %zu\n", sizeof ulint_i, sizeof ulint_i*8);
	printf("Valor de i (uint64): %lu\n\n:", ulint_i);

	return 0;}
