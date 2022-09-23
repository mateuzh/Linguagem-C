#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;
    float n1, n2, soma, sub, produto, divisao;
    while(escolha != 999)
    {
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        printf("O que voce quer fazer?\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n999 - Sair\nSua escolha: ");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            soma = n1 + n2;
            printf("Voce escolheu somar.\nA soma entre eles foi: %f\n", soma);
        }
        else if (escolha == 2)
        {
            sub = n1 - n2;
            printf("Voce escolheu subtrair\nA subtracao entre eles foi: %f\n", sub);
        }  
        else if (escolha == 3)
        {
            produto = n1 * n2;
            printf("Voce escolheu multiplicar\nO produto entre eles foi: %f\n", produto);
        }  
        else if (escolha == 4)
        {
            divisao = n1 / n2;
            printf("Voce escolheu multiplicar!\nA mutiplicacao entre eles foi: %f\n", divisao);
        }
        else if (escolha == 999)
        {
            printf("Volte sempre!\n");
            break;
        }
    }
    return;
}