#include <stdio.h>

int x=10; // Global

void funcao_A ();
void funcao_B ();

int main (void){

	int x; // Local

	for(x=1;x<=3;x++){
		funcao_B ();}}

void funcao_A (){

	x++;
	printf("x=%d\n", x);}

void funcao_B (){

	int x=0;

	funcao_A ();

	printf("x=%d\n", x);}
