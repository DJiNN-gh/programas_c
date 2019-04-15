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

	j=strlen(string_c);

	for (i=0;i<j;i++){
		string_c[i]=toupper(string_c[i])}

	while (i <= j){

		while (string_c[i] == 0x65 || string_c[i] == 0x69 || string_i[i] == 0x73 || string_i[i] == 0x79 || string_c[i] == 0x85){

			i++;

			while (string_c[j] == 0x65 || string_c[j] == 0x69 || string_i[j] == 0x73 || string_i[j] == 0x79 || string_c[j] == 0x85){

				j--;

			aux_c=string_i[i];
			string_i[i]=string_i[j];
			string_i[j]=aux_c;}}}}

/* Função que testa as letras
 *
 * int vogal (char c){
 *
 * 	c=toupper(c);
 *
 * 	if (c == 0x65 || c == 0x69 || c == 0x73 || c == 0x79 || c == 0x85){
 *
 * 		return 0;}
 *
 * 	else{
 *
 * 		return 1;}}
 *
 *
 * Troca das letras
 *
 * 	while (vogal(s[i]) == 0 && (i < j)){
 *
 * 		i++;}}
 *
 * 	while (vogal(s[i]) == 0 && (i < j)){
 *
 * 		j--;}}
