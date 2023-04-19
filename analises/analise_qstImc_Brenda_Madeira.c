#include <stdio.h>
 int main ()
 {
 	//declaracao de variaveis
 	float p,a,imc;	// Atenção ao uso de float na chamada, pois a formatação padrão para o tipo float é int.frac (ex.: 1.60, 1.50). A separação é feita com ponto e não com vírgula.
 	
 	//corpo do programa
 	printf("peso:");	// Uma boa prática é utilizar \n ao final de um printf, a fim de de melhorar a compreensão da leitura pelo usuário. Tem uso apenas estético
 	scanf("%f",&p);	
 	printf("altura:");
 	scanf("%f",&a);
 	
 	//calculando imc
 	imc = p/(a*a);
 	
 	if (imc < 18.5)
 	{printf("abaixo do peso");
 		}
 	else
 	{
 	if (imc < 25)
 	{printf("peso ideal");
 		}
 	else
 	{
 		if (imc < 30)
 	{printf("sobre peso");
 		}
 	else
 	{
 		if (imc < 35)
 	{printf("obesidade grau 1");
 		}
 	else
 	{
 		if (imc < 40)
 	{printf("obesidade grau 2");
 		}
 	else
 	{printf("obesidade grau 3");
 		}
 	   }
      }
 	 }	
    }
   }

/* Sugestão de identação e parentisação
 *
 * 	if(imc < 18.5){
 * 		printf("Abaixo do peso\n");
 * 	}
 * 	else
 * 		if(imc < 25){
 * 			printf("Peso ideal\n");
 * 		}
 * 	else
 *		if(imc < 30){
 *			printf("Sobrepeso\n");
 *		}
 *	else
 *		if(imc < 35){
 *			printf("Obesidade grau 1\n");
 *		}
 *	else
 *		if(imc < 40){
 *			printf("Obesidade grau 2\n");
 *		}
 *	// O uso de {CHAVES} serve para delimitar um bloco de código. Caso haja apenas uma linha após o operador ou função, não é necessário o emprego das chaves, porém é uma boa prática, visto que melhora na clareza do código.
 *	else
 *		printf("Obesidade grau 3\n");
 */
