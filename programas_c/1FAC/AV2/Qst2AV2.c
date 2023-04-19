#include <stdio.h>
#include <stdlib.h>

int primador (int a, int b);

int main (void){

	int valor1, valor2;

	printf("Insira dois valores inteiros: \n");
	scanf("%d %d", &valor1, &valor2);

	if (primador(valor1, valor2) == 0){
		printf("Nao sao primos entre si!");}
	else{
		printf("Sao primos entre si!");}

return 0;}

int primador (int a, int b){

	int maior, i;

	if (a >= b){
		maior=a;}
	else{
		maior=b;}

	for (i=2;i<maior;i++){
		
		if (a % i == 0 || b % i == 0){

			return 0;}}
return 1;}

