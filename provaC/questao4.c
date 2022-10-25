#include <stdio.h>
#include <stdlib.h>

int main(){
    int opiniao, idade, c;
    float nota1, nota2, nota3, nota4, nota5, idade2, maior5, maior1;
    idade2 = 0;
    maior5 = 0;
    maior1 = 0;
    for (c = 0; c < 3; c++)
    {
        printf("Sua idade -> ");
        scanf("%d", &idade);
        printf("Opiniao -> Pode ser de 1 ate 5.\nSua opiniao -> ");
        scanf("%d", &opiniao);
        switch (opiniao)
        {
        case 1:
            nota1++;
            break;
        case 2:
            nota2++;
            idade2 = idade2 + idade;
            if (c == 0 || idade > maior1)
            {
                maior1 = idade;
            }
            break;
        case 3:
            nota3++;
            break;
        case 4:
            nota4++;
            break;
        case 5:
            nota5++;
            if (c == 0 || idade > maior5)
            {
                maior5 = idade;
            }
            break;
        default:
            break;
        }
    }
    printf("Opinoes = 1 -> %f\n", nota1);
    printf("Opinoes = 2 -> %f\n", nota2);
    printf("Opinoes = 3 -> %f\n", nota3);
    printf("Opinoes = 4 -> %f\n", nota4);
    printf("Opinoes = 5 -> %f\n", nota5);
    printf("A media de idade que respondeu a opiniao como sendo ruim(2) foi: %f\n", idade2/nota2);
    printf("A diferenca de idade entre a \nmaior idade que respondeu otimo e a maior idade que respondeu ruim foi: %f", maior5 - maior1);
    return;
}