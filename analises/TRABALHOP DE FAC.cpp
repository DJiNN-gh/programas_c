#include<stdio.h>
/* 32 sele��es (c�digos de 0 a 31) ser�o organizadas 							
em 8 grupos, cada qual com 4 times. Os dados 
dever�o ser armazenados em vetor(es) de modo 
que o primeiro grupo ser� representado pelas 
quatro primeiras posi��es, e assim por diante;  
 
ii. Nesta etapa inicial, cada time jogar� com os 
demais de seu grupo. Estar�o classificados para a 										//LARISSA: OS COMENTARIOS QUE NAO TIVEREM "LARISSA" NA FRENTE S�O COISAS DA MINHA CABE�A
a pr�xima fase (oitavas de final � que n�o dever� 
ser implementada neste trabalho) os dois com 
maior n�mero de pontos, considerando que cada 											
vit�ria atribuir� 3 pontos ao vencedor e o empate 
resultar� em 1 ponto para cada um dos times. No 
caso de empate na escolha desses dois 													vetor por rodada 1- {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 =, 27, 28, 29, 30, 31, 32
classificados, os crit�rios de desempate ser�o, 
nesta ordem: 																			CRIAR OUTRO VETOR PARA GUARDAR OS PONTOS
 																						SE O PRIMEIRO FOR MAIOR Q O SEGUNDO, EU GUARDO 3 PONTOS NA PRIMEIRA POSI��O DO VETOR_PONTOS E 0 NO SEGUNDO
 																						IF ELSE OS DOIS FOREM IGUAIS GUARDO 1 E 1
 																						ELSE GUARDO 0 E 3
a. Maior saldo de gols (goles convertidos � gols 
sofridos); b. Maior n�mero de gols convertidos; c. Menor n�mero de gols sofridos. 
 
Garante-se, nesta escolha, que nenhum empate 										
se manter� ap�s verificados os crit�rios de 
desempate apresentados. 
 
iii. A execu��o do programa deve ler os placares de 									
todos os jogos previstos para esta primeira etapa 
e, ao final, informar os dois times classificados de 
cada grupo. 
 
  */
  
#define SELECAO 7 //LARISSA: A ultima posi��o est� com um lixo de mem�ria em alguns numeros como 16 e 31 

#define CLASSIFICADOS 3 // duas de cada grupo de 4


//Declara��o das fun��es

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
	
		
		for(a=1;a<=3;a++)	//LARISSA: cada 'a' � uma rodada
		{
	
			//Preenchendo os vetores na primeira rodada 
			//LARISSA: primeira rodada vai ser o time 0 x time 1, time 2 x time 3, time 4 x time 5... assim at� 31. Botei pra exibir i+1 porque assim n�o fica "Time 0" e os times v�o at� 32, certinho. Iriam se n�o desse merda justamente com o 31.
			{
			if(a==1)
			{
			printf("Insira os resultados da %d rodada\n", a);
			for(i=0;i<SELECAO; i+=2)
				{
					printf("Selecao %d X Selecao %d\n", (i+1), (i+2)); //Ele n�o est� contando os gols tomados pela ultima sele��o
					scanf("%d%d", &gols[i], &gols[i+1]);
				}
			
			}
			
			else
			{
				if(a==2)
				{
				//Preenchendo os vetores na segunda rodada
				//LARISSA: Segunda rodada ser� time 0 x time 2, time 1 x 3, time 4 x 6, time 5 x 7... assim at� 31
				printf("Insira os resultados da %d rodada\n\n", a);			// Larissa: A partir daqui, quando est� executando, ele come�a a fazer uma confus�o, come�a a juntar o que n�o deve
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
					//LARISSA: Terceira rodada ser� time 0 x time 3, time 1 x time 2, time 4 x time 7, time 5 x time 6... assim vai at� 31
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
		//Quando terminar uma rodada, chama as fun��es para passar os numeros pra elas
		funcao_pontuacao (gols, SELECAO, pontos);
		funcao_gols_convertidos (gols, SELECAO, gols_convertidos);	
		funcao_gols_tomados(gols, SELECAO, gols_sofridos);
		funcao_saldo_de_gols(gols, SELECAO, gols_sofridos, saldo_de_gols, gols_convertidos);
		resultados(SELECAO, pontos, gols, saldo_de_gols, gols_sofridos, gols_convertidos); //LARISSA: Botei essas coisas todas pra exibir s� pra saber se tudo estava sendo lido direitinho. Acho q nao � necess�rio isso.
		printf("\n\n");
		}
//LARISSA: No final, chama a fun��o pra comparar elas e saber as classificadas, ou, deveria, se eu tivesse ideia de como montar :c	 
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

//CALCULAR A PONTUA��O DE CADA SELECAO

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
//LARISSA: Minha dificuldade ja come�a na hora de montar, n�o sei se o jeito q pensei est� certo, mas o que pensei foi: 
//Comparar a pontua��o de cada sele��o
/*void funcao_campeao (int pontuacao [], int selecao)
{									
	for(i=0;i<selecao;i+=4)	//Larissa: Aqui, esse for 'se concentra' nos quatro primeiros do vetor pontuacao, que ser�o o primeiro grupo.
	{
		
		for(j=i;j<i+4;j++)		//Larissa: Esse segundo for compara a pontua��o dos 4
		{
		primeirolugar=0;
		segundolugar=0;
			
			if(pontuacao[i]>primeirolugar)		//Larissa: Se a primeira pontua��o for maior que primeirolugar(zero), o primeiro lugar recebe essa pontua��o e o vetor campe�o recebe a primeira sela��o classificada. Ai, minhas duvidas come�am mais que tudo.
			{
				primeirolugar=pontuacao[i];
				campeao[j]=i;							
			}
												//LARISSA: Acho, que nao entra no else e roda de novo.
			else								//LARISSA: Rodando de novo, se ele n�o encontra um numero que entre no if ele passa pra esse else.
			{
				if(pontuacao[i]>segundolugar)	//LARISSA: Entrando aqui e guarda o segundo lugar e a pontua��o
				{
					segundolugar=pontuacao[i];
					campeao[j]=i;
					
				}
				
				else						//LARISSA: Rodando de novo, n�o entrando no primeiro if, entrando no primeiro else e n�o no if, ele entra aqui, nesse else. Se a pontua��o for igual ao segundolugar, eu chamo a fun��o pra desempatar.
				{
					if(pontuacao[i]==segundolugar)
					{
						// Chamar a fun��o saldo de gols, desisti aqui :<
					}
				}
				
			}							//LARISSA: Se a pontua��o n�o entrar em nada, a selecao n�o est� classificada
			
			
		}
	}
}	*/																									//Criar um vetor para juntar os campe�es do time

//Calcular os gols tomados para usar como m�todo de desempate
void funcao_gols_tomados (int gol[], int selecao, int gols_tomados[])
{
	int k, i, j;
	
	for(i=0, j=0; j<selecao ; i+=2, j+=2)
	{
			gols_tomados[j]+=gol[i+1];
			gols_tomados[j+1]+=gol[i];
			
	}	
}

//Calcular o saldo de gols como m�todo de desempate
void funcao_saldo_de_gols (int gol[], int selecao, int gols_tomados[], int saldo_de_gols[], int gols_convertidos[])	//nao nece�riamente ser�o esses parametros
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
