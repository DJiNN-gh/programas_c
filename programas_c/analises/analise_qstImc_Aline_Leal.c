#include<stdio.h>

int main(){
   printf("**************************************************\n");
   printf("**************************************************\n");
   printf("***************  IMC INDELICADO   ****************\n");
   printf("**************************************************\n");
   printf("**************************************************\n");

   float p, a, aa, imc;
 	printf("peso:");	// Uma boa prática é utilizar \n ao final de um printf, a fim de de melhorar a compreensão da leitura pelo usuário. Tem uso apenas estético.
 	scanf("%f",&p);
	printf("insira seu peso:");	// O peso está sendo pedido duas vezes e sendo alocado na mesma variável, tornando desnecessário as duas segundas chamadas de printf/scanf.	
   	scanf("%f",&p);
   	printf("insira sua altura:");
   	scanf("%f",&a);
   
   aa=a*a;
   
   imc=p/aa; // Um aspecto importante da programação é a linearização de fórmulas. Procure sempre organizar uma equação de maneira linear, ou seja, em uma linha. Essa equação pode ser redefinida como imc=(p/(a*a)) ou apenas imc=p/(a*a)
   
   if(imc<18.5){
   	printf("magrinho demais,tem que comer mais meu filho");
   }
   else
   if(imc<25.5){
   	printf("isso ai, agora e so manter");
   }
   else
   if(imc<30){
   	printf("ta gordinho em bb, melhor fazer uma dietinha");
   }
   else
   if(imc<35){
   	printf("oxente vamos emagrecer urgente");
   }
   else {
   	printf("Misericordia, melhor fechar a boca antes que exploda");
   }
}

