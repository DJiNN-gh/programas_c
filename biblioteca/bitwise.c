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
	 * Operações bit-a-bit testam para cada bit de uma variável. Essa operação será adequada ao tipo da variável presente na utilização do operador.
	 *
	 * A operação SHIFT é equivalente a multiplicação ou divisão do valor da variável pela base 2 elevada por um determinado expoente.
	 * As operações realizadas pelo operador SHIFT são mais rápidas do que operações de multiplicação e divisão realizadas por operadores aritméticos.
	 * Deve-se evitar a utilização do operador SHIFT em números sinalizados (signed), pois possuem um comportamento não-definido.
	 */

	int a=0b00000000000000000000000000000000;	// A notação 0b designa uma formatação em binário para um tipo qualquer. Essa notação não é padrão da linguagem C, sendo uma extensão de alguns compiladores.
	int b=0b11111111111111111111111111111111;
	int c=0b1000;	// 8 em binário
	unsigned int d=1024, i;


	printf("O resultado de a: %d\n", a);
	printf("O resultado da negacao de a: %d\n", ~a);	// Negação bitwise
	printf("O resultado de b: %d\n", b);
	printf("O resultado da negacao de b: %d\n", ~b);	// Negação bitwise

	printf("O resultado de c: %d\n", c);
	printf("O resultado de a: %d\n", c >> 2);	// Dois zeros "andam" para a direita
	printf("O resultado de a: %d\n", c << 1);	// Um zero "anda" para a esquerda

	putchar('\n');

	// Mostrando os valores das potências de dois
	for (i=0;i<10;i++){	

		printf("O resultado de d: %d\n", d);
		d=d >> 1;	// Essa operação realiza a divisão do valor de d, 1024, por 2 elevado a 1.
		}
	
	for (i=0;i<10;i++){

		d=d << 1;	// Essa operação realiza a multiplicação do valor de d, 2, por 2 elevado a 1.
		printf("O resultado de d: %d\n", d);
		}

return 0;
}