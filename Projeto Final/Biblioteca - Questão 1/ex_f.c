#include <stdio.h>
#define MAX 100

int procurar(int v[], int n, int k)
{
    if (n ==0)
        return -1;

    else
    {
        if (v[n] == k)
            return n;

        else
            return procurar(v, n - 1, k);
    }
}

void main()
{
    int v[MAX], resultado, procu, i, tam;

    printf("Digite o tamanho do vetor que deseja verificar: ");
    scanf("%d", &tam);

    for (i=0; i < tam; i++)
    {
        printf("Insira o valor para a posicao [%d]: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Qual numero deseja procurar: ");
    scanf("%d", &procu);

    resultado = procurar(v, tam, procu);

    if (resultado == -1)
        printf("\nNao encontrado");

    else
        printf("Encontrou na posicao %d", resultado+1);
}
