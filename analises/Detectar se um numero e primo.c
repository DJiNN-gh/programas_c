#include<stdio.h>

//Prototipo
unsigned char primo(int num);

//Fun��o Principal
int main(void){
	int num;//num = n�mero inserido pelo usu�rio
	
	//Viadagem
	printf("================================\n");
	printf("   DETECTANDO UM NUMERO PRIMO\n");
	printf("================================\n");
	
	//Recebe um n�mero inteiro positivo
	printf("Insira um numero:\n");
	scanf("%i",&num);
	
	//Exibe o retorno da fun��o primo(num)
	if(primo(num))
	printf("O numero %i e primo.\n",num);
	else
	printf("O numero %i nao e primo.\n",num);
	//Fim da Fun��o Principal
	return 0;
}
//Fun��o primo(num)
unsigned char primo(int num){//num = par�metro recebido da fun��o principal. Em outras palavras, o n�mero inserido pelo usu�rio
	unsigned int i;//i = contador do for
	unsigned char cont=0;// cont (dentro do for) = contador que detecta se um n�mero � ou n�o primo
	
	//Se o n�mero for 2 ele � primo, retorna verdadeiro
	if(num==2)
	return 1;
	
	//Se o n�mero for 1 ou par ele n�o � primo, retorna falso
	if(num==1 || num%2==0)
	return 0;
	
	//Se as duas compara��es anteriores forem falsas, ent�o ele detecta se o n�mero � primo ou n�o pelo for
	for(i=3;i<num/2 || cont==1;i+=2)
	if(num%i==0)
	cont=1;//vari�vel cont conta se o n�mero for divis�vel pela vari�vel i
	
	//D�VIDA: Por que quando eu substituo o cont++ por cont=1 ele para de funcionar?
	
	//Se a vari�vel cont igual a 1 o n�mero n�o � primo, retorna falso
	if(cont)
	return 0;
	//Sen�o, retorna verdadeiro
	return 1;
	
	//Fim da Fun��o Secund�ria
}
