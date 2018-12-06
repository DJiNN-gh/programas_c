/* QUESTÃO 04: Desenvolva um algoritmo que calcule o consumo de combustível de um automóvel 
em determinada viagem. Para isso, devem ser obtidos: 

i) o percurso (em quilômetros) da viagem;
ii) o número de quilômetros que o carro percorre com um litro de combustível (km/l);
iii) o preço do litro do combustível.

Ao final, o algoritmo deve determinar:

• A quantidade de combustível, em litros, consumida durante a viagem; 
• O custo total de combustível. */

#include <stdio.h>
#include <stdlib.h>

int main (void){

float distancia,autonomia, pCombustivel, vConsumo, cTotal;

printf("Insira as seguintes informacoes acerca do da viagem:\t-A distancia percorrida (em Km)\nA autonomia do veiculo\nO valor do combustivel (por litro)\n");
scanf("%f %f %f", &distancia, &autonomia, &pCombustivel);

vConsumo=distancia/autonomia;
cTotal=vConsumo*pCombustivel;

printf("O combustivel consumido foi: %.2fL\nO custo total do combustivel utilizado foi: R$ %.2f\n", vConsumo, cTotal);
}
