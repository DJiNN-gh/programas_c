#include <stdio.h>
#include <stdlib.h>

void hanoi (int n, char dest_c, char origem_c, char aux_c);

int main (void){


return 0;}


void hanoi (int n, char dest_c, char origem_c, char aux_c){

	if(n>0){

		hanoi(n, origem_c, aux_c, dest_c);

		printf("%c (origem) -> %c (destino)\n", origem_c, dest_c);

		hanoi(n, aux_c, dest_c, origem_c);}}
