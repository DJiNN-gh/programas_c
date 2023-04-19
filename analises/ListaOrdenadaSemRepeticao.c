/*   FPR - Professor Leonardo Vianna

	 Listas dinâmicas - sem repetição e com os seus elementos ordenados crescentemente*/

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
int alterar (TLista L, int velho, int novo);
TLista pesquisar (TLista L, int numero);
void exibir (TLista L);

int menu ();

//main
int main ()
{
	//declaração de variáveis
	TLista L = NULL;
	int opcao, num1, num2;
	
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
			        
			        if (remover (&L, num1)) //ou (remover (&L, num1) == TRUE)
			        {
			        	printf ("Elemento removido!\n");
					}
					else
					{
						printf ("ERRO: Elemento nao removido!\n");
					}
					break;
				
			//alterar
			case 3: printf ("Entre com o numero a ser alterado: ");
			        scanf ("%d", &num1);
			        
			        printf ("Entre com o novo elemento: ");
			        scanf ("%d", &num2);
			        
			        if (alterar (L, num1, num2))
			        {
			        	printf ("Elemento alterado.\n");
					}
					else
					{
						printf ("ERRO: Elemento nao alterado!\n");
					}
					break;
				
			//pesquisar
			case 4: printf ("Entre com o numero a ser buscado: ");
			        scanf ("%d", &num1);
			        
			        if (pesquisar (L, num1))
			        {
			        	printf ("Elemento encontrado!\n");
					}
					else
					{
						printf ("Elemento nao encontrado!\n");
					}
					break;
				
			//exibir
			case 5: exibir (L);
			        break;
				
			//saída
			case 6: printf ("Fim do programa!");
			        break;
			        
			//opção inválida
			default: printf ("Opcao invalida! Tente novamente.");
		}
		
	}
	while (opcao != 6);
}

//implementação das funções
int inserir (TLista *L, int numero)
{
	TLista novo, aux1, aux2;

	//verificando se deve inserir no início da lista	
	if ((!(*L)) || ((*L)->valor > numero))
	{
		novo = (TLista) malloc (sizeof(TNo));
		
		if (novo == NULL)  //se não foi possível alocar memória
		{
			return FALSE;
		}
		else
		{
			novo->valor = numero;
			novo->prox = *L;
			*L = novo;
			
			return TRUE;
		}		
	}
	else
	{
		if ((*L)->valor == numero)
		{
			return FALSE;
		}	
		else
		{
			aux2 = *L;
			aux1 = aux2->prox;
			
			while ((aux1) && (aux1->valor < numero))
			{
				aux2 = aux1;
				aux1 = aux1->prox;
			}
			
			if ((aux1) && (aux1->valor == numero)) //o elemento já existe
			{
				return FALSE;
			}
			else
			{
				novo = (TLista) malloc (sizeof(TNo));
				
				if (novo == NULL)  //se não foi possível alocar memória
				{
					return FALSE;
				}
				else
				{
					novo->valor = numero;
				
					novo->prox = aux1;
					aux2->prox = novo;
					
					return TRUE;
				}
			}
		}
	}	
}

int remover (TLista *L, int numero)
/*Função que remove 'numero' da lista 'L'.
A lista é passada por referência, uma vez que o seu valor pode ser alterado
durante o processo de remoção.
A função retornará TRUE ou FALSE.*/
{
	TLista aux, aux1, aux2;
	
	//verificando se a lista não está vazia
	if (*L)
	{
		if ((*L)->valor == numero)
		{
			aux = *L;
			*L = aux->prox; //ou *L = (*L)->prox;
			free (aux);
			return TRUE;		
		}
		else
		{	
			aux2 = *L;
			aux1 = (*L)->prox; //ou aux1 = aux2->prox;
				
			while ((aux1) && (aux1->valor <= numero))
			{
				if (aux1->valor != numero)
				{
					aux2 = aux2->prox; //ou aux2 = aux1;
					aux1 = aux1->prox;
				}
				else
				{
					aux2->prox = aux1->prox;
					free (aux1);
					return TRUE;
				}
			}	
		}
	}
	return FALSE;  //ou a lista está vazia ou o elemento não foi encontrado
}

int alterar (TLista L, int velho, int novo)
{
	TLista posN, posV;
	
	posV = pesquisar (L, velho);
	
	if (posV) //verificando se o velho existe na lista
	{
		posN = pesquisar (L, novo);
		
		if (!posN) //ou if (posN == NULL)  verificando se o novo não existe na lista
		{
			remover (&L, velho);
			inserir (&L, novo);
			
			return TRUE;
		}
	}
	
	return FALSE; //ou o velho não foi encontrado, ou o novo foi encontrado
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
		else
		{
			if (aux->valor > numero)  //se for encontrado um elemento na lista maior do que o numero, a busca pode ser cessada
			{
				return NULL;
			}
		}
		
		aux = aux->prox;
	}	
	
	return NULL;  //o elemento buscado é maior do que todos da lista
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
	
	printf ("Menu de opcoes:\n\n");
	printf ("(1) Inserir\n(2) Remover\n(3) Alterar\n");
	printf ("(4) Buscar\n(5) Exibir\n(6) Sair\n\n");
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &op);
	
	return op;
}
