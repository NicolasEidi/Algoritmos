/*
	Programa na qual se tem a entrada a ordem de uma matriz,
	e essa matriz é formada usando o principio do triangulo de Pascal.
*/

#include <stdio.h>
#define MAX 100


void Matriz_Base(int matriz[MAX][MAX], int ordem)
{
	int linha, coluna;

	//Cria uma matriz toda zerada
	for(linha=0; linha < ordem; linha++)
		for(coluna=0; coluna < ordem; coluna++)
			matriz[linha][coluna] = 0;

	//Dados base da matriz
	printf("\nMatriz sem transformacao: \n");
	for(linha=0; linha < ordem; linha++)
	{
		for(coluna=0; coluna < ordem; coluna++)
		{
			printf("%d ", matriz[linha][coluna]);
			
		}
		printf("\n");
	}
}


void Matriz_Col_Diag(int matriz[MAX][MAX], int ordem)
{
	//Transformação da primeira coluna e a ultima em 1 
	printf("\nTransformando as colunas da Matriz... \n");

	int linha, coluna;

	for(linha=0; linha < ordem; linha++)
	{
		for(coluna=0; coluna < ordem; coluna++)
		{
			if((coluna == 0) || (coluna == ordem - 1))
				matriz[linha][coluna] = 1;
		}
	}

	//Diagonal principal transformada em 1
	printf("\nTransformando a diagonal principal da Matriz... \n");

	for(linha=0; linha < ordem; linha++)
	{
		for(coluna=0; coluna < ordem; coluna++)
		{
			if(linha == coluna)
				matriz[linha][coluna] = 1;
		}
	}

	printf("\nMatriz transformada\n");
	for(linha=0; linha < ordem; linha++)
	{
		for(coluna=0; coluna < ordem; coluna++)
		{
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n");
}

void Matriz_TriangInferior(int matriz[MAX][MAX], int ordem)
{
	//Transformacao do triangulo inferior
	printf("\nTransformacao do triangulo inferior\n");

	int linha, coluna;

	for(linha=0; linha < ordem; linha++)
	{
		for(coluna=0; coluna < ordem; coluna++)
		{
			if (coluna == linha)
				break;
			if((linha > 1) && (coluna > 0) && (coluna < ordem - 1))
				matriz[linha][coluna] = matriz[linha-1][coluna] + matriz[linha-1][coluna-1];
		}
	}

	for(linha=0; linha < ordem; linha++)
	{
		for(coluna=0; coluna < ordem; coluna++)
		{
			printf("%3d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n");
}

void Matriz_TriangSuperior(int matriz[MAX][MAX], int ordem)
{
	//Transformacao do triangulo superior
	printf("\nTransformacao do triangulo superior\n");

	int linha, coluna;

	for(linha=ordem-2; linha >= 0; linha--)
	{
		for(coluna=ordem-1; coluna >= 0; coluna--)
		{
			if (coluna == linha)
				break;
			if((linha < ordem) && (coluna > 0) && (coluna < ordem))
				matriz[linha][coluna] = matriz[linha+1][coluna] + matriz[linha+1][coluna+1];
		}
	}

	for(linha=0; linha < ordem; linha++)
	{
		for(coluna=0; coluna < ordem; coluna++)
		{
			printf("%3d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int ordem, matriz[MAX][MAX]; 

	//Obtendo valores da matriz
	do{
		printf("\nInforme o tamanho da ordem da matriz: ");
		scanf("%d", &ordem);
	}while(ordem <= 0);

	Matriz_Base(matriz, ordem);
	Matriz_Col_Diag(matriz, ordem);
	Matriz_TriangInferior(matriz, ordem);
	Matriz_TriangSuperior(matriz, ordem);
}