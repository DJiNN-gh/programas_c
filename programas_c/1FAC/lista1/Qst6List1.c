/*QUESTÃO 06:
Fazer um algoritmo que determine a ordem de uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FEV 31
#define MAR 59
#define ABR 90
#define MAI 120
#define JUN 151
#define JUL 181
#define AGO 212
#define SET 243
#define OUT 273
#define NOV 304
#define DEZ 334

int main (void){

int dia, dOrdem;
char mes[20];

printf("Insira o dia: \n");
scanf("%d", &dia);
printf("Insira o mes: \n");
fflush(stdin);
scanf("%s", mes);

if (strcasecmp (mes, "janeiro")){
	dOrdem=dia;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "fevereiro")){
	dOrdem=dia+FEV;
	printf("%dº dia do ano",dOrdem);}
else
if (strcasecmp (mes, "marco") || strcasecmp (mes, "março")){
	dOrdem=dia+MAR;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "abril")){
	dOrdem=dia+ABR;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "maio")){
	dOrdem=dia+MAI;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "junho")){
	dOrdem=dia+JUN;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "julho")){
	dOrdem=dia+JUL;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "agosto")){
	dOrdem=dia+AGO;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "setembro")){
	dOrdem=dia+SET;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "outubro")){
	dOrdem=dia+OUT;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "novembro")){
	dOrdem=dia+NOV;
	printf("%dº dia do ano", dOrdem);}
else
if (strcasecmp (mes, "dezembro")){
	dOrdem=dia+DEZ;
	printf("%dº dia do ano", dOrdem);}

printf("\n\nAno bissexto? Some 1!");
return 0;
}
