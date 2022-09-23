#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, c;
    for (c = 5; c <= 500; c++)
    {
        if (c % 2 == 0)
        {
            soma = soma + c;
        }
    }
    printf("Soma foi: %d", soma);
    return 0;
}