#include<stdio.h>

#define TAMANHO 10

/* QUESTÃO 05: Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares.  */

void parouimpar (int v[], int tam)
{
	int i;
	int v_par[tam];
	int v_impar[tam];
	// Os vetores par e ímpar podem ser declarados na função main, também, e depois passados para a função que irá fazer a separação.
	// Caso eles sejam devolvidos como retorno, precisam ser declarados no cabeçalho da função.
	int ContPar=0, ContImpar=0;

	
	for(i=0;i<tam;i++)
	{
		if(v[i]%2==0)
		{
			v_par[ContPar]=v[i];
			ContPar++;
		}
		
		else
		{
			v_impar[ContImpar]=v[i];
			ContImpar++;
		}
	printf("Numeros pares %d \n", v_par[ContPar]);
	printf("Numeros impares %d \n", v_impar[ContImpar]);
	// Não se deve imprimir dentro da função, a não ser que esteja explicitamente sendo pedido no enúnciado da questão.
	// Os valores contPar e contImpar são para determinar o tamanho de cada vetor, o vetor par e o vetor ímpar.
	// Eles serão utilizados por outras funções, como a main, logo devem ser retornados.
	// Como há mais de um valor a ser retornado, deve-se utilizar ponteiros para o retorno de cada um deles.
	}
}


int main ()
{
	int i, j, k;
	int vetor[TAMANHO];

	for(i=0;i<TAMANHO;i++)
	{
	printf("Insira os numeros do vetor ");
	scanf("%f", &vetor[i]);
	// Lembrando que é um vetor de inteiros, portanto o caractere de formatação deverá ser o %d ou %i.
	}
	
	parouimpar (vetor, TAMANHO);
	
	
return 0;		

}
