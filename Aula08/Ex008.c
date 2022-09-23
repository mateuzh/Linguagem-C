//Código 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opiniao, idade, c, maior1; //Opiniao== Nota do cliente, c == contador, maior1 == Maior idade que respondeu com nota1
    float nota1, nota2, nota3, nota4, nota5, media5, idade5; //Notas enumeradas == Notas dos clientes
    // media5 == Media de idade que respondeu com nota 5
    idade5 = 0;
    maior1 = 0;
    for (c = 1; c <= 5; c++)
    {
        printf("Pesquisa %d\n", c);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua opiniao de 1 ate 5: \n");
        scanf("%d", &opiniao);
        switch (opiniao)
        {
        case 1:
            nota1++;
            if (c == 1 || idade > maior1)
            {
                maior1 = idade;
            }
            break;
        case 2:
            nota2++;
            break;
        case 3:
            nota3++;
            break;
        case 4:
            nota4++;
            break;
        case 5:
            nota5++;
            media5++;
            idade5 = idade + idade5;
            break;
        default:
            break;
        }
    }
    printf("Nota 1: %f\n", (nota1/5)*100);
    printf("Nota 2: %f\n", (nota2/5)*100);
    printf("Nota 3: %f\n", (nota3/5)*100);
    printf("Nota 4: %f\n", (nota4/5)*100);
    printf("Nota 5: %f\n", (nota5/5)*100);
    printf("A media de idade das pessoas que respondeu com nota 5 foi: %f\n", idade5/media5);
    printf("A maior idade que respondeu com nota 1 foi: %d\n", maior1);
    return 0;
}