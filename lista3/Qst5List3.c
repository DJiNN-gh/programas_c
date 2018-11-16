/* QUESTÃO 05: Faça um programa que exiba na tela os 50 primeiros termos da seguinte série: 1, -2, 3, -4, 5, -6 ...*/

#include <stdio.h>
#include <stdlib.h>

#define LIM 50
#define ATLZ 2

int main (void){

	int i, j;

	for (i=1, j=-2;i<LIM;i+=ATLZ, j-=ATLZ){
		printf("%d %d\t", i, j);}}
