#include<stdio.h>
/* 32 seleções (códigos de 0 a 31) serão organizadas 							
em 8 grupos, cada qual com 4 times. Os dados 
deverão ser armazenados em vetor(es) de modo 
que o primeiro grupo será representado pelas 
quatro primeiras posições, e assim por diante;  
 
ii. Nesta etapa inicial, cada time jogará com os 
demais de seu grupo. Estarão classificados para a 										//LARISSA: OS COMENTARIOS QUE NAO TIVEREM "LARISSA" NA FRENTE SÃO COISAS DA MINHA CABEÇA
a próxima fase (oitavas de final – que não deverá 
ser implementada neste trabalho) os dois com 
maior número de pontos, considerando que cada 											
vitória atribuirá 3 pontos ao vencedor e o empate 
resultará em 1 ponto para cada um dos times. No 
caso de empate na escolha desses dois 													vetor por rodada 1- {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 =, 27, 28, 29, 30, 31, 32
classificados, os critérios de desempate serão, 
nesta ordem: 																			CRIAR OUTRO VETOR PARA GUARDAR OS PONTOS
 																						SE O PRIMEIRO FOR MAIOR Q O SEGUNDO, EU GUARDO 3 PONTOS NA PRIMEIRA POSIÇÃO DO VETOR_PONTOS E 0 NO SEGUNDO
 																						IF ELSE OS DOIS FOREM IGUAIS GUARDO 1 E 1
 																						ELSE GUARDO 0 E 3
a. Maior saldo de gols (goles convertidos – gols 
sofridos); b. Maior número de gols convertidos; c. Menor número de gols sofridos. 
 
Garante-se, nesta escolha, que nenhum empate 										
se manterá após verificados os critérios de 
desempate apresentados. 
 
iii. A execução do programa deve ler os placares de 									
todos os jogos previstos para esta primeira etapa 
e, ao final, informar os dois times classificados de 
cada grupo. 
 
  */
  
#define SELECAO 7 //LARISSA: A ultima posição está com um lixo de memória em alguns numeros como 16 e 31 

#define CLASSIFICADOS 3 // duas de cada grupo de 4


//Declaração das funções

void funcao_pontuacao (int gols[], int selecao, int pontuacao[]);
void funcao_gols_tomados (int gol [], int selecao, int gols_tomados[]);
void funcao_saldo_de_gols (int gol[], int selecao, int gols_tomados[], int saldo_de_gols[], int gols_convertidos[]);
void funcao_gols_convertidos (int gols[], int selecao, int gols_convertidos[]);
void resultados(int selecao, int pontos[], int gols[], int saldo_de_gols[], int gols_sofridos[], int gols_convertidos[]);
void funcao_campeao (int pontuacao [], int selecao);

int main ()
{
	int i, j, k, a=1;
	int gols[SELECAO]={0}, pontos[SELECAO]={0};
	int gols_sofridos[SELECAO]={0}, saldo_de_gols[SELECAO]={0}, gols_convertidos[SELECAO]={0};
	
		
		for(a=1;a<=3;a++)	//LARISSA: cada 'a' é uma rodada
		{
	
			//Preenchendo os vetores na primeira rodada 
			//LARISSA: primeira rodada vai ser o time 0 x time 1, time 2 x time 3, time 4 x time 5... assim até 31. Botei pra exibir i+1 porque assim não fica "Time 0" e os times vão até 32, certinho. Iriam se não desse merda justamente com o 31.
			{
			if(a==1)
			{
			printf("Insira os resultados da %d rodada\n", a);
			for(i=0;i<SELECAO; i+=2)
				{
					printf("Selecao %d X Selecao %d\n", (i+1), (i+2)); //Ele não está contando os gols tomados pela ultima seleção
					scanf("%d%d", &gols[i], &gols[i+1]);
				}
			
			}
			
			else
			{
				if(a==2)
				{
				//Preenchendo os vetores na segunda rodada
				//LARISSA: Segunda rodada será time 0 x time 2, time 1 x 3, time 4 x 6, time 5 x 7... assim até 31
				printf("Insira os resultados da %d rodada\n\n", a);			// Larissa: A partir daqui, quando está executando, ele começa a fazer uma confusão, começa a juntar o que não deve
				for(j=0;j<SELECAO; j+=4)
				{
					printf("Selecao %d X Selecao %d\n", (j+1), (j+3));
					scanf("%d%d", &gols[j], &gols[j+2]);
					printf("Selecao %d X Selecao %d\n", (j+2), (j+4));
					scanf("%d%d", &gols[j+1], &gols[j+3]);
				}
			  }
			
				else
				{
					if(a==3)
					{
					
					//Preenchendo os vetores na terceira rodada
					//LARISSA: Terceira rodada será time 0 x time 3, time 1 x time 2, time 4 x time 7, time 5 x time 6... assim vai até 31
					printf("Insira os resultados da %d rodada\n\n", a);
					for(k=0;k<SELECAO; k+=4)
					{
						printf("Selecao %d X Selecao %d\n", (k+1), (k+4));
						scanf("%d%d", &gols[k], &gols[k+3]);
						printf("Selecao %d X Selecao %d\n", (k+2), (k+3));
						scanf("%d%d", &gols[k+1], &gols[k+2]);
					}
					}
				}
			}
		}
		//Quando terminar uma rodada, chama as funções para passar os numeros pra elas
		funcao_pontuacao (gols, SELECAO, pontos);
		funcao_gols_convertidos (gols, SELECAO, gols_convertidos);	
		funcao_gols_tomados(gols, SELECAO, gols_sofridos);
		funcao_saldo_de_gols(gols, SELECAO, gols_sofridos, saldo_de_gols, gols_convertidos);
		resultados(SELECAO, pontos, gols, saldo_de_gols, gols_sofridos, gols_convertidos); //LARISSA: Botei essas coisas todas pra exibir só pra saber se tudo estava sendo lido direitinho. Acho q nao é necessário isso.
		printf("\n\n");
		}
//LARISSA: No final, chama a função pra comparar elas e saber as classificadas, ou, deveria, se eu tivesse ideia de como montar :c	 
//funcao_campeao (pontos, SELECAO);
}

