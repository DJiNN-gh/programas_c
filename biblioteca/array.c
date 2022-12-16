#include <stdio.h>

/* 
 * Vetores são alocações estáticas de memória, reservando um espaço contínuo na memória principal.
 * Vetores possuem a propriedade de reservarem apenas espaços do mesmo tipo/tamanho para toda a sua alocação.
 *
 * 	Declaração de um vetor de caracteres de oito posições
 *
 * 	char array_c[8];
 *		// Na declaração, é informado o tamanho do vetor em seu índice.	
 *
 * 	|C|O|N|T|E|U|D|O|
 * 	 0 1 2 3 4 5 6 7
 *
 * 	Vetores iniciam sua contagem de suas posições sempre à partir do 0, logo:
 *
 * 	0 = primeira posição;
 * 	1 = segunda posição;
 * 	2 = terceira posição;
 * 	3 = quarta posição;
 * 	...
 * 	n = enésima+1 posição;
 *
 * 	Chamada do vetor, posição a posição
 *
 * 	array_c[0];
 * 	array_c[1];
 * 	array_c[2];
 * 	...
 * 	array_c[7];
 * 		// Na chamada, é informada a posição do elemento que deseja ser 
 * 		encontrado/manipulado.
 *
 * 	Por se tratar de memória, o índice [0] corresponde ao primeiro endereço de 
 * 	memória do vetor, logo todos os valores subsequentes serão o valor inicial 
 * 	somados ao tamanho correspondente ao tipo do vetor.
 *
 * 	int array_i[3];
 *
 * 	|690|780|870|
 * 	  0   1   2
 *	End+0by
 *	    End+4by
 *	    	End+8by
 *
 *	 char array_c[5];
 *
 *	 |A|L|L|A|N|
 *	  0 1 2 3 4
 *	 End+0by
 *	    End+1by
 *	      End+2by
 *	        End+3by
 *	           End+4by
 *	           
 * Matrizes possuem um funcionamento semelhante, onde cada primeiro índice aponta para
 * uma série de índices, ou um endereço de memória que aponta para uma série de 
 * endereços. 
 * Sua organização em memória funciona como um vetor qualquer, em ordem, mas sua 
 * interpretação é como a de uma tabela.
 *
 * 	int array_i[5];
 * 		// Declaração de um vetor de 5 posições
 *		// O elemento array_i[0] (ou *array_i) é o primeiro do vetor e todos 
 *		os elementos seguintes são contíguos em memória
 *
 *	int matrix_i[5][5];
 *		// Declaração de uma matriz de 5 colunas e 5 linhas
 *		// O primeiro elemento é identificado pela posição matrix_i[0][0], onde 
 *		é acessado o primeiro elemento do primeiro vetor
 *
 * 				 1 2 3 4 5
 * 				 ª ª ª ª ª
 * 				 C C C C C
 * 				 o o o o o
 * 				 l l l l l
 *		1ª Linha	|0|1|2|3|4|
 *		2ª Linha	|1|2|3|4|5|
 *		3ª Linha	|2|3|4|5|6|
 *		4ª Linha	|3|4|5|6|7|
 *		5ª linha	|4|5|6|7|8|
 *
 * 	O primeiro índice acessa as linhas
 * 	
 * 	matrix_i[][]
 * 		/\
 *		||
 *
 *	O segundo índice acessa as colunas
 *	
 *	matrix_[][]
 *		 /\
 *		 ||
 *
 * 	Onde,
 *
 * 	matrix[0][0]
 *	       |
 *	       v
 *	   -> |0|1|2|3|4|
 *	      |1|2|3|4|5|
 *	      |2|3|4|5|6|
 *	      |3|4|5|6|7|
 *            |4|5|6|7|8|
 * 		
 *	acessa esse elemento, ou seja, o primeiro elemento do primeiro vetor;
 *
 *
 * 	enquanto,
 *
 * 	matrix[1][0]
 *	       |
 *	       v
 *	      |0|1|2|3|4|
 *	   -> |1|2|3|4|5|
 *            |2|3|4|5|6|
 *	      |3|4|5|6|7|
 *	      |4|5|6|7|8|
 * 		
 *	acessa esse elemento, ou seja, o primeiro elemento do segundo vetor.
 *
 * Matrizes também podem ser entendidas como ponteiros que apontam para ponteiros, dada
 * a natureza dos vetores.
 * Enquanto a declaração de um vetor, ou um conjunto de elementos em memória é dada por:
 *
 * 	char array_c[10];
 *
 * e suas posições podem ser acessadas com o operador *,
 *
 * 	*array_c;
 *
 * uma matriz pode ser acessada da seguinte maneira:
 *
 * 	matrix_c[10][10];
 *		// Declaração
 * 	**matrix_c;
 * 		// Chamada
 *
 * A chamada acessa o primeiro elemento, onde *matrix_c referencia o primeiro 
 * elemento e **matrix_c referencia o primeiro vetor.
 *
 * Cada operador * pode ser entendido como um índice e o acesso de memória pode ser 
 * realizado utilizando o operador * e então manipulando-o.
 * 	
 * 	**matrix_c;
 * 		// Acesso à primeira coluna, primeira linha
 * 	*(*matrix_c+1);
 * 		// Acesso à primeira coluna, segunda linha
 * 	*(*matrix_c+2);
 * 		// Acesso à primeira coluna, terceira linha
 *	
 *	**matrix_c+1
 *		// Acesso à segunda coluna, primeira linha
 *	*(matrix_c+1)+1
 *		// Acesso à segunda coluna, segunda linha
 *	*(matrix_c+2)+1
 *		// Acesso à segunda coluna, terceira linha
 *
 */

