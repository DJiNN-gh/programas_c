#include <stdio.h>

/* Aritméticos
 *
 * =	atribuição
 * + -	adição e subtração	binários
 * + -	positivo e negativo	unários
 * * /	multiplicação e divisão	binários
 * %	módulo ou resto		binário
 * ++	incremento		unário
 * --	decremento		unário
 * 
 * Comparativos
 *
 * ==	igualdade		binário
 * !=	diferença		binário
 * >	maior que		binário
 * <	menor que		binário
 * >=	maior que ou igual	binário
 * <=	menor que ou igual	binário
 *
 * Lógicos
 *
 * Conjunção (E, AND, &&)
 * Proposição1	Proposição2	Saída
 * 1		1		1
 * 1		0		0
 * 0		1		0
 * 0		0		0
 *
 * Disjunção (OU, OR, ||)
 * Proposição1	Proposição2	Saída
 * 1		1		1
 * 1		0		1
 * 0		1		1
 * 0		0		0
 *
 * Negação (NAO, NOT, !)
 * Proposição	Saída
 * 1		0
 * 0		1
 *
 * Ou exclusivo (OUX, XOR, ˆ)
 * Proposição1	Proposição2	Saída
 * 1		1		0
 * 1		0		1
 * 0		1		1
 * 0		0		0
 *
 */

int main (void){

	int a, b, c, d, z=9, y=8, x=8;
	float e;

	a = +10;
	a = 10;	// Atribuição, valor positivo implícito
	printf("%d\n", a);

	b = +1 + +10;
	b = 1 + 10;	// Soma, valores positivos implícitos
	printf("%d\n", b);

	c = +1 + -10;	
	c = 1 - 10;	// Subtração, valores implícitos
	printf("%d\n", c);

	d = 10 * 9;	// Multiplicação, valores implícitos
	printf("%d\n", d * 9);	// Operação não modifica variável, muda apenas a exibição

	e = 10 / 3.0f;	// Divisão, valores implícitos, representação de ponto flutuante na operação

	printf("%f\n", e);	
	printf("%d\n", (int)e);
	
	printf("%d\n", (int)++e);	// Pré-incremento
	printf("%d\n", (int)--e);	// Pré-decremento
	
	printf("%d\n", z == y);	// Proposição falsa
	printf("%d\n", y == x);	// Proposição verdadeira

	printf("%d\n", y == x && y > 4);	// Circuito verdadeiro
	printf("%d\n", y == x && y < 4);	// Circuito falso

	printf("%d\n", y == x || y < 4);	// Circuito verdadeiro
	printf("%d\n", z == x || y < 4);	// Circuito falso
	
return 0;}
