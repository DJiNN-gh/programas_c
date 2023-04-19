#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define QUAD(x) (x*x)		// Macro que realiza o cálculo do quadrado de um inteiro qualquer
#define MAIOR(x, y) (x > y ? x : y)	// Macro que verifica qual o maior entre dois valores
#define MAIOR2(x, y, z) MAIOR(MAIOR(x, y), MAIOR(y ,z))		// Macro que verifica qual o maior entre três numeros

int main (void){

	int i, j, k, l;

	printf("Insira um valor: \n");
	scanf("%d", &i);
	printf("O quadrado do valor e: %d\n", QUAD(i));

	printf("Insira dois valores: \n");
	scanf("%d %d", &j, &k);
	printf("O maior e: %d\n", MAIOR(j, k));
	printf("Insira um terceiro valor: \n");
	scanf("%d", &l);
	printf("O maior e: %d\n", MAIOR2(j, k, l));

	// Pegando data e hora (em tempo de compilação)
	
	printf("%s, %s\n", __TIME__, __DATE__);

return 0;}
