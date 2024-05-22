#include <stdio.h>

int main()
{
    int valor, count=1;

    printf("Digite um valor para saber se a raiz quadrada dele e exata: ");
    scanf("%d", &valor);
    printf("\nSe o valor der 0 no final a raiz e exata");
    printf("\nraiz quadrada de: %d", valor);
    
    while(valor >= 0)
    {
        if (valor == count)
            break;

        printf("\n%d - ", valor);
        valor = valor - count;
        printf("%d", count);
        
        if (count != valor)
            count = count + 2;
    }

    if (count == valor)
        printf("\n%d - %d = 0, raiz exata", valor, count);

    else
        printf("\n%d != 0, raiz nao exata", valor);
}