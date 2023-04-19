#include<stdio.h>

int main()
{
	int opcao,cont=0;
	float numero;
	
	printf("Insira o numero: ");	// É uma boa prática utilizar o caractere de formatação \n ao final de cada printf

	scanf("%f",&numero);
	
	printf("Deseja codificar ou decodificar(1 ou 0)? ");	// Uso do \n
	scanf("%d",&opcao);
	
	do
	{
		numero/=10;
		cont++;
	}while((int)numero!=0);		// Para contornar o uso do type casting e utilizar outra comparação, bastaria utilizar uma estrutura while e o seguinte teste: (numero >= 1)

	if(opcao==1)
	{
		while(cont>0)
		{
			numero*=10;
			
			if(((int)numero-9)%10==0)	// Outra maneira de testar seria utilizando a seguinte comparação: if((int)numero%10==9)
			{
				numero-=9;	// Realizar a alteração do número enquanto realiza as verificações causa problemas em alguma situações, por exemplo, quando o valor for 999
				cont--;
			}
			else
			{
				numero++;
				cont--;
			}
		}
	}
	else	// O uso do else reforça a ideia de uma decisão binária, tornando a escolha entre 1 e qualquer outra coisa frágil em questão de segurança. Recomendaria o uso de uma estrutura switch case aqui: um caso para cada escolha e um default para erros
	{
		while(cont>0)
		{
			numero*=10;
			
			if(((int)numero-9)%10==9)
			{
				numero+=9;	// O mesmo sobre alterar o numero enquanto realiza as verificações
				cont--;
			}
			else
			{
				numero--;
				cont--;
			}
		}
	}
	
	printf("%.f",numero);	// Uso do \n. É possivel imprimir o número como um inteiro aqui, usando o type casting
}
