/*
QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A. 
*/

#include <stdio.h>

int calculoOcorrencia (int, int*, int);	// Na declaração do protótipo de funções é preciso declarar também as variáveis que serão recebidas como parâmetro.
					// Nesse caso, faltaram os nomes das variáveis que serão recebidas e manipuladas por essa função.
int main (){
    //declaração de variáveis.
    int X, numeros[X], determ, result;
	// Imagino que essa tenha sido uma tentativa de declaração de vetor, onde o número de posições será dado por X.
	// Essa maneira de declaração está incorreta. A declaração de um vetor não pode ser feita desse modo.
	// Ao tentar realizar uma alocação em tempo de compilação, você estará lidando com um conceito chamado Alocação Dinâmica de Memória.
	// É possível realizar tal alocação na linguagem C, no entanto essa estrutura não será abordada na disciplina de 1FAC.
	// Em suas declarações de vetores, utilize o índice [] para determinar o tamanho de um vetor, sempre. 
	// Em declarações de funções é possível deixar o vetor com tamanho indefinido, pois subentende-se que será passada a primeira posição de memória, e qualquer manipulação posterior será mediante esse endereço.
	// Ex.: int funcao_01 (int *valor_i, char nome_c[]);

    //obtendo dados:
    printf("Digite a quantidade de numeros que o vetor possuira.\n");
    scanf("%d", &X);

    // Pelos comentários acima, essa sequência de printf/scanf não pode existir
    // Pode-se substituir pelo tamanho, apenas para servir como parâmetro para percorrer o vetor

    for (int i = 0; i < X; i++){
        printf("Digite o %d valor do vetor.\n",i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o valor que quer analisar quantas vezes aparece no vetor.\n");
    scanf("%d", &determ);

    result = calculoOcorrencia(X, numeros, determ);
    // Esse resultado poderia ser impresso na tela, do contrário não será sabido, nesse caso, a quantidade de repetições.
    // A abordagem não está incorreta, mas é preciso entender pra quem será esse retorno.
    return 0;
}
int calculoOcorrencia (int X, int *numeros, int determ){
    int count = 0;
    for (int i = 0; i < X; i++){
        if (determ == numeros[i]){
            count += 1;
        }
    }
    return count;
}
