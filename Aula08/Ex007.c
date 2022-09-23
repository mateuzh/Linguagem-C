#include <stdio.h>
#include <stdlib.h>

int main()
{
    int denominador, contador;
    float S=0;
    float resultado;

    for (contador = 0; contador < 51; contador++)
    {
        if (contador % 2 == 0)
        {
            S=S+(1/(denominador*denominador*denominador));
        }
        else
        {
            S=S-(1/(denominador*denominador*denominador));
        }
        denominador=denominador+2;
    }
    resultado=cbrt(S*32);
    printf("O resultado é: %f", resultado);
    return 0;
}