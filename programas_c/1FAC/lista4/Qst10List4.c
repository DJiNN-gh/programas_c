/* QUESTÃO 10:
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e sexo das pessoas. Faça um programa que leia as informações de 50 pessoas e informe:
	i. A maior e a menor alturas encontradas;
	ii. A média de altura das mulheres;
	iii. A média de altura da população;
	iv. O percentual de homens na população. */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main (void){

	unsigned int i, contM_ui=0, contF_ui=0;	// Inicialização das variáveis: contadores começam com zero; alturas assumem um valor alto e baixo, respectivamente; média começa zerada.
	char sexo_c;
	float altura_f, menor_f=10, maior_f=0, mediaF_f=0, porcM_f;

	for(i=0;i<TAM;i++){
cham1:
		printf("Insira o sexo: \n");
		scanf("%c", &sexo_c);
		
		switch (sexo_c){

			case 'm':
			case 'M':
				contM_ui++;
				break;
			case 'f':
			case 'F':
				contF_ui++;
				break;
			default:
				printf("Insira um sexo valido!\n");
				goto cham1;}

		printf("Insira a altura: \n");
		scanf("%f", &altura_f);
		
		if (altura_f > maior_f){
			maior_f=altura_f;}		// Decisão para achar a maior altura
		
		if (altura_f < menor_f){
			menor_f=altura_f;}		// Decisão para achar a menor altura

		if (sexo_c == 'f' || sexo_c == 'F'){
			mediaF_f+=altura_f;}	// Decisão para calcular a média feminina
		while ((getchar()) != '\n');}

	porcM_f=(contM_ui*100)/TAM;	// Calculo da porcentagem masculina	

	printf("A maior altura foi: %.2f e a menor altura foi: %.2f\nA media das alturas femininas foi: %.2f\nA porcentagem masculina foi: %.2f\n", maior_f, menor_f, (mediaF_f/contF_ui), porcM_f);

return 0;}
