#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade1, idade2, idade3, idade4, idade5, resposta1, resposta2, resposta3, resposta4, resposta5;
    int porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5;
    printf("Digite sua idade: ");
    scanf("%d", &idade1);
    printf("Nos avalie (1 até 5): ");
    scanf("%d", &resposta1);
    if (resposta1 == 1)
    {
        porcentagem1 = 1;
    }
    printf("Digite sua idade: ");
    scanf("%d", &idade2);
    printf("Nos avalie (1 até 5): ");
    scanf("%d", &resposta2);
    if (resposta2 == 1)
    {
        porcentagem1 = porcentagem1 + 1;
    }
    
    printf("Digite sua idade: ");
    scanf("%d", &idade3);
    printf("Nos avalie (1 até 5): ");
    scanf("%d", &resposta3);
    if (resposta3 == 1)
    {
        porcentagem1 = porcentagem1 + 1;
    }
    printf("Digite sua idade: ");
    scanf("%d", &idade4);
    printf("Nos avalie (1 até 5): ");
    scanf("%d", &resposta4);
    if (resposta4 == 1)
    {
        porcentagem1 = porcentagem1 + 1;
    }
    printf("Digite sua idade: ");
    scanf("%d", &idade5);
    printf("Nos avalie (1 até 5): ");
    scanf("%d", &resposta5);
    if (resposta5 == 1)
    {
        porcentagem1 = porcentagem1 + 1;
    }
    printf("A quantidade de Notas1: %d", porcentagem1);
    return 0;
}