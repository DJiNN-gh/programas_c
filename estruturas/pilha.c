#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no* prox;
} Tno;

int stack (Tno **adress, int element);
int unstack (Tno **adress, int element);
Tno* top (Tno adress);

int main (void){


return 0;}

int stack (Tno **adress, int element){


}

int unstack (Tno **adress, int element){

	Tno *aux;

	aux=**adress;
	**adress=aux->prox;
	
}

Tno* top (Tno adress){


}
