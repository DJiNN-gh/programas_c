#include<stdio.h>

#define TAMANHO 10

/* QUEST�O 05: Elaborar uma fun��o que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou �mpares.  */

void parouimpar (int v[], int tam)
{
	int i;
	int v_par[tam];
	int v_impar[tam];
	// Os vetores par e �mpar podem ser declarados na fun��o main, tamb�m, e depois passados para a fun��o que ir� fazer a separa��o.
	// Caso eles sejam devolvidos como retorno, precisam ser declarados no cabe�alho da fun��o.
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
	// N�o se deve imprimir dentro da fun��o, a n�o ser que esteja explicitamente sendo pedido no en�nciado da quest�o.
	// Os valores contPar e contImpar s�o para determinar o tamanho de cada vetor, o vetor par e o vetor �mpar.
	// Eles ser�o utilizados por outras fun��es, como a main, logo devem ser retornados.
	// Como h� mais de um valor a ser retornado, deve-se utilizar ponteiros para o retorno de cada um deles.
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
	// Lembrando que � um vetor de inteiros, portanto o caractere de formata��o dever� ser o %d ou %i.
	}
	
	parouimpar (vetor, TAMANHO);
	
	
return 0;		

}
