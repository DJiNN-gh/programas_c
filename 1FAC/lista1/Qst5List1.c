/* QUESTÃO 05:
Escrever um algoritmo que, dada uma quantia em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que o valor pode ser decomposto.*/

#include <stdio.h>
#include <stdlib.h>

#define CEM 100
#define CINQ 50
#define VINTE 20
#define DEZ 10
#define CINCO 5
#define DOIS 2

int main (void){

int valor, resto, nCem, nCinq, nVinte, nDez, nCinco, nDois, moedas;

printf("Insira o valor em R$: \n");
scanf("%d", &valor);

resto=valor;

nCem=resto/CEM;
resto=valor%CEM;
nCinq=resto/CINQ;
resto=resto%CINQ;
nVinte=resto/VINTE;
resto=resto%VINTE;
nDez=resto/DEZ;
resto=resto%DEZ;
nCinco=resto/CINCO;
resto=resto%CINCO;
nDois=resto/DOIS;
resto=resto%DOIS;
moedas=resto;

printf("Numero de cedulas/moedas:\nCem\t- %d\nCinquenta\t- %d\nVinte\t- %d\nDez\t- %d\nCinco\t- %d\nDois\t- %d\nMoedas\t- %d",nCem, nCinq, nVinte, nDez, nCinco, nDois, moedas);

return 0;
}