void funcao_gols_convertidos (int gols[], int selecao, int gols_convertidos[])	
{
	int i;
	for(i=0;i<selecao;i++)
	{
		gols_convertidos[i]+=gols[i];
	}
}

//CALCULAR A PONTUAÇÃO DE CADA SELECAO

void funcao_pontuacao (int gol[], int selecao, int pontuacao[])
{
	int i;
	
	for(i=0; i<selecao; i+=2)
	{
		
		{
		
		if(gol[i+1]<gol[i])
		{
			pontuacao[i]+=3;		
		}			
				if(gol[i+1]==gol[i])
				{
					pontuacao[i]+=1;
					pontuacao[i+1]+=1;
					
				}
								
					if(gol[i+1]>gol[i])
					{
					pontuacao[i+1]+=3;
					}
		}
	}
	
}
//LARISSA: Minha dificuldade ja começa na hora de montar, não sei se o jeito q pensei está certo, mas o que pensei foi: 
//Comparar a pontuação de cada seleção
/*void funcao_campeao (int pontuacao [], int selecao)
{									
	for(i=0;i<selecao;i+=4)	//Larissa: Aqui, esse for 'se concentra' nos quatro primeiros do vetor pontuacao, que serão o primeiro grupo.
	{
		
		for(j=i;j<i+4;j++)		//Larissa: Esse segundo for compara a pontuação dos 4
		{
		primeirolugar=0;
		segundolugar=0;
			
			if(pontuacao[i]>primeirolugar)		//Larissa: Se a primeira pontuação for maior que primeirolugar(zero), o primeiro lugar recebe essa pontuação e o vetor campeão recebe a primeira selação classificada. Ai, minhas duvidas começam mais que tudo.
			{
				primeirolugar=pontuacao[i];
				campeao[j]=i;							
			}
												//LARISSA: Acho, que nao entra no else e roda de novo.
			else								//LARISSA: Rodando de novo, se ele não encontra um numero que entre no if ele passa pra esse else.
			{
				if(pontuacao[i]>segundolugar)	//LARISSA: Entrando aqui e guarda o segundo lugar e a pontuação
				{
					segundolugar=pontuacao[i];
					campeao[j]=i;
					
				}
				
				else						//LARISSA: Rodando de novo, não entrando no primeiro if, entrando no primeiro else e não no if, ele entra aqui, nesse else. Se a pontuação for igual ao segundolugar, eu chamo a função pra desempatar.
				{
					if(pontuacao[i]==segundolugar)
					{
						// Chamar a função saldo de gols, desisti aqui :<
					}
				}
				
			}							//LARISSA: Se a pontuação não entrar em nada, a selecao não está classificada
			
			
		}
	}
}	*/																									//Criar um vetor para juntar os campeões do time

//Calcular os gols tomados para usar como método de desempate
void funcao_gols_tomados (int gol[], int selecao, int gols_tomados[])
{
	int k, i, j;
	
	for(i=0, j=0; j<selecao ; i+=2, j+=2)
	{
			gols_tomados[j]+=gol[i+1];
			gols_tomados[j+1]+=gol[i];
			
	}	
}

//Calcular o saldo de gols como método de desempate
void funcao_saldo_de_gols (int gol[], int selecao, int gols_tomados[], int saldo_de_gols[], int gols_convertidos[])	//nao neceáriamente serão esses parametros
{
	int i;
	
	for(i=0;i<selecao;i++)
	{
		saldo_de_gols[i]=((gols_convertidos[i])-(gols_tomados[i]));
	}
	
	
}

void resultados(int selecao, int pontos[], int gols[], int saldo_de_gols[], int gols_sofridos[], int gols_convertidos[])
{
	int i, a, x=0;
			
			
			for(i=0;i<=selecao;i++)
			{
			printf("\nSelecao %d possui:\nPontuacao: %d \nGols convertidos %d \nSaldo de Gols %d \nGols Tomados %d\n", i+1, pontos[i], gols_convertidos[i], saldo_de_gols[i], gols_sofridos[i]);
			}
}
