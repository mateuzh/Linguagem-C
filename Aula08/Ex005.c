#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i, fatorial, soma;
    printf("Digite um valor para calcular seu fatorial: ");
    scanf("%d", &valor);
    i = 0;
    fatorial = 0;
    for (i = valor; i != 0; i--)
    {
        if (i == valor)
        {
            fatorial = i * (i-1);
        }
        else if (i != 1)
        {
            fatorial = fatorial * (i-1);
        }
    }
    printf("O fatorial do valor %d", valor);
    printf(" foi: %d", fatorial);
    return 0;
}