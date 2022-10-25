#include <stdio.h>
#include <stdlib.h>

int main(){
    int c, usuario, soma;
    soma = 0;
    printf("Gostaria de somar ate qual numero? ");
    scanf("%d", &usuario);
    while (usuario < 1)
    {
        printf("Numeros menores que 1 nao sao aceitos\nTente novamente: ");
        scanf("%d", &usuario);
    }
    for (c = 1; c <= usuario; c++)
    {
        soma = soma + c;  
    }
    printf("%d", soma);
    return 0;
}