/*QUESTÃO 07:
Escreva um algoritmo para calcular o salário semanal de uma pessoa, determinado pelas 
condições que seguem: se o número de horas trabalhado for inferior a 40, a pessoa 
recebe R$8,00 por hora; caso contrário, a pessoa recebe R$320,00 mais R$12,00 para cada 
hora trabalhada acima das 40 iniciais.*/

#include <stdio.h>
#include <stdlib.h>

#define PHORA1 8
#define PHORA2 12
#define BONUS 320

int main (void){

int nHoras;
float sal;

printf("Insira o numero de horas praticadas: \n");
scanf("%d", &nHoras);

if (nHoras>40){
	sal=(float)nHoras*PHORA1;
	printf("O salario foi de R$%f", sal);}
else{
	sal=(float)nHoras*PHORA2+BONUS;
	printf("O salario foi de R$%f", sal);}
}
