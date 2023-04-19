#include <stdio.h>

int main (void){
	
	char c;
	unsigned char unsg_c;
	unsigned int unsg_i;

	printf("O tamanho de C (char) em bytes e: %zu\n Em bits e : %zu\n", sizeof c, sizeof c*8);

	c = 10;
	c = 0xa;
	c = '\n';

	printf("Valor de C: %d\n", c);

	printf("O tamanho de C (unsigned char) em bytes e: %zu\t em bits e: %zu\n", sizeof unsg_c, sizeof unsg_c*8);

	unsg_c = 255;
	unsg_c = 0xFF;
//	unsg_c = '\0';

	printf("Valor de C: %d\n", unsg_c);

	printf("\t--Tabela ASCII--\n");

	for (unsg_i=0;unsg_i<256;unsg_i++){

		printf("Valor: %d\tCaracter: %c\n", unsg_i, unsg_i);}

	c = 'A';

	printf("%c\n", c);
	
	c++;

	printf("%c\n", c);

return 0;}
