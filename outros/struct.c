#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define VAL1 10
#define VAL2 128

typedef struct{					// Forma 1 de declarar uma struct
	int matricula, nDependentes;		// Evita o uso da declaracao de structs repetitivamente
	char nome[30];				
	char sexo;
	float sal;} Tfuncionario;

typedef struct{
	char nome [30];
	float av1, av2, media;
	char sit [10];} Taluno;

typedef struct{
	unsigned int i;
	unsigned char c;} Tteste[10];

typedef struct{
	unsigned int eleitores, candidatos[5];
	char cargo[16];} Teleicao;

struct st{					// Forma 2 de declarar uma struct
	int num[VAL1];				// Declaracao inicial mais simples
	char id[VAL1];};

struct ficha{
	unsigned int inscricao[VAL1];
	char tag[VAL1];};
	//*char nome[VAL1];};

void calculador (Taluno v[], int tam);
void urna (Teleicao eleitores, Teleicao candidatos, Teleicao cargo);
void resultados ();

int main (void){
	
	int i, j;

	struct st s;
	struct st t;

	s.num[0]=2019010001;
	s.id[0]='A';

	t.num[0]=2019010002;
	t.id[0]='B';


	printf("Numero: %d\nId: %c\n", s.num[0], s.id[0]);
	printf("Numero: %d\nId: %c\n", t.num[0], t.id[0]);

	struct ficha a;

	for(i=2019010001, j=0;j<VAL1;i++, j++){

		a.inscricao[j]=i;
		printf("%u\t", a.inscricao[j]);}


return 0;}

void calculador (Taluno [], int tam){

	unsigned int i;
	Taluno a[30];

	for(i=0;i<tam;i++){

		a[i].media=(a[i].av1+a[i].av2)/2;
		
		if(a[i].media >= 6)

			strcpy(a[i].sit, "aprovado");
		else
		if(a[i].media < 4)
			
			strcpy(a[i].sit, "nao aprovado");
		else
			strcpy(a[i].sit, "avf");}}

// Funcao que contabiliza os votos de cada eleitor para seus respectivos candidatos
void urna (Teleicao eleitores, Teleicao candidatos, Teleicao cargo){
	
	Teleicao a[10];

	for(i=0;i<eleitores;i++){

		printf("Digite o codigo do seu canditato: \n");
		scanf("%d", &a.[i]

}

// Funcao que exibe os resultados da eleicao
void resultados (){



}
