/* QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento sobre algumas informações dos seus 250 funcionários. Cada funcionário deverá responder um questionário ao qual informará os seguintes dados: matrícula, sexo, idade, salário e tempo (em anos) de trabalho na empresa. A execução do programa deve exibir os seguintes itens:
a) Matrícula de todos os funcionários que ingressaram na empresa com menos de 21 anos;
b) Quantidade de funcionários do sexo feminino;
c) Média salarial dos homens.*/

#include <stdio.h>
#include <stdlib.h>

#define CHK_IDADE 21
#define LIM 2
#define VET1_TAM 2

int main (void){

	int matricula, idade, tempSvc, i=0, contF=0, cont=0, j, vetMatricula[VET1_TAM];
	float salario, medSalarial, contM=0;
	char sexo;

	do{
		printf("Insira seu sexo (utilize M ou F): \n");
		fflush(stdin);	scanf("%c", &sexo);
		printf("Insira sua Matricula, Idade, Salario e Tempo de Servico (em anos): \n");
		fflush(stdin);	scanf("%d %d %f %d", &matricula, &idade, &salario, &tempSvc);
		
		sexo=toupper(sexo);
		if (idade < CHK_IDADE-tempSvc){
			vetMatricula[i]=matricula;
			i++;}
		if (sexo == 'F'){
			contF++;}
		else
		if (sexo == 'M'){
			medSalarial+=salario;
			contM++;}
		cont++;
		//clrscr();
	} while	(cont<LIM);

	for (j=0;j<=i;j++){
		printf("Matricula do funcionario %d: %d\n", j+1, vetMatricula[j]);}
	medSalarial/=contM;
	printf("Quantidade de funcionarios do sexo feminino: %d\nMedia salarial masculina: R$%.2f\n", contF, medSalarial);}
