#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (void){

	/* Operadores bit-a-bit (bitwise)
	 *
	 * &	AND
	 * |	OR
	 * ˆ	XOR
	 * ˜	NOT
	 * <<	SHIFT LEFT
	 * >>	SHIFT RIGHT
	 *
	 */

	int a=0b00000000000000000000000000000000;
	int b=0b11111111111111111111111111111111;
	int c=0b1000;	// 8 em binario


	printf("O resultado de a: %d\n", a);
	printf("O resultado da negacao de a: %d\n", ~a);	// Negacao bitwise
	printf("O resultado de b: %d\n", b);
	printf("O resultado da negacao de b: %d\n", ~b);	// Negacao bitwise

	printf("O resultado de c: %d\n", c);
	printf("O resultado de a: %d\n", c >> 2);	// Dois zeros "andam" para a direita
	printf("O resultado de a: %d\n", c << 1);	// Um zero "anda" a esquerda

return 0;}
