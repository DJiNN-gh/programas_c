#include<stdio.h>

//Prototipo
unsigned char primo(int num);

//Função Principal
int main(void){
	int num;//num = número inserido pelo usuário
	
	//Viadagem
	printf("================================\n");
	printf("   DETECTANDO UM NUMERO PRIMO\n");
	printf("================================\n");
	
	//Recebe um número inteiro positivo
	printf("Insira um numero:\n");
	scanf("%i",&num);
	
	//Exibe o retorno da função primo(num)
	if(primo(num))
	printf("O numero %i e primo.\n",num);
	else
	printf("O numero %i nao e primo.\n",num);
	//Fim da Função Principal
	return 0;
}
//Função primo(num)
unsigned char primo(int num){//num = parâmetro recebido da função principal. Em outras palavras, o número inserido pelo usuário
	unsigned int i;//i = contador do for
	unsigned char cont=0;// cont (dentro do for) = contador que detecta se um número é ou não primo
	
	//Se o número for 2 ele é primo, retorna verdadeiro
	if(num==2)
	return 1;
	
	//Se o número for 1 ou par ele não é primo, retorna falso
	if(num==1 || num%2==0)
	return 0;
	
	//Se as duas comparações anteriores forem falsas, então ele detecta se o número é primo ou não pelo for
	for(i=3;i<num/2 || cont==1;i+=2)
	if(num%i==0)
	cont=1;//variável cont conta se o número for divisível pela variável i
	
	//DÚVIDA: Por que quando eu substituo o cont++ por cont=1 ele para de funcionar?
	
	//Se a variável cont igual a 1 o número não é primo, retorna falso
	if(cont)
	return 0;
	//Senão, retorna verdadeiro
	return 1;
	
	//Fim da Função Secundária
}
