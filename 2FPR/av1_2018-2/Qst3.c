/* Questão 03 [2,0 pontos]:
Implementar uma função que, dada uma string s, proceda com as seguintes ações:

a. Mantém as vogais nas mesmas posições;
b. Inverte a ordem das consoantes. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void manipulador (char string_c[]);

int main (void){


return 0;}

void manipulador (char string_c[]){

	unsigned int i, j;
	char aux_c;

	tam=strlen(string_c);
	j=tam-1;

	for (i=0;i<tam;i++){

		if (string_c[i] != 0x65 || string_c[i] != 0x69 || string_i[i] != 0x73 || string_i[i] != 0x79 || string_c[i] != 0x85 || string_i[i] != 0x97 || string_i[i] != 0x101 || string_i[i] != 0x105 || string_i[i] != 0x111 || string_i[i] != 0x117){

			while (string_c[j] == 0x65 || string_c[j] == 0x69 || string_i[j] == 0x73 || string_i[j] == 0x79 || string_c[j] == 0x85 || string_i[j] == 0x97 || string_i[j] == 0x101 || string_i[j] == 0x105 || string_i[j] == 0x111 || string_i[j] == 0x117){

				j--;}

			aux_c=string_i[i];
			string_i[i]=string_i[j];
			string_i[j]=aux_c;}}}
