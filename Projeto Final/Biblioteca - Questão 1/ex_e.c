#include <stdio.h>

int inverte_texto(char texto)
{
    scanf("%c", &texto);

    if (texto != '\n')
    {
        inverte_texto(texto);
        printf("%c", texto);
    }
}

int main()
{
    char texto;

    printf("Escreva um texto: ");
    fgets(texto, 100, stdin);

    inverte_texto(texto);
}
