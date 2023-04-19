#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main (void){
	
	float f=1.4433876, e_f=1e2;
	double d=2.36475, e_d=2e4;
	long double l=3.997755331, e_l=3e8;

	printf("O tamanho de f (float): %zu bytes\t Em bits: %zu\n", sizeof f, sizeof f*8);
	printf("O tamanho de d (double): %zu bytes\t Em bits: %zu\n", sizeof d, sizeof d*8);
	printf("O tamanho de l (long double): %zu bytes\t Em bits: %zu\n", sizeof l, sizeof l*8);

	printf("Valor de f (float): %.20f\t Valor de f exponencial (float): %.20f\n", f, e_f);
	printf("Valor de d (double): %.20f\t Valor de d exponencial (double): %.20f\n", d, e_d);
	printf("Valor de l (long double): %.20Lf\t Valor de l exponencial (long double): %.20Lf\n", l, e_l);

	return 0;}
