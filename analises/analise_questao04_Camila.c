#include <stdio.h>
#include <stdlib.h>

#define PORC 100

int main (void){

	unsigned int cod_ui, vag_ui, candM_ui, candF_ui, maiorCod_ui=0, maiorMasc_ui=0, maiorMascCod_ui;
	char opcao_c;
	unsigned float razao_uf, maiorRazao_uf=0;

	do{	// Preenchendo os dados do concurso vestibular
		
		printf("Insira os valores para o curso: \n");
		scanf("%u %u %u %u", &cod_ui, &vag_ui, &candM_ui, &candF_ui);	// Entra com os valores de cada curso: código, número de vagas, número de candidatos do sexo masculino e número de candidatos do sexo feminino.
		
		razao_uf=(candM_ui+candF_ui)/(float)vag_ui;

		if (razao_uf >= maiorRazao_uf){	// Determinando a maior razão entre candidatos/vagas por curso
			
			maiorRazao_uf=razao_uf;
			maiorCod_ui=cod_ui;}

		if (candM_ui >= maiorMasc_ui){	// Determinando o maior número de candidatos do sexo masculino

			maiorMasc_ui=candM_ui;
			maiorMascCod_ui=cod_ui;}

		printf("O codigo do curso e: %u\nA razao candidatos/vaga e: %.2f\nO percentual de candidatas e: %.2f\n", cod_ui, razao_f, (candF_ui/(float)vag_ui)*PORC);	// Imprimindo o resultado por curso verificado

	}while (cod_ui != 0);		// O usuário irá determinar quantos cursos serão testados

		printf("Maior numero de de candidatos por vaga no curso %u: %.2f\nCurso com maior número de candidatos do sexo masculino: %u", maiorCod_ui,  maiorRazao_uf, maiorMascCod_ui);	// Imprimindo o resultado final

return 0;}
