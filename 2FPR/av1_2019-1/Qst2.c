#include <stdio.h>
#include <stdlib.h>

void inversor (float matrix_f[15][10]);

int main (void){


return 0;}

// Função que inverte a ordem dos elementos de uma matriz
void inversor (float matrix_f[15][10]){

	for(i=0, k=14;i<15;i++, k--){

		for(j=0, l=14;j<10;j++, l--){

			aux_f=matrix_f[i][j];
			matrix_f[i][j]=matrix_f[k][l];
			matrix_f[k][l]=aux_f;}}}
