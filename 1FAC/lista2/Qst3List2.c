/* QUESTÃO 03: As vendas parceladas se tornaram uma ótima opção para os lojistas que, a 
cada dia, criam novas promoções para tentar conquistar novos clientes. Faça um algoritmo 
que permita ao lojista informar o preço do produto e receber as seguintes informações:

a) O valor com 10% de desconto para pagamento à vista;
b) O valor da prestação para parcelamento sem juros, em 5x;
c) O valor da prestação para parcelamento com juros, em 10x, com 20% de acréscimo no valor do produto. */

#include <stdio.h>
#include <stdlib.h>

#DEFINE DESC 0.1
#DEFINE JUROS 1.2
#DEFINE PARC_5X 5
#DEFINE PARC_10X 10 

int main (void){

float valor, vDesconto, vPrestacao5x, vPrestacao10x;
printf("Insira o valor do produto: \n");
scanf("%f", &valor);

vDesconto=valor-(valor*DESC);
vPrestacao5x=valor/PARC_5X;
vPrestacao10x=(valor*JUROS)\PARC_10X;

printf("\t--INFORMACOES--\nValor a vista com desconto:\tR$ %.2f\nValor da parcela em 5 vezes, sem juros\tR$ %.2f\nValor da parcela em 10 vezes, com juros\tR$ %.2f\n", vDesconto, vPrestacao5x, vPrestacao10x);
}
