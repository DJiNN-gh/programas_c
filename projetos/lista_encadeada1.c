#include <stdio.h>
#include <stdlib.h>

typedef struct node{

	int quantum;
	char id;
	int tempo;
	struct node *next;
}tNode;

typedef tNode *tList;

int leitor (char *path_c, tList *H);

int main (void){


return 0;
}

// Função que que lê um arquivo e armazena seu conteúdo em uma estrutura
int leitor (char *path_c, tList *H){
	
	FILE *fp;

	fp=fopen(path_c, "r");

	if (!fp){

		return 0;
	}

	fscanf(fp, "%d", H->quantum);

	while (!feof(fp)){

		fscanf(fp, "%c", &id);

		if (id == 

				
	}
}
