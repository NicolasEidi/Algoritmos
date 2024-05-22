#include <stdio.h>

int calc(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * calc(base, exp - 1);
}

int main()
{
    int base, exp;

    printf("Digite o valor para X e para N: ");
    scanf("%d%d", &base, &exp);

    printf(" %d elevado a %d = %d\n", base, exp, calc(base, exp));
}