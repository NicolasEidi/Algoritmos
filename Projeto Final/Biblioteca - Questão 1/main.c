#include <stdio.h>
#include <string.h>
#include "recursividade.h"
#define MAX 50

int main()
{
    int dividendo, divisor;     // a
    int base, exp;              //b
    int n, i=0, c;              //c
    int res;                    //d
    char palavra[MAX];          //e
    int tam;
    int v[MAX], resultado, procu, p, tamanho; //f
    
    int opc = 0;

    while(opc != 7)
    {
        printf("\nEscolha a questao\n1 - Questao a)\n2 - Questao b)\n3 - Questao c)\n4 - Questao d)\n5 - Questao e)\n6 - Questao f)\n7 - Sair\nSua escolha: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            printf("\nPrograma para realizar divisao\n");

            do
            {
                printf("Insira o dividendo : ");
                scanf("%d", &dividendo);
            } while (dividendo < 0);

            do
            {
                printf("Insira o divisor : ");
                scanf("%d", &divisor);
            } while (divisor <= 0);

            if (dividir(dividendo, divisor) >= 0)
            {
                printf("Resultado: %d", dividir(dividendo, divisor));
            }

            if (dividir(dividendo, divisor) < 0)
            {
                printf("Nao divide");
            }

            break;

        case 2:
            printf("\nPrograma para calcular numeros elevados\n");

            printf("Digite o valor para base: ");
            scanf("%d", &base);

            printf("Digite o valor para expoente: ");
            scanf("%d", &exp);

            printf("%d elevado a %d = %d\n", base, exp, calc(base, exp));
            break;

        case 3:
            printf("\nPrograma para calcular sequencia de Fibonacci\n");

            printf("Valores a serem mostrados da sequencia de Fibonacci: ");
            scanf("%d",&n);

            printf("Fibonacci\n");

            for (c=1; c<=n; c++)
            {
                printf("%d\n", Fibonacci(i));
                i++; 
            }
            break;

        case 4:
            printf("\nPrograma que mostra valores impares\n");

            do
            {
                printf("Insira seu valor:\n");
                scanf("%d", &res);
            }while(res<0);
            impar(res);
            
            break;

        case 5:
            printf("\nPrograma para inverter texto\n");
            
            printf("insira sua frase: ");
            scanf("%s", palavra);

            tam = strlen(palavra);
            inverter(palavra, tam);
            
            break;

        case 6: 

            printf("\nPrograma para achar elementos em um dado vetor\n");

            printf("Digite o tamanho do vetor que deseja verificar: ");
            scanf("%d", &tamanho);

            for (p=0; p < tamanho; p++)
            {
                printf("Insira o valor para a posicao [%d]: ", p + 1);
                scanf("%d", &v[p]);
            }

            printf("Qual numero deseja procurar: ");
            scanf("%d", &procu);

            resultado = procurar(v, tamanho, procu);

            if (resultado == -1)
                printf("\nNao encontrado");

            else
                printf("Encontrou na posicao %d", resultado+1);

            break;
        
        }
        
    }
}
