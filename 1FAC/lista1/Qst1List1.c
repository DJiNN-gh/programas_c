/* QUESTÃO 01:
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do 
distribuidor e dos impostos (aplicados ao custo de fábrica). Desenvolver um algoritmo que 
calcule o custo ao consumidor de determinado carro.*/

#include <stdio.h>
#include <stdlib.h>

#DEFINE PCT 100

int main (void){

int pDist, pImposto;
float cFabrica, cConsumidor;

printf("Insira os valores de custo de fabrica, porcentagem do distribuidor e porcentagem de impostos\n");
scanf("%f %d %d", &cFabrica, &pDist, &pImposto);

(float)pDist/=PCT;
(float)pImposto/=PCT;

cConsumidor=cFabrica+(cFabrica*pDist)+(cFabrica*pImposto);

printf("O custo do carro ao consumidor e R$%f\n", cConsumidor);
return 0;
}
