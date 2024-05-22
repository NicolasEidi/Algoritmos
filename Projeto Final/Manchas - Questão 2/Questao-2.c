//Nicolas Eidi Nunes Macedo
//Paulo Henrique Medeiros
//Luiz Felipe Fuzeto

/*
	Programa tem entrada uma matriz, a matriz sera a representação 
	da pele de um paciente que foi no dermatologista,
	na qual tera areas com manchas em sua pele, as manchas seram representadas pelo numero 1,
	ou as areas sem manchas representadas pelo numero 0,
	o programa ira fazer uma busca usando recursividade,
	assim tendo o total de manchas que o paciente contem na pele.
*/

#include <stdio.h>
#define MAX 500 

int Matriz(int Lin, int Col, int M[][MAX]);
int Calculo_de_Manchas(int M[][MAX], int Lin, int Col, int i, int j);
int Contagem_Manchas(int Lin, int Col, int M[][MAX]);

int main()
{
	int Lin, Col, Manch, M[MAX][MAX];
	
	do{
		printf("Digite quantas linhas a matriz tera: ");
		scanf("%i", &Lin);

		printf("E quantas colunas: ");
		scanf("%i", &Col);

	}while((Lin < 0) || (Col < 0));

	
	Matriz(Lin, Col, M);
	Manch = Contagem_Manchas(Lin, Col, M);
	
	if (Manch == 1)
		printf("\nExiste %i mancha\n", Manch);

	else 
		printf("\nExistem %i manchas\n", Manch);

	
}

int Matriz(int Lin, int Col, int M[][MAX])
{
	int i, j;

	printf("\nDigite a Matriz com as manchas (1 para mancha, 0 para sem mancha)\n");

	for(i = 0; i < Lin; i++)
	{
		for(j = 0; j < Col; j++)
		{
			do
			{
				printf("Qual numero vai na posicao [%i][%i]: \n", i, j);
				scanf("%i", &M[i][j]);
			}while((M[i][j] != 0) && (M[i][j] != 1));
		}
	}
	
	for(i = 0; i < Lin; i++)
	{
		for(j = 0; j < Col; j++)
		{
			printf("%i ", M[i][j]);
		}
		printf("\n");
	}
}

int Contagem_Manchas(int Lin, int Col, int M[][MAX])
{
	int Manch, i, j;
	
	Manch = 0;
	
	for(i = 0; i < Lin; i++)
	{
		for(j = 0; j < Col; j++)
		{
			if(M[i][j] == 1)
			{
				Calculo_de_Manchas(M, Lin, Col, i, j);
				Manch = Manch + 1;
			}
		}
	}
	
	return Manch;
}

int Calculo_de_Manchas(int M[][MAX], int Lin, int Col, int i, int j)
{
	
	if(M[i][j] != 1 || i>=Lin || j>=Col)
		return 0;

	M[i][j] = 2;

	if(Calculo_de_Manchas(M, Lin, Col, i+1, j))
		return 1;

	if(Calculo_de_Manchas(M, Lin, Col, i, j+1))
		return 1;

	if(Calculo_de_Manchas(M, Lin, Col, i, j-1))
		return 1;
	
	if(Calculo_de_Manchas(M, Lin, Col, i-1, j))
		return 1;
}
