#include <stdio.h>
#include <string.h>
#include "recursividade.h"

// QUESTAO A
int dividir(int x, int y)
{

    int soma = 0;

    if (x < 0)
    {
        return -1;
    }

    if (x == 0)
    {
        return 0;
    }

    else
    {
        return 1 + dividir(x - y, y);
    }
}

// QUESTAO B
int calc(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * calc(base, exp - 1);
}

// QUESTAO C
int Fibonacci(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

// QUESTAO D
int impar(int x)
{

    if (x == 1)
    {
        printf("1");
        return 0;
    }
    if (x == 0)
    {
        printf("Nao existe nenhum valor impar neste intervalo");
    }
    else
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x);
        }
        return impar(x - 1);
    }
}

// QUESTAO E
int inverter(char palavra[],int tam)
{
	int i = 0;
	if (tam == 0)
	{
		printf("%c", palavra[tam]);
		return 1;
	}
	else 
	{
		printf("%c", palavra[tam]);
		return inverter(palavra, tam-1);
	}
}	

// QUESTAO F
int procurar(int v[], int n, int k)
{
    if (n == 0)
        return -1;

    else
    {
        if (v[n] == k)
            return n;

        else
            return procurar(v, n - 1, k);
    }
}