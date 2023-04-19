#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

// A função copiador fica responsável por abrir um arquivo, testá-lo, ler-lo, e copiar seus elementos para um novo arquivo, que, nesse caso, será criado pela função também.
// Outras possibilidades de protótipo da função são:
// Usando o tipo int para retornar 0 ou 1. Ex.: int copiador (FILE *fp, char *pathOld_c);
// Recebendo o caminho para o novo documento/documento auxiliar, até mesmo recebendo o outro arquivo. Ex.: void copiador (FILE *fp, FILE *fpAux, char *pathOld_c, char *pathNew_c);
void copiador (FILE *fp, char *pathOld_c);

int main (void){

FILE *fp;
char arq[]="arquivo.txt";

copiador(fp, arq);

  return FALSE;
}

//Função que copia o conteúdo de um arquivo para  outro
void copiador (FILE *fp, char *pathOld_c){

  FILE *fpAux;	// Criação da variável que irá receber a stream do arquivo auxiliar.
  char *stringAux_c;	// Criação da variável utilizada para capturar a linha do arquivo original e copiá-la para o novo arquivo.

  fp=fopen(pathOld_c, "r");	// Abrindo o arquivo original, com permissão de leitura, logo o uso do "r", significando "read-only". O parâmetro "r" posiciona o cursor na primeira posição da primeira linha do arquivo.
  fpAux=fopen("aux.txt", "w");	// Abrindo o arquivo auxiliar, com permissão de sobrescritura, logo o uso do "w", significando "overwrite". O parâmetro "w" posiciona o cursor na primeira posição da primeira linha do arquivo.
  				// Caso deseje que o arquivo auxiliar acumule dados de outros arquivos, deve-se utilizar o parâmetro "a", para "append", ou seja, adicionar ao final do arquivo.
				// No caso da necessidade de adicionar dados no início do arquivo, pode-se utilizar a função rewind(fp) para retornar com o cursor para a primeira posição.
				// Em situações onde o cursor deve ser posicionado em uma determinada posição do arquivo, é preciso elaborar um algoritmo que mova-o para tal posição.

  if (!fp){	// Realizando um teste de validade do arquivo. Caso ele seja nulo, o programa encerra através da função exit(1).
    exit(1);	// Atenção ao utilizar a função exit(), pois ela irá encerrar o programa por completo e retornando algo, definido em seu parâmetro.
  }
		// Outra maneira de lidar com o teste de validade do arquivo é criar uma função que fará esse teste. Mais detalhes ao final.

  while (!feof(fp)){	// Iniciando o loop de leitura do arquivo, testando para verdadeiro a seguinte proposição: enquanto NÃO for o EOF do arquivo fp, faça...
	  		// A função feof() retorna um teste para o último byte lido. Caso ela encontre o final do arquivo (EOF), irá retornar 0.
    fscanf(fp, "%s", stringAux_c);	// Lendo a primeira linha do arquivo e armazenando-a numa string.
    fprintf(fpAux, "%s", stringAux_c);	// Copiando a string para a primeira linha do arquivo auxiliar.
  }

  fclose(fp);
  fclose(fpAux);	// Fechando os dois arquivos ao final de sua manipulação.
}

/* Considerações:
 *
 * Esse é um exemplo de como realizar um procedimento de cópia de dados de um arquivo para o outro. A maneira de manipulação para os arquivos pode mudar ligeiramente, dependendo da ocasião, enquanto a manipulação dos dados pode mudar bastante.
 * Há algumas maneiras diferentes de se testar o final de um arquivo (EOF). Caso ele seja encontrado, o arquivo deve parar de ser manipulado e uma decisão deverá ser tomada.
 * Se houver a necessidade de testar a validade de diversos arquivos, ou testá-los diversas vezes, recomendo o uso de uma função para tal, como:
 *
 * int fatal (FILE *msg)
 *
 * 	if (msg == NULL) ou if (!msg)
 *
 * 		return TRUE
 *
 * 	else
 *
 *		return FALSE
 */
