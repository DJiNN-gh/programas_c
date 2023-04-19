/*
Insira um numero:
10.1

double fracionario(double f)
FRACIONARIA = 0.00000000000000000000000
F = 0.10000038146972656000000
FRACIONARIA = 0.00000000000000000000000
F = 0.20000076293945313000000
FRACIONARIA = 0.00000000000000000000000
F = 0.40000152587890625000000
FRACIONARIA = 0.00000000000000000000000
F = 0.80000305175781250000000
FRACIONARIA = 0.00010000000000000000000
F = 0.60000610351562500000000
FRACIONARIA = 0.00011000000000000000000
F = 0.20001220703125000000000
FRACIONARIA = 0.00011000000000000000000
F = 0.40002441406250000000000
FRACIONARIA = 0.00011000000000000000000
F = 0.80004882812500000000000
FRACIONARIA = 0.00011001000000000000000
F = 0.60009765625000000000000
FRACIONARIA = 0.00011001100000000000000
F = 0.20019531250000000000000
FRACIONARIA = 0.00011001100000000000000
F = 0.40039062500000000000000
FRACIONARIA = 0.00011001100000000000000
F = 0.80078125000000000000000
FRACIONARIA = 0.00011001100100000000000
F = 0.60156250000000000000000
FRACIONARIA = 0.00011001100110000000000
F = 0.20312500000000000000000
FRACIONARIA = 0.00011001100110000000000
F = 0.40625000000000000000000
FRACIONARIA = 0.00011001100110000000000
F = 0.81250000000000000000000
FRACIONARIA = 0.00011001100110010001000
F = 0.62500000000000000000000
FRACIONARIA = 0.00011001100110011001000
F = 0.25000000000000000000000
FRACIONARIA = 0.00011001100110011001000
F = 0.50000000000000000000000
FRACIONARIA = 0.00011001100110011010000
F = 0.00000000000000000000000
FRACIONARIA = 0.00011001100110011010000
F = 0.00000000000000000000000
FRACIONARIA = 0.00011001100110011010000
F = 0.00000000000000000000000
FRACIONARIA FINAL = 0.00011001100110011010000	//Por que a ultima parte (0011010000) não foi retornada à função principal?

void main()
Numero decimal = 10.10000038146972700000000     //De onde vieram os valores pós 10.100000?
Binario = 1010.00011001100110000000000

--------------------------------
Process exited after 2.853 seconds with return value 39
Pressione qualquer tecla para continuar. . .
*/

#include<stdio.h>

double inteiro(int i)
{
	double multiplicador=1,inteira=0;
	char resto;
	
	while(i>0)
	{
		resto=i%2;
		i=i/2;
		if(resto>0)
		inteira+=resto*multiplicador;
		multiplicador*=10;
	}
	return (inteira);
}

double fracionario(double f)
{
	double multiplicador=10,fracionaria=0;
	char i;
	
	for(i=0;i<23;i++)
	{
		printf("FRACIONARIA = %.23f\n",fracionaria);
		printf("F = %.23f\n",f);
		
		f*=2;
		if((int)f==1)
		{
			fracionaria+=1/multiplicador;
			f-=1;
		}

		multiplicador*=10;
	}
	printf("FRACIONARIA FINAL = %.23f\n",fracionaria);
	return (fracionaria);
}

void main()
{
	double parte_inteira,f,parte_fracionaria;
	float decimal;
	int i;
	
	printf("Insira um numero:\n");
	scanf("%f",&decimal);
	
	i = decimal;
	f = decimal - i;
	
	parte_inteira = inteiro(i);
	parte_fracionaria = fracionario(f);
	
	printf("Numero decimal = %.23f\n",decimal);
	printf("Binario = %.23f\n",parte_inteira+parte_fracionaria);
}

/* Declaração de protótipos
 *
 * Protótipos são declarações de funções sem o seu código de desenvolvimento, apenas anunciando sua existência para a função main. Sua vantagem é poder realizar a chamada da função em qualquer lugar, em qualquer ordem.
 *
 * O uso do protótipo é dado da seguinte maneira:
 * 
 * double inteiro(int i);		Os protótipos são declarados antes da main
 * double fracionario(double f);	Elas deverão terminar com um ;
 *					
 * int main (void){
 *
 * .
 * ..
 * ...
 *
 * return 0;}
 *
 * double inteiro(int i){		Elas são desenvolvidas após o código da main
 *
 * .
 * ..
 * ...
 *
 * return valor_d;}
 *
 * double fracionario(double f){
 *
 * .
 * ..
 * ...
 *
 * return valor_d;}
 */
