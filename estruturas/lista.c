/*   FPR - Professor Leonardo Vianna

	 Listas dinâmicas*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração de constantes
#define TRUE 1
#define FALSE 0

//declaração de tipos
typedef struct No {
	int valor;
	struct No* prox;
} TNo;

typedef TNo* TLista;

//declaração de protótipos
int inserir (TLista *L, int numero);
int remover (TLista *L, int numero);
int alterar (TLista *L, int velho, int novo);
TLista pesquisar (TLista L, int numero);
void exibir (TLista L);

int menu ();

//main
int main ()
{
	//declaração de variáveis
	TLista L = NULL;
	int opcao, num1, num2, alt;
	
	do
	{
		//exibindo o menu ao usuário
		opcao = menu ();
		
		switch (opcao)
		{
			//inserção
			case 1: printf ("Entre com o numero a ser inserido: ");
			        scanf ("%d", &num1);
			        
			        if (inserir (&L, num1) == TRUE) //ou apenas inserir (&L, num1)
			        {
			        	printf ("Elemento inserido!\n");
					}
					else
					{
						printf ("ERRO: Elemento nao inserido!\n");
					}
					break;
				
			//remoção
			case 2: printf ("Entre com o numero a ser removido: ");
			        scanf ("%d", &num1);
			        
			        if (remover (&L, num1) != 0)
			        {
			        	printf ("Elemento removido!\n");
					}
					else
					{
						printf ("ERRO: Elemento nao removido!\n");
					}
					break;
				
			//alterar
			case 3: printf ("Entre com o número a ser alterado: ");
			        scanf ("%d", &num1);
			        
			        printf ("Entre com o novo elemento: ");
			        scanf ("%d", &num2);
			        
			        alt = alterar (L, num1, num2);
			        if (alt != 0)
			        {
			        	printf ("%d ocorrencias de %d alteradas!\n", alt, num1);
					}
					else
					{
						printf ("ERRO: Elemento não alterado!\n");
					}
					break;
				
			//pesquisar
			case 4: printf ("Entre com o número a ser buscado: ");
			        scanf ("%d", &num1);
			        
			        if (pesquisar (L, num1))
			        {
			        	printf ("Elemento encontrado!\n");
					}
					else
					{
						printf ("Elemento não encontrado!\n");
					}
					break;
				
			//exibir
			case 5: exibir (L);
			        break;
				
			//saída
			case 6: printf ("Fim do programa!");
			        break;
			        
			//opção inválida
			default: printf ("Opção inválida! Tente novamente.");
		}
		
		system ("pause");
	}
	while (opcao != 6);
}

//implementação das funções
int inserir (TLista *L, int numero)
{
	//passo 1: alocar memória para o novo elemento
	TLista aux = (TLista) malloc (sizeof(TNo));
	
	if (aux == NULL)  //se não foi possível alocar memória
	{
		return FALSE;
	}
	else
	{
		//passo 2: guardar o valor na nova caixa
		aux->valor = numero;
		
		//passo 3: mandar o prox do novo Nó apontar para o até então primeiro elemento da lista
		aux->prox = *L;
		
		//passo 4: fazer o L apontar para o novo elemento
		*L = aux;
		
		return TRUE;
	}
	
	/*ATENÇÃO: tenho quase certeza de que na implementação em sala esquecemos de colocar o * ao lado do L*/
}

// Função que remove todas as ocorrências de 'numero' na lista 'L'.
//A lista é passada por referência, uma vez que o seu valor pode ser alterado durante o processo de remoção.
//A função retornará o número de remoções realizadas.
unsigned int remover (TLista *L, int numero){
	TLista aux;
	unsigned int cont_ui=0;
	
	// Testando verdade para L e se o valor buscado existe na próxima estrutura
	while (*L != NULL && *L->valor == numero){

		aux=*L;
		*L= aux->prox;	// Outra maneira de declaração *L = (*L)->prox
		free(aux);
		cont_ui++;}

	if (*L != NULL){

		aux2=*L;
		aux1=(*L)->prox;	// Ou aux= aux2->prox

		while (aux1 != NULL){

			if (aux1->valor == numero){

				aux2=aux2->prox;
				aux1=aux1->prox;}

			else{

				aux2->prox = aux1->prox;
				free(aux1);
				cont_ui++;
				aux1 = aux2->prox;}}}
					
	return cont_ui;}

int alterar (TLista *L, int velho, int novo)
{
	TLista aux = &L;
	int cont = 0;
	
	while (aux)  //while (aux != NULL)
	{
		if (aux->valor == velho)
		{
			aux->valor = novo;
			cont++;
		}
		aux = aux->prox;
	}
	
	return cont;
}

TLista pesquisar (TLista L, int numero)
{
	TLista aux = L;

	while (aux)
	{
		if (aux->valor == numero)
		{
			return aux;
		}
		
		aux = aux->prox;
	}	
	
	return NULL;
}

void exibir (TLista L)
{
	TLista aux = L;
	
	if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{	
	    printf ("Lista: ");
		while (aux)
		{
			printf ("%d ", aux->valor);
			aux = aux->prox;
		}
		printf ("\n");
	}
}

int menu ()
{
	int op;
	
	system ("cls");
	printf ("Menu de opções:\n\n");
	printf ("(1) Inserir\n(2) Remover\n(3) Alterar\n");
	printf ("(4) Buscar\n(5) Exibir\n(6) Sair\n\n");
	printf ("Entre com a sua opção: ");
	scanf ("%d", &op);
	
	return op;
}
