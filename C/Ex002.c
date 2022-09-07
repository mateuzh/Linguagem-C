#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Salario1, Salario2, Salario3, maior, menor, media;
    printf("Digite o primeiro salario: \n");
    scanf("%f", &Salario1);
    maior = Salario1;
    menor = Salario1;
    printf("Digite o segundo salario: \n");
    scanf("%f", &Salario2);
    if (Salario2 > maior){
        maior = Salario2;
    }
    if (Salario2 < menor){
        menor = Salario2;
    }
    printf("Digite o terceiro salario: \n");
    scanf("%f", &Salario3);
    if (Salario3 > maior){
        maior = Salario3;
    }
    if (Salario3 < menor){
        menor = Salario3;
    }
    media = (Salario1 + Salario2 + Salario3)/3;
    printf("O maior salario informado foi: %f\n", maior);
    printf("O menor salario informado foi: %f\n", menor);
    printf("A media salarial foi de: %f", media);
    return 0;
}