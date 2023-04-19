/* QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto que foi lançado. Para cada pessoa entrevistada foram coletados os seguintes dados: sexo (M ou F) e resposta (G [Gostou] ou N [Não Gostou]). Sabendo-se que foram entrevistadas X pessoas, faça um programa que forneça:
a) Número de pessoas que gostaram do produto;
b) Número de pessoas que não gostaram do produto;
c) Informação dizendo em que sexo o produto teve uma melhor aceitação.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

	char respOpn, respSex, exit;
	int contG=0, contN=0, contM=0, contF=0;

	do{
		printf("Informe sua opniao sobre o produto. Utilize G para Gostei e N para Nao Gostei: \n");
		fflush (stdin);	scanf("%c", &respOpn);
		printf("Informe o seu sexo (utilize M ou F): \n");
		fflush (stdin);	scanf("%c", &respSex);

		respOpn=toupper(respOpn);
		respSex=toupper(respSex);

		if (respOpn == 'G'){
			contG++;}
		else
		if (respOpn == 'N'){
			contN++;}
		else
		if (respOpn == 'G' && respSex == 'M'){
			contM++;}
		else
		if (respOpn == 'G' && respSex == 'F'){
			contF++;}

		printf("Deseja realizar a pesquisa novamente (S/N)?\t \n");
		scanf("% c", &exit);
		
		exit=toupper(exit);
		clrscr ();

	} while (exit == 'S');		// Questionar sobre limite de respostas!

	printf("Numero de pessoas que gostaram: %d\nNumero de pessoas que nao gostaram: %d\n", contG, contN);
	if (contM > contF){
		printf("Produto com maior aceitacao no publico Masculino\n");}
	else
	if (contF > contM){
		printf("Produto com maior aceitacao no publico Feminino\n");}
	else
		printf("Produto com igual aceitacao em ambos os publicos\n")}
