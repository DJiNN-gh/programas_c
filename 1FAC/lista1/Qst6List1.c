/*QUESTÃO 06:
Fazer um algoritmo que determine a ordem de uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#DEFINE FEV 31
#DEFINE MAR 59
#DEFINE ABR 90
#DEFINE MAI 120
#DEFINE JUN 151
#DEFINE JUL 181
#DEFINE AGO 212
#DEFINE SET 243
#DEFINE OUT 273
#DEFINE NOV 304
#DEFINE DEZ 334

int main (void){

int dia, dOrdem;
char mes[128];

printf("Insira o dia e o nome do mes");
scanf("%d % s", &dia, &mes);

if (stricmp (mes, "janeiro"){
	dOrdem=dia;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "fevereiro"){
	dOrdem=dia+FEV;
	printf("%dº dia do ano",dOrdem);}
else
if (stricmp (mes, "marco" || mes, "março"){
	dOrdem=dia+MAR;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "abril"){
	dOrdem=dia+ABR;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "maio");{
	dOrdem=dia+MAI;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "junho"){
	dOrdem=dia+JUN;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "julho"){
	dOrdem=dia+JUL;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "agosto"){
	dOrdem=dia+AGO;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "setembro"){
	dOrdem=dia+SET;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "outubro"){
	dOrdem=dia+OUT;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "novembro"){
	dOrdem=dia+NOV;
	printf("%dº dia do ano", dOrdem);}
else
if (stricmp (mes, "dezembro");{
	dOrdem=dia+DEZ;
	printf("%dº dia do ano", dOrdem);}

printf("\n\nAno bissexto? Some 1!");
return 0;
}