int main (void){

	// Declaração de variáveis
	
	char array_c[3];		// Vetor do tipo char
	int array_i[3];			// Vetor do tipo int
	char matrix_c[3][5]={66};		// Matriz do tipo char
	int matrix_i[10][5]={0};		// Matriz do tipo int
	unsigned int i, j, k;

	// Testando um vetor de caracteres
	printf("O tamanho do vetor de char: %zu\n", sizeof array_c);
	printf("O numero de elementos do vetor de char: %zu\n\n", sizeof array_c / sizeof array_c[0]); // Pode-se utilizar também a seguinte fórmula: sizeof (variável) / sizeof (tipo_variável).

	array_c[0]='A';
	array_c[1]=0x42;
	array_c[2]=67;

	// Percorrendo o vetor de caracteres
	for (i=0;i < (sizeof array_c / sizeof (char));i++){
		printf("O elemento %u do vetor de char: %c\n", i, array_c[i]);
		printf("O endereco do vetor de char na posicao [%u] em memoria: %p\n", i, &array_c[i]);
	}

	putchar('\n');

	// Testando um vetor de inteiros
	printf("O tamanho do vetor de int: %zu\n", sizeof array_i);
	printf("O numero de elementos do vetor de int: %zu\n\n", sizeof array_i / sizeof array_i[0]);

	array_i[0]='D';
	array_i[1]=0x45;
	array_i[2]=70;

	// Percorrendo o vetor de inteiros
	for (i=0;i < (sizeof array_i / sizeof (int));i++){
		
		printf("O elemento %u do vetor de int: %d\n", i, array_i[i]);
		printf("O endereco do vetor de int na posicao [%u] em memoria: %p\n", i, &array_i[i]);
	}

	putchar('\n');

	// Testando uma matriz de caracteres
	printf("O tamanho da matriz de char: %zu\n", sizeof matrix_c);
	printf("O tamanho de uma coluna da matriz de char: %zu\n", sizeof matrix_c / sizeof *matrix_c);
	printf("O tamanho de uma linha da matriz de char: %zu\n", sizeof *matrix_c / sizeof (char));

	putchar('\n');

	// Percorrendo a matriz de caracteres

	for (i=0, k=0;i < (sizeof matrix_c / sizeof *matrix_c);i++){
	// O primeiro loop percorre os elementos das linhas

		for (j=0;j < (sizeof *matrix_c / sizeof(char));j++, k++){
		// O segundo loop percorre os elementos das colunas

			printf("O elemento %u da matriz de char: %c\n", k, matrix_c[i][j]);
			printf("O endereco da matriz de char na posicao [%u] em memoria: %p\n", k, &matrix_c[i][j]);
		}
		putchar('\n');
	}

	putchar('\n');

	// Testando uma matriz de inteiros
	printf("O tamanho da matriz de int: %zu\n", sizeof matrix_i);
	printf("O tamanho de uma coluna da matriz de int: %zu\n", sizeof matrix_i / sizeof *matrix_i);
	printf("O tamanho de uma linha da matriz de int: %zu\n", sizeof *matrix_i / sizeof (int));

	putchar('\n');

	// Percorrendo a matriz de inteiros

	for (i=0, k=0;i < (sizeof matrix_i / sizeof *matrix_i);i++){
    // O primeiro loop percorre os elementos das linhas

		for (j=0;j < (sizeof *matrix_i/ sizeof (int));j++, k++){
        // O segundo loop percorre os elementos das colunas
        
			printf("O elemento %u da matriz de int: %d\n", k, matrix_i[i][j]);
			printf("O endereco da matriz de int na posicao [%u] em memoria: %p\n", k, &matrix_i[i][j]);
		}
		putchar('\n');
	}

return 0;
}
