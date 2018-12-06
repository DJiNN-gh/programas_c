/* QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo divisor comum) entre dois números. */

#include <stdio.h>
#include <stdlib.h>

int MDC (int valor1, int valor2);
int menor (int valor1, int valor2);

int main (void){

	int vMDC1, vMDC2;

	printf("Insira dois valores: \n");
	scanf("%d %d", &vMDC1, &vMDC2);

	printf("Resultado: %d\n", menor(vMDC1, vMDC2));

	return 0;}

int MDC (int valor1, int valor2){

	int i, me;

	me = menor(valor1,valor2);

	for(i=me;i>=1;i--){
		
		if (valor1 % i == 0 && valor2 % i == 0){
			return i;
		}
	}
}

int  menor (int valor1, int valor2){

	if (valor1 >= valor2){
		
			return valor2;}
	else
	
			return valor1;}
