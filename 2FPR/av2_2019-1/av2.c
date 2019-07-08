#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define FALSE 0
#define TRUE 1

typedef struct node{
	int valor;	// Chave que guarda um valor qualquer
	struct node *next;	// Ponteiro que aponta para o próximo node
	struct node *prev;	// Ponteiro que aponta para o node anterior
} tNode;

typedef tNode *tList;

void funcao_01 (tList H);	// Função que corresponde a questão 1
void funcao_02 (tList H, tList T);	// Função que corresponde a questão 2
void funcao_03 (tList F, tList L, unsigned int tam_ui, int *element1_i, int *element2_i);	// Função que corresponde a questão 3
tList funcao_04	(tList H, unsigned int start_ui, unsigned int elements_ui);	// Função que corresponde a questão 4
unsigned int fatal (tList pointer);	// Função que testa alocação de memória

int main (void){


return 0;
}

// Função que recebe o head de uma lista e percorre-a, exibindo seus valores de maneira inversa
void funcao_01 (tList H){

	tList aux=H;	// Manipula um auxiliar, mantendo o head

	if (H){

		funcao_01(aux->next);	// Chama novamente a função, para o próximo de sua posição original
	}
	
	printf("%d\t", aux->valor);	// Imprime os valores a cada execução
}

// Função que recebe uma lista duplamente encadeada (seu ponteiro para o primeiro endereço e para o último endereço) e inverte todos os seus valores
void funcao_02 (tList H, tList T){

	tList auxH=H, auxT=T;
	int aux_i;

	if (auxH != auxT || auxH->next != auxT){	// Enquanto não se encontrarem
	
		aux_i=auxH->valor;
		auxH->valor=auxT->valor;
		auxT->valor=aux_i;

		funcao_02(auxH->next, auxT->prev);	// Chama a função novamente, agora passando o primeiro apontando para o próximo e o último apontando para o anterior
	}
}

// Função que recebe uma lista em fila (um endereço que aponta para o primeiro node e um endereço que aponta parao o último node), e testa seus elementos para encontrar o maior
void funcao_03 (tList F, tList L, unsigned int tam_ui, int *element1_i, int *element2_i){

	tList auxF=F, auxL=L;	// Cada auxiliar recebe um ponteiro 
	*element1_i=INT32_MIN, *element2_i=INT32_MIN;


	while (tam_ui>=0){

		if (auxF->valor >= *element1_i){

			*element2_i=*element1_i;
			*element1_i=auxF->valor;
		}

		auxF->next->next=auxF;
		auxF->next=auxL->next;

		tam_ui--;
	}
}

// Função que recebe uma lista, um ponto de partida e o número de valores a serem passados para sublista
tList funcao_04 (tList H, unsigned int start_ui, unsigned int elements_ui){

	tList aux1=H;

	for (unsigned int i=0; i<start_ui; i++){

		aux1=aux1->next;
	}

	tList *H2;

	while (elements_ui>0){

		tList aux2=(tList) malloc (sizeof(tNode));

		fatal(aux2);

		aux2->valor=aux1->valor;
		aux2->next=*H2;
		*H2=aux2;

		elements_ui--;
	}

	return *H2;
}

// Função que recebe um ponteiro para um endereço e testa sua alocação, se foi bem sucedida ou não
unsigned int fatal (tList pointer){

	if (!pointer)

		return FALSE;
	
	else
		return TRUE;
}
