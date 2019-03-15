/* QUESTÃO 02:
Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes 
categorias:

Categoria	Faixa de idade

infantil A	5 - 7 anos
infantil B	8-10 anos
juvenil A	11-13 anos
juvenil B	14-17 anos
Adulto		maiores de 18 anos
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

printf("Insira sua idade\n");
scanf("%d", &idade);

do{
if (idade<5){
	printf("Muito novo!");
	}
} while (idade<5);
switch idade
{
case 5:
case 6:
case 7:
	printf("Categoria Infantil A");
	break;
case 8:
case 9:
case 10:
	printf("Categoria Infantil B");
	break;
case 11:
case 12:
case 13:
	printf("Categoria Juvenil A");
	break;
case 14:
case 15:
case 16:
case 17:
	printf("Categoria Juvenil B");
	break;
default
	printf("Categoria Adulto");
	break;
return 0;
}
