/*
	Programa na qual se tem a entrada de vendas por semanas durante um ano,
	a saida sera uma tabela com as vendas, total de vendas por mes,
	total vendido por semana somando todos os meses,
	o total vendido no ano, a semana 1 de todos os meses equivale em quanto de
	porcentagem relação as vendas totais do ano.
*/

#include <stdio.h>

int Porcentagem(int matriz[12][4]);
int MaiorMenor(int matriz[12][4]);

int main()
{
	int matriz[12][4], i, j, total=0, total_1=0, total_2=0, total_3=0, total_4=0, valor=0;

	//leitura da matriz com os dados
	for(i=0; i < 12; i++)
	{
		for(j=0; j < 4; j++)
		{
			//matriz[i][j] = w;
			//w++;
			printf("Informe valor do mes %d semana %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	//matriz com dados dos meses por semana
	printf("\nTodos os dados das vendas:\n");
	for(i=0; i < 12; i++)
	{
		for(j=0; j < 4; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}


	//total vendido em cada mes do ano
	printf("\nTotal de vendas por mes:\n");
	for(i=0; i < 12; i++)
	{
		for(j=0; j < 4; j++)
		{
			valor = matriz[i][j];
			total = total + valor; 
		}
		printf("Mes %d teve o total de %d vendas", i+1, total);
		valor = 0;
		total = 0;
		printf("\n");
	}

	//Total vendido por semana no decorrer do ano
	printf("\nTotal vendido por semana somando todos os meses:\n");
	for(i=0; i < 12; i++)
	{
		for(j=0; j < 4; j++)
		{
			if (j == 0)
			{
				valor = matriz[i][j];
				total_1 = total_1 + valor;
			}

			if (j == 1)
			{
				valor = matriz[i][j];
				total_2 = total_2 + valor;
			}

			if (j == 2)
			{
				valor = matriz[i][j];
				total_3 = total_3 + valor;
			}

			if (j == 3)
			{
				valor = matriz[i][j];
				total_4 = total_4 + valor;
			}

		}
		valor = 0;
		total = 0;
	}
	printf("A semana 1 teve o total de %d vendas", total_1);
	printf("\nA semana 2 teve o total de %d vendas", total_2);
	printf("\nA semana 3 teve o total de %d vendas", total_3);
	printf("\nA semana 4 teve o total de %d vendas\n", total_4);

	//total vendido por ano

	for(i=0; i < 12; i++)
	{
		for(j=0; j < 4; j++)
		{
			valor = matriz[i][j];
			total = total + valor;
		}
	}
	printf("\nO total vendido no ano foi de %d\n", total);

	Porcentagem(matriz);
	MaiorMenor(matriz);
}

//Porcentagem do ano
int Porcentagem(int matriz[12][4])
{
	int i, j, total_semana=0, soma_ano=0, valor=0, total=0;

	for(i=0; i < 12; i++)
	{
		for(j=0; j < 4; j++)
		{
			if (j == 0)
			{
				valor = matriz[i][j];
				total_semana = total_semana + valor;
			}
			valor = matriz[i][j];
			soma_ano = soma_ano + valor;
		}
		valor = 0;
	}
	//calcular o percentual
	//soma do ano igual 100%
	//total da semana é a diferença

	total_semana = total_semana * 100;
	total = total_semana / soma_ano;
	printf("\nA semana 1 de todos os meses equivale a %d porcento do ano\n", total);
}

//Calculo do maior e menor elemento
int MaiorMenor(int matriz[12][4])
{
	int i, j, maior_semana=0, maior=0, aux=0, mes=0;

	for(i=0; i < 12; i++)
	{
		for(j=0; j < 4; j++)
		{
			if ((i == 0) && (j == 0))
				maior_semana = matriz[i][j];

			else
				if (matriz[i][j] > maior_semana)
				{
					maior_semana = matriz[i][j];
					aux = j;
					mes = i; 
				}	
		}
	}

	printf("\nA maior venda sendo de %d\n", maior_semana);

}

