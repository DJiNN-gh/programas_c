#include <stdio.h>

int main (void){
	
	char c;
	unsigned char unsg_c;

	printf("O tamanho de C (char) em bytes e: %zu\t em bits e : %zu\n", sizeof c, sizeof c*8);

	c = 10;
	c = 0xa;
	c = '\n';

	printf("Valor de C: %d\n", c);

	printf("O tamanho de C (unsigned char) em bytes e: %zu\t em bits e: %zu\n", sizeof unsg_c, sizeof unsg_c*8);

	unsg_c = 255;
	unsg_c = 0xFF;
//	unsg_c = '\0';

	printf("Valor de C: %d\n", unsg_c);

	return 0;}
