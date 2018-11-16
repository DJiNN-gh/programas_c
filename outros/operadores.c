#include <stdio.h>
/* 
 * =	atribuicao
 * ==	igualdade
 * + -	unarios
 * + -	binarios	(soma e subtracao)
 * * /	binarios	(multiplicacao e divisao)
 * %	binario		(modulo (ou resto))
 * ++	operador	incremento
 * --	operador	decremento
 *
 * Conjuncao (E, AND, &&)
 * Verdadeiro	Falso	Saida
 * 0		0		0
 * 0		1		0
 * 1		0		0
 * 1		1		1
 *
 * Disjuncao (OU, OR, ||)
 * Verdadeiro	Falso	Saida
 * 0		0		0
 * 0		1		1
 * 1		0		1
 * 1		1		1
 *
 * Negacao (NAO, NOT, !, !=)
 * Verdadeiro	Falso	Saida
 * 0		0		1
 * 0		1		0
 * 1		0		0
 * 1		1		0
 *
 * Ou exclusivo (OUX, XOR, ˆ)
 * Verdadeiro	Falso	Saida
 * 0		0	0
 * 0		1	1
 * 1		0	1
 * 1		1	0
 *
 *  */

int main (void){

	int a, b, c, d, z=9, y=8, x=8;
	float e;

	a = +10;
	a = 10;	// Atribuicao, valor positivo implicito
	printf("%d\n", a);

	b = +1 + +10;
	b = 1 + 10;	// Soma, valores positivos implicitos
	printf("%d\n", b);

	c = +1 + -10;	
	c = 1 - 10;	// Subtracao, valores implicitos
	printf("%d\n", c);

	d = 10 * 9;	// Multiplicacao, valores implicitos
	printf("%d\n", d * 9);	// Operacao nao modifica variavel, muda apenas exibicao

	e = 10 / 3.0f;	// Divisao, valores implicitos, representacao de ponto flutuante na operacao
	printf("%f\n", e);	
	printf("%d\n", (int)e);
	
	printf("%d\n", (int)++e);	// Pre-incremento
	printf("%d\n", (int)--e);	// Pre-decremento
	
	printf("%d\n", z == y);	// Proposicao falsa
	printf("%d\n", y == x);	// Proposicao verdadeira

	printf("%d\n", y == x && y > 4);	// Circuito verdadeiro
	printf("%d\n", y == x && y < 4);	// Circuito falso

	printf("%d\n", y == x || y < 4);	// Circuito verdadeiro
	printf("%d\n", z == x || y < 4);	// Circuito falso

	return 0;}
