#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void preencherPlacar(int saldoG[],int golsC[],int golsS[],int tam);
void pontos(int golsC[],int pontosTimes[],int tam);
void classificacao(int golsC[],int golsS[],int saldoG[],int pontosTimes[],int tam,int classificados[],int *k);
void desempateS(int golsC[],int golsS[],int saldoG[],int tam,int i,int valor,int classificados[],int*k);
void desempateC(int golsC[],int golsS[],int i,int valor,int *k,int classificados[]);
void desempateGS(int golsS[],int i,int valor,int *k,int classificados[]);
void exibir(int classificados[],int tam);
int main()
{
	srand(time(NULL));
	//botar na mesma linha
	//lendo e guardando o placar,golsC,golsS e o saldo
	int saldoG[32],golsC[32],golsS[32],times[32],classificados[16],pontosTimes[32];
	int i,k=0,valor,tam;
	for(i=0;i<32;i++)
	{
		times[i]=i;
	}
	preencherPlacar(saldoG,golsC,golsS,32);
	pontos(golsC,pontosTimes,32);
	classificacao(golsC,golsS,saldoG,pontosTimes,tam,classificados,&k);
	desempateS(golsC,golsS,saldoG,16,i,valor,classificados,&k);
	desempateC(golsC,golsS,i,valor,&k,classificados);
	desempateGS(golsS,i,valor,&k,classificados);
	exibir(classificados,1);
	
}
void preencherPlacar(int saldoG[],int golsC[],int golsS[],int tam)
{
	int i=0,j=1,k,l,placari,placarj;
	//6 partidas
	//50 mas nao sei quantos botar
	//declarados fora ve isso depois
		for(i=0;i<3;i++)
		{
			for(j=i+1;j<4;j++)
			{
			printf("Qual e o placar entre %d vs %d\n",i,j);
			scanf("%d%d",&placari,&placarj);
//			placari=rand()%10;
//			placarj=rand()%10;
			golsC[i]+=placari;
			golsC[j]+=placarj;
			golsS[j]+=placari;
			golsS[i]+=placarj;
			saldoG[i]+=placari;//ve se da pra fazer diferente(perfeito)
			saldoG[j]+=placarj;
			saldoG[j]-=placari;
			saldoG[i]-=placarj;
			}
		}

}
//tam seu merda
void pontos(int golsC[],int pontosTimes[],int tam)
{
int i=0,j=1;
    	for(i=0;i<3;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(golsC[i]==golsC[j])
				{
					pontosTimes[i]+=1;
					pontosTimes[j]+=1;
				}
				else
				{
					if(golsC[i]>golsC[j])
					{
						pontosTimes[i]+=3;
					}
					else
					{
						if(golsC[j]>golsC[i])
						{
							pontosTimes[j]+=3;
						}
					}
				}
			}
		}
}
void classificacao(int golsC[],int golsS[],int saldoG[],int pontosTimes[],int tam,int classificados[],int *k)
{
	int primeiro;int segundo=0;
    int i,j;
	//como ordenalos e pegar os iguais, tenho que comparar todos pra pegar os igauis, assim nao funcioma;(talvez eu tenha resolvido)
	
	for(i=0;i<3;i++)
	{
		if(pontosTimes[i]>pontosTimes[i+1])
		{
			primeiro=i;
			segundo=i+1;
		}
		else
		{
			if(pontosTimes[i+1]>pontosTimes[i])
			{
				primeiro=i+1;
				segundo=i;
			}
			else
			{
					desempateS(golsC,golsS,saldoG,16,i,primeiro,classificados,&k);	
			}		
		}
		for(j=2;j<4;j++)
		{
			if(pontosTimes[j]>pontosTimes[segundo])
			{
				segundo=j;
				if(pontosTimes[j]>pontosTimes[primeiro])
				{
					segundo=primeiro;
					primeiro=j;				
				}
				else
				{
					if(pontosTimes[j]==pontosTimes[primeiro])
					{
						desempateS(golsC,golsS,saldoG,16,i,primeiro,classificados,&k);
					}
				}
			}
		}
	}

//	printf("%d\n",primeiro);
//  j é zero?
//	for(j=2;j<4;j++)
//	{
//		if(j!=primeiro)
//		{
//			if(pontosTimes[j]>pontosTimes[segundo])
//			{
//				segundo=j;
//			}
//			else 
//			{
//				if(pontosTimes[j]==pontosTimes[segundo])
//				{
//					desempateS(golsC,golsS,saldoG,16,j,segundo,classificados,&k);
//				}
//			}
//		}
//	}
////	printf("%d",segundo);
}
void desempateS(int golsC[],int golsS[],int saldoG[],int tam,int i,int valor,int classificados[],int *k)
{

	if(saldoG[i]>saldoG[valor])
	{
		classificados[*k]=i;	
	}
	else
	{
		if(saldoG[i]<saldoG[valor])
		{
			classificados[*k]=valor;
		}
		else
		{
			if(saldoG[i]==saldoG[valor])
			{
				desempateC(golsC,golsS,i,valor,&k,classificados);
			}
		}
	}
	*k++;
}
void desempateC(int golsC[],int golsS[],int i,int valor,int *k,int classificados[])
{
	if(golsC[i]>golsC[valor])
	{
		classificados[*k]=i;
	}
	else
	{
		if(golsC[i]<golsC[valor])
		{
			classificados[*k]=valor;
		}
		else
		{
			if(golsC[i]==golsC[valor])
			{
				desempateGS(golsS,i,valor,&k,classificados);
			}
		}
	}
	*k++;
}
void desempateGS(int golsS[],int i,int valor,int *k,int classificados[])
{
	if(golsS[i]<golsS[valor])
	{
		classificados[*k]=i;
	}
	else
	{
		if(golsS[i]>golsS[valor])
		{
			classificados[*k]=valor;
		}
	}
	*k++;
}
void exibir(int classificados[],int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("%d",classificados[i]);
	}
	
}

