//Codigo para calcular o fatorial digitado pelo usuário

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i, fatorial;
    printf("Digite um valor para calcular seu fatorial: ");
    scanf("%d", &valor);
    i = 0;
    fatorial = 0;
    for (i = valor; i != 0; i--)
    {
        if (i == valor) //Se for o primeiro laço
        {
            fatorial = i * (i-1);
        }
        else if (i != 1) //Para não calcular o valor do produto de 0
        {
            fatorial = fatorial * (i-1);//Fatorial recebe fatorial vezes um número abaixo do contador
        }
    }
    printf("O fatorial do valor %d", valor);
    printf(" foi: %d", fatorial);
    return 0;
}