/* QUESTÃO 06: Escrever um algoritmo que, dados um número inteiro i e três 
valores a, b e c, apresente os 3 números na ordem definida por i, como descrito 
abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no meio dos outros. */

#include <stdio.h>
#include <stdlib.h>

int main (void){

int vInt;
float a, b ,c, menor, meio, maior;

printf("Insira um valor inteiro de 1 a 3: \n");
scanf("%d", &vInt);

printf("Insira tres valores: \n");
scanf("%f %f %f", &a, &b, &c);

if (a >= b && a >= c){
	maior = a;
	if (b <= c)
		menor = b; meio = c;
	else
	if (c <= b)
		menor = c; meio = b;}
if (b >= a && b >= c){
	maior = b;
	if (a <= c)
		menor = a; meio = c;
	else
	if (c <= a)
		menor = c; meio = a;}
if (c >= a && c >= b){
	maior = c;
	if (a <= b)
		menor = a; meio = b;
	else
	if (b <= a)
		menor = b; meio = a;}

switch (vInt){

case 1:
	printf("Ordem crescente: %.1f  %.1f %.1f\n", menor, meio, maior);
	break;
case 2:
	printf("Ordem decrescente: %.1f  %.1f  %.1f\n", maior, meio, menor);
	break;
case 3: 
	printf("Maior no meio: %.1f  %.1f  %.1f\n", menor, maior, meio);
	break;
default:
	printf("Insira um valor de 1 a 3!\n");
	break;
}
}

