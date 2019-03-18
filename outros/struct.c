#include <stdio.h>
#include <stdlib.h>

#define VAL1 10
#define VAL2 128
struct st{
	int num[VAL1];
	char id[VAL1];};

struct ficha{
	unsigned int inscricao[VAL1];
	char tag[VAL1];};
	//*char nome[VAL1];};

int main (void){
	
	int i, j;

	struct st s;
	struct st t;

	s.num[0]=2019010001;
	s.id[0]='A';

	t.num[0]=2019010002;
	t.id[0]='B';


	printf("Numero: %d\nId: %c\n", s.num[0], s.id[0]);
	printf("Numero: %d\nId: %c\n", t.num[0], t.id[0]);

	struct ficha a;

	for(i=2019010001, j=0;j<VAL1;i++, j++){

		a.inscricao[j]=i;
		printf("%u\t", a.inscricao[j]);}

	i=0;

	/* while(i < VAL1){

		scanf("%s", a.nome[i]);
		i++;} */


return 0;}
