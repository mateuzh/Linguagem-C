#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite o numero para verificar se ele e par ou impar! \nNumero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        printf("O numero digitado e par!");
    }
    else if (numero % 2 == 1)
    {
        printf("O numero digitado e impar!");
    }
    

    return 0;
}