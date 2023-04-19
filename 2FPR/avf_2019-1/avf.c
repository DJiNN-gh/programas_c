#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	char *nome;
	float av1;
	float av2;
} tLista;

typedef struct node{
	char *nome;
	float av1;
	float av2;
	struct node *next;
} tNode;

typedef struct q4{
	int chave;
	struct q4 *next;
} tQ4;

typedef tNode *ref;
typedef tQ4 *ref2;

// Função referente a questão 1
void questao_01 (char *string_c);
// Função referente a questão 2
int questao_02 (tLista *a, unsigned int tam_ui, unsigned int argc_ui);
// Função referente a questão 3.1.
int questao_03_1 (char *path_c);
// Função referente a questão 3.2.
int questao_03_2 (char *path_c, ref H);

// Bloco de funções auxiliares
int insersor (ref *H, char *string_c, float element1_f, float element2_f);

int main (void){


return 0;
}

// Função que recebe um vetor de caracteres e, recursivamente, imprime-o na tela, de maneira inversa
void questao_01 (char *string_c){

	// Testa para ver se o vetor em determinada posição é igual a \0, ou seja, o final de uma string
	if (*string_c != '\0'){

		// Chama novamente a função, somando 1 ao seu endereço de memória, movendo o índice
		questao_01(string_c+1);
		printf("%c", *string_c);
	}
}

// Função que recebe o endereço do primeiro elemento do vetor da estrutura, assim como seu tamanho e o argumento de ordenação
int questao_02 (tLista *a, unsigned int tam_ui, unsigned int argc_ui){

	unsigned int i=0, j=0;
	tLista aux;

	// Implementação de um proto Bubble para ordenação dos elementos
	// É usada a estrutura switch/case para definir ações para cada argumento
	switch (argc_ui){

		// Caso seja passado o argumento valor 1, ordena pela av1
		case 1:
			while (j < tam_ui){
				
				i=j;

				while (i < tam_ui){

					if (a[i].av1 > a[i+1].av1){

						aux.nome=a[i+1].nome;
						aux.av1=a[i+1].av1;
						aux.av2=a[i+1].av2;

						a[i+1].nome=a[i].nome;
						a[i+1].av1=a[i].av1;
						a[i+1].av2=a[i].av2;

						a[i].nome=aux.nome;
						a[i].av1=aux.av1;
						a[i].av2=aux.av2;
						}
					i++;
				}
			j++;
			}
				break;

		// Caso seja passado o argumento valor 2, ordena pela av2
		case 2:
			while (j < tam_ui){
				
				i=j;

				while (i < tam_ui){

					if (a[i].av2 > a[i+1].av2){

						aux.nome=a[i+1].nome;
						aux.av1=a[i+1].av1;
						aux.av2=a[i+1].av2;

						a[i+1].nome=a[i].nome;
						a[i+1].av1=a[i].av1;
						a[i+1].av2=a[i].av2;

						a[i].nome=aux.nome;
						a[i].av1=aux.av1;
						a[i].av2=aux.av2;
						}
					i++;
				}
			j++;
			}
			break;

		// Caso seja passado algum outro valor de argumento, retorna 1, indicando erro
		default:
			return 1;
	}
return 0;
}

// Função que recebe o endereço do arquivo e a cabeça da lista, a fim de copiar os elementos do arquivo para nós da lista
int questao_03_1 (char *path_c){

	ref H=NULL;
	FILE *fp;
	char *aux_c;
	float aux1_f, aux2_f;

	fp=fopen(path_c, "r");
	
	// Caso não seja possível abrir o arquivo, retorna 1, indicado erro
	if (!fp){

		return 1;
	}

	// Lê o arquivo enquanto não for EOF
	while (!feof(fp)){

		fscanf(fp, "%s", aux_c);
		fscanf(fp, "%f", aux1_f);
		fscanf(fp, "%f", aux2_f);

		// Chama uma função responsável por atribuir elementos em um nó de uma estrutura
		// São passados o endereço e os dados correspondentes aos membros da estrutura
		insersor(&H, aux_c, aux1_f, aux2_f);
	}

	fclose(fp);

return 0;
}

// Função que lê os arquivos de uma lista, nó a nó, e os salva em um arquivo
int questao_03_2 (char *path_c, ref H){

	ref aux1=H, aux2;
	FILE *fp;

	fp=fopen(path_c, "w");

	// Caso a lista esteja vazia, retorna 1, indicando "erro"
	if (!H){

		return 1;
	}
	else{

		while (aux1){

			fprintf(fp, "%s\n", aux1->nome);
			fprintf(fp, "%f\n", aux1->av1);
			fprintf(fp, "%f\n", aux1->av2);

			aux2->next=aux1->next;
			free(aux1);
			aux1=aux2->next;
		}
	}
	fclose(fp);

return 0;
}

// Função que insere um novo nó em uma lista
int insersor (ref *H, char *string_c, float element1_f, float element2_f){

	ref aux=(ref)malloc(sizeof(tNode));

	// Em caso de erro durante a alocação, retorna 1
	if (!aux){

		return 1;
	}
	else{

		// Preenchendo os membros da lista
		aux->nome=string_c;
		aux->av1=element1_f;
		aux->av2=element2_f;
		aux->next=*H;

		// Redirecionando para o novo elemento
		*H = aux;
	}
return 0;
}

/* Resposta referente a questão 4:
 *
 * 	a) Para Pilhas, é possível utilizar um algoritmo para "desempilhar" a estrutura 
 * 	(seja vetor estático, dinâmico, árvore ou afins). Copia-se a estrutura para um 
 * 	auxiliar, a fim de preservar a estrutura original, e aplica-se o algoritmo 
 * 	para "desempilhar".
 *
 * 	Seguem-se os seguintes passos:
 *
 * 		1-A estrutura é copiada para uma estrutura auxiliar, a fim de preservar
 * 		sua composição original, dado o fato de que apenas o primeiro elemento
 * 		da pilha pode ser manipulado;
 * 		2-É iniciado o processo de "desempilhar" a estrutura auxiliar, contando
 * 		o elemento encontrado e removendo-o da pilha;
 * 		3-O processo continua enquanto houverem elementos na pilha;
 * 		4-Ao final, é retornado a quantidade de elementos contados.
 *
 * 		Obs.: em caso de vetores estáticos, devido a incapacidade de desalocar
 * 		memória de maneira dinâmica, é recomendado o uso de flags.
 *
 * 	b) Para Filas, é possível utilizar um algoritmo como 
 * 	"FIFO (First-in, first-out)" para manipular os elementos de uma estrutura. 
 * 	Os elementos são rotacionados na organização da fila, e contados a cada 
 * 	iteração.
 *
 * 	Seguem-se os seguintes passos:
 *
 * 		1-O primeiro elemento da estrutura é contado e marcado como o primeiro
 * 		elemento, definindo a flag que limitará as iterações;
 * 		2-É iniciado o algoritmo que rotaciona os elementos da estrutura, onde
 * 		o primeiro elemento é definido como o último da fila (vai para o final)
 * 		e o seu sucessor passa a ser o primeiro da fila, e é contada cada 
 * 		iteração de deslocamento;
 * 		3-O processo continua até que o primeiro elemento contado volte à sua
 * 		posição original;
 * 		4-Ao final, é retornada a quantidade de iterações de deslocamento da
 * 		fila, ou seja, o número de elementos contados.
 */
