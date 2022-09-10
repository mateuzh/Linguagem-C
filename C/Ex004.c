#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade1, idade2, idade3, idade4, idade5, resposta1, resposta2, resposta3, resposta4, resposta5;
    float nota1, nota2, nota3, nota4, nota5, porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5;
    float media, media5;
    int quantidade5, maior;
    printf("Digite sua idade: ");
    scanf("%d", &idade1);
    printf("Nos avalie (1 ate 5): ");
    scanf("%d", &resposta1);
    switch (resposta1)
    {
    case 1:
        nota1 = 1;
        nota2 = 0;
        nota3 = 0;
        nota4 = 0;
        nota5 = 0;
        maior = idade1;
        break;
    case 2:
        nota2 = 1;
        nota1 = 0;
        nota3 = 0;
        nota4 = 0;
        nota5 = 0;
        break;
    case 3:
        nota3 = 1;
        nota2 = 0;
        nota1 = 0;
        nota4 = 0;
        nota5 = 0;
        break;
    case 4:
        nota4 = 1;
        nota2 = 0;
        nota3 = 0;
        nota1 = 0;
        nota5 = 0;
        break;
    case 5:
        nota5 = 1;
        nota2 = 0;
        nota3 = 0;
        nota4 = 0;
        nota1 = 0;
        quantidade5 = 1;
        media = idade1;
        break;
    default:
        break;
    }
    printf("Digite sua idade: ");
    scanf("%d", &idade2);
    printf("Nos avalie (1 ate 5): ");
    scanf("%d", &resposta2);
    switch (resposta2)
    {
    case 1:
        nota1 = nota1 + 1;
        break;
    case 2:
        nota2 = nota2 + 1;
        break;
    case 3:
        nota3 = nota3 + 1;
        break;
    case 4:
        nota4 = nota4 + 1;
        break;
    case 5:
        nota5 = nota5 + 1;
        quantidade5 = quantidade5 +1;
        media = media + idade2;
        if (idade2 > maior){
            maior = idade2;
        }
        break;
    default:
        break;
    }
    printf("Digite sua idade: ");
    scanf("%d", &idade3);
    printf("Nos avalie (1 ate 5): ");
    scanf("%d", &resposta3);
    switch (resposta3)
    {
    case 1:
        nota1 = nota1 + 1;
        break;
    case 2:
        nota2 = nota2 + 1;
        break;
    case 3:
        nota3 = nota3 + 1;
        break;
    case 4:
        nota4 = nota4 + 1;
        break;
    case 5:
        nota5 = nota5 + 1;
        quantidade5 = quantidade5 +1;
        media = media + idade3;
        if (idade3 > maior){
            maior = idade3;
        }
        break;
    default:
        break;
    }
    printf("Digite sua idade: ");
    scanf("%d", &idade4);
    printf("Nos avalie (1 ate 5): ");
    scanf("%d", &resposta4);
    switch (resposta4)
    {
    case 1:
        nota1 = nota1 + 1;
        break;
    case 2:
        nota2 = nota2 + 1;
        break;
    case 3:
        nota3 = nota3 + 1;
        break;
    case 4:
        nota4 = nota4 + 1;
        break;
    case 5:
        nota5 = nota5 + 1;
        quantidade5 = quantidade5 +1;
        media = media + idade4;
        if (idade4 > maior){
            maior = idade4;
        }
        break;
    default:
        break;
    }
    printf("Digite sua idade: ");
    scanf("%d", &idade5);
    printf("Nos avalie (1 ate 5): ");
    scanf("%d", &resposta5);
    switch (resposta5)
    {
    case 1:
        nota1 = nota1 + 1;
        break;
    case 2:
        nota2 = nota2 + 1;
        break;
    case 3:
        nota3 = nota3 + 1;
        break;
    case 4:
        nota4 = nota4 + 1;
        break;
    case 5:
        media = media + idade5;
        quantidade5 = quantidade5 +1;
        nota5 = nota5 + 1;
        if (idade5 > maior){
            maior = idade5;
        }
        break;
    default:
        break;
    }
    media5 = media/quantidade5;
    porcentagem1 = (nota1/5)*100;
    porcentagem2 = (nota2/5)*100;
    porcentagem3 = (nota3/5)*100;
    porcentagem4 = (nota4/5)*100;
    porcentagem5 = (nota5/5)*100;
    printf("A porcentagem de avaliacoes com 1 estrela: %f\n", porcentagem1);
    printf("A porcentagem de avaliacoes com 2 estrela: %f\n", porcentagem2);
    printf("A porcentagem de avaliacoes com 3 estrela: %f\n", porcentagem3);
    printf("A porcentagem de avaliacoes com 4 estrela: %f\n", porcentagem4);
    printf("A porcentagem de avaliacoes com 5 estrela: %f\n", porcentagem5);
    printf("A media de idade de pessoas que avaliaram com 5 estrelas foi de: %f\n", media5);
    printf("A maior idade que deu 1 estrela na avaliação foi: %d\n", maior);
    return 0;
}