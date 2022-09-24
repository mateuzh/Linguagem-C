#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim, i;
    printf("Digite o inicio: ");
    scanf("%d", &inicio);
    printf("Digite o fim: ");
    scanf("%d", &fim);
    for ( i = inicio; i < fim+1; i++)
    {
        printf(" %d", i);
    }
    
    return 0;
}