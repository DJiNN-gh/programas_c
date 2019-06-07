#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define VAL1 10
#define VAL2 128
#define JAN 1
#define FEV 2
#define MAR 3
#define ABR 4
#define MAI 5
#define JUN 6
#define JUL 7
#define AGO 8
#define SET 9
#define OUT 10
#define NOV 11
#define DEZ 12

enum sit {APROVADO, AVF, REPROVADO};

typedef struct{
	char nome[30];
	float av1, av2, media;
	unsigned char sit;} tAluno;

struct st{
	int num[VAL1];
	char id[VAL1];};

struct ficha{
	unsigned int inscricao[VAL1];
	char tag[VAL1];
	char nome[VAL1];};

// Teste com struct: aniversario
struct aniversario{				// Forma 1 de declarar uma struct
	char nome[VAL2];			// Declaração inicial mais simples
	unsigned char dia;
	unsigned char mes;
	short ano;};
// Ou
typedef struct{					// Forma 2 de declarar uma struct
	char nome[VAL2];			// Evita o uso de declarações repetidas da tag struct
	unsigned char dia;
	unsigned char mes;
	short ano;} tAniversario2;


void calculador (tAluno v[], unsigned int tam_ui);
void organizador (tAniversario2 *list);

int main (void){
	
	int i, j;

	struct st s;	// Declarando uma variável para a struct st
	struct st t;	// Declarando uma variável para a struct st

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

	puts("\n");

	struct aniversario allan;

	strcpy(allan.nome, "Allan Lopes");
	allan.dia=27;
	allan.mes=DEZ;
	allan.ano=1995;

	printf("Nome do aniversariante: %s\nDia do nascimento: %d\nMes do nascimento: %d\nAno do nascimento: %d\n", allan.nome, allan.dia, allan.mes, allan.ano);

	puts("\n");

	tAniversario2 dados[3];

	strcpy(dados[0].nome, "Charles Babbage");
	dados[0].dia=26;
	dados[0].mes=DEZ;
	dados[0].ano=1791;

	strcpy(dados[1].nome, "George Boole");
	dados[1].dia=2;
	dados[1].mes=NOV;
	dados[1].ano=1815;

	strcpy(dados[2].nome, "Ada Lovelace");
	dados[2].dia=10;
	dados[2].mes=DEZ;
	dados[2].ano=1815;

	for (i=0;i<3;i++){

		printf("Nome do aniversariante: %s\nDia do nascimento: %d\nMes do nascimento: %d\nAno do nascimento: %d\n", dados[i].nome, dados[i].dia, dados[i].mes, dados[i].ano);
		puts("\0");}


return 0;}

// Função que determina se um aluno está aprovado, em avaliação final ou reprovado
// Será utilizado o enum para determinar a flag
void calculador (tAluno *a, unsigned int tam_ui){

	unsigned int i;

	for(i=0;i<tam_ui;i++){

		a[i].media=(a[i].av1+a[i].av2)/2;
		
		if(a[i].media >= 6)

			a[i].sit=APROVADO;
		else
		if(a[i].media < 4)
			
			a[i].sit=REPROVADO;
		else
			a[i].sit=AVF;}}

// Função que utiliza uma struct para organizar informações de uma pessoa
// A struct serve como um conjunto de propriedades para o objeto (variável) utilizado
// Os valores ficam armazenados na variável que chama a estrutura
void organizador (tAniversario2 *list){

	char opcao_c;

		printf("Insira o nome: \n");
		scanf("%s", list[pos].nome);

		printf("Insira o dia do nascimento: \n");
		scanf("%hhu", &list[pos].dia);

		printf("Insira o mes do nascimento: \n");
		scanf("%hhu", &list[pos].mes);

		printf("Insira o ano do nascimento: \n");
		scanf("%hi", &list[pos].ano);
	
		printf("Deseja inserir mais um registro?(S/N) \n");
		scanf("%c", &opcao_c);
		opcao_c=toupper(opcao_c);}
