#include <stdio.h>

int funcao(int *vetor);

int main(){
	int i, limite;
	printf("Informe a quantidade de termos que seram usados: ");
	scanf("%d", &limite);
	printf("\n");
	
	int vetor[limite];	// Evite sempre realizar a declaração de vetores dessa maneira, há uma estrutura em C que possibilita a alocação dinâmica de vetores chamada malloc. Dê preferência a utilizá-la.

	/* int *vetor;
	 * unsigned int i;
	 *
	 * printf("Informe a quantidade de termos que serao utilizados: \n");
	 * scanf("%u", &i);
	 *
	 * vetor=(int*)malloc(i * sizeof(int));
	 */
	
	for(i=0;i<limite;i++){
		printf("informe o numero: ");
		scanf("%d", &vetor[i]);
	}
	
	funcao(vetor[]);	// Ao passar o vetor, não é necessário o * ou as [], basta passar o vetor em si, pois ele já é um endereço de memória.
				// funcao(vetor);
	return 0;
}

int funcao(int *vetor){
	
}
