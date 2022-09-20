#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao, calculo;
    //int num1, num2;
    while (opcao != 'S')
    {
        printf("Selecione sua opcao:\n");
        printf("S - Para sair. \n");
        printf("C - Para calcular\n");
        printf("Sua opcao: ");
        scanf("%c", &opcao);
        if (opcao == 'C')
        {
            printf("Deseja realizar qual operacao? \n");
            printf("Calcular: S \n");
            printf("Subtracao: M\n");
            printf("Multiplicar: X\n");
            printf("Divisao: D\n");
            printf("Sua opcao: ");
            scanf("%c", &calculo);
        }
        
    }
    
    return 0;
}