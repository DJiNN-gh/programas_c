/* QUESTÃO 05: O cardápio de uma lanchonete é o seguinte:

Especificação		Código	Preço

Cachorro quente		100	3,50 
Bauru simples 		101	4,50
Bauru com ovo 		102	5,20
Hamburger 		103	3,00
Cheeseburger 		104	4,00
Refrigerante		105	2,50

Escrever um algoritmo que obtenha o código do item pedido, a quantidade e calcule o 
valor a ser pago.
Considere que, a cada execução do algoritmo, somente será calculado o valor relacionado 
a um item. */

#include <stdio.h>
#include <stdlib.h>

#define COD_CACHQ 100
#define COD_BAUSP 101
#define COD_BAUCO 102
#define COD_HAMBG 103
#define COD_CHESB 104
#define COD_REFRI 105

#define CACHQ 3.50
#define BAUSP 4.50
#define BAUCO 5.20
#define HAMBG 3.00
#define CHESB 4.00
#define REFRI 2.50

int main (void){

int codProduto, quantProduto;
float valor;

printf("Insira o seu pedido\n\nCodigo: \n");
scanf("%d", &codProduto);
printf("Quantidade: \n);
scanf("%d", &quantProduto);

do{

switch (codProduto){

case 100:
	valor=quantProduto*CACHQ;
	printf("O valor total da compra e R$ %.2f", valor);
	break;
case 101:
	valor=quantProduto*BAUSP;
	printf("O valor total da compra e R$ %.2f", valor);
	break;
case 102:
	valor=quantProduto*BAUCO;
	printf("O valor total da compra e R$ %.2f", valor);
	break;
case 103:
	valor=quantProduto*HAMBG;
	printf("O valor total da compra e R$ %.2f", valor);
	break;
case 104:
	valor=quantProduto*CHESB;
	printf("O valor total da compra e R$ %.2f", valor);
	break;
case 105:
	valor=quantProduto*REFRI;
	printf("O valor total da compra e R$ %.2f", valor);
	break;
default:
	printf("Insira um dos codigos indicados!\n");
	break;}
continue;
while (codProduto>=COD_CACHQ && codProduto<=COD_REFRI)}}
