#include <stdio.h>
#include <stdlib.h>

/* 
 * Estruturas de repetição são utilizadas para eventuais casos onde repetições de código seriam necessárias. 
 * Essas estruturas evitam tais repetições, utilizando-se, geralmente, de três parâmetros: um inicializador, um limitador (condição de permanência) e um atualizador. 
 * As estrutras apresentadas a seguir são as ferramentas disponibilizadas pela linguagem C, cada uma apresentando sua(s) particularidade.
 
 * A estrutura LABEL/GOTO permite marcar (por isso LABEL) um determinado ponto do código como um ponto de referência, permitindo que a execução salte para esse ponto de referência quando encontrar um GOTO. 
 * O uso da estrutra LABEL/GOTO deve ser evitado pois ele pode quebrar o princípio da localidade de referência, por assim invalidando o cache.
 
 * A estrutura FOR é uma estrutura de repetição pronta, fechada. 
 * No seu uso, ele permite que sejam definidos os três parâmetros de funcionamento, no entanto, não são obrigatórios. 
 * No caso da omissão de algum deles em seu cabeçalho, pode-se definir os parâmetros em outros lugares, até mesmo dentro do seu bloco de código.
 
 * A estrutura WHILE possui apenas uma condição de permanência no seu cabeçalho, deixando aberta a declaração de inicializadores e de atualizadores. 
 * Sua execução exige que a condicional inicial seja atendida, do contrário ela não será executada.
 
 * A estrutura DO... WHILE tem a mesma funcionalidade e execução da estrutura WHILE, com um pequeno porém: ela será executada ao menos uma vez, pois o limitador só será testado ao final da estrutura. 
 *
 */

int main (void){

	unsigned int i;
	
	i=0;
	printf("O valor de i e: %u\n", i);
	i++;
	printf("O valor de i e: %u\n", i);
	i++;
	printf("O valor de i e: %u\n\n", i);

	// O i é impresso repetidas vezes, de 0 a 2, com repetição de código

	i=0;

imprimir:
	printf("O valor de i e: %u\n", i);
	i++;

	if (i < 3){
		goto imprimir;
        }

	// O i é impresso através de uma repetição em loop, com uso da estrutura LABEL/GOTO e uma condicional

	putchar('\n');

	for (i=0;i<3;i++){
	
		printf("O valor de i e: %u\n", i);
        }
		
	// O i é impresso através de uma repetição em loop, com uso da estrutura FOR
		
	putchar('\n');

	i=0;

	for (;;){

		printf("O valor de i e: %u\n", i++);}
	if (i > 2){
		break;
        }
	else{
		continue;
        }
	
	// O i é impresso através de uma repetição em loop, com o uso da estrutura FOR sem seus parâmetros. São usados o pós-incremento, o BREAK e o CONTINUE para estabelecer os parâmetros

	putchar('\n');

	i=0;

	while (i < 3){
		printf("O valor de i e: %u\n", i++);
        }

	// O i é impresso através de uma repetição em loop, com o uso da estrutura WHILE
	
	putchar('\n');

	i=0;

	do{
		printf("O valor de i e: %u\n", i++);
        }
	while (i < 3);
	
	// O i é impresso através de uma repetição em loop, com o uso da estrutura DO... WHILE

	putchar('\n');

	i=0;

	while(true){
		
		printf("O valor de i e: %u\n", i);
	if (i > 2){
		break;}
	i++;
        }

	// O i é impresso através de uma repetição em loop, com o uso da estrutura WHILE e uma condicional para limitar sua execução.

return 0;
}
