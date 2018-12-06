#include <stdio.h>
#include <stdlib.h>

int alterador (int array_i[], int entrada_i, int saida_i, unsigned int *contagem_ui);

int main (void){


return 0;}

int alterador (int array_i[], int entrada_i, int saida_i, unsigned int *contagem_ui){

	unsigned int i=0;

	for (;i<*contagem_ui;i++){

		if (array_i[i] == saida_i){
			return 0;}	// Ao tentar alterar um valor ja existente, nenhuma acao sera tomada, retornando para a funcao que a chamou

		if (array_i[i] == entrada_i){

			while (array[i] < saida_i){

				array_i[i]=array_i[i+1];
				i++;}
			
			array_i[i-1]=valor;}}

return 1;}
