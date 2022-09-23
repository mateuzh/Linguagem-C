#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim;
    printf("Digite o inicio: \n");
    scanf("%d", &inicio);
    printf("Digite o fim: \n");
    scanf("%d", &fim);
    for (int i = inicio ; i < fim+1; i++)
    {
        printf("%d ", i);
    }
    return 0;
}