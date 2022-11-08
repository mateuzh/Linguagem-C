#include <stdio.h>
#include <stdlib.h>


struct cadastro 
    {
        char nome[100];
        int idade;
        float notas[3];
        float media;
    };


int main(){

    int i, i2;

    struct cadastro aluno;

    for (i = 0; i < 4; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", &aluno.nome);

        printf("Digite a idade do aluno: ");
        scanf("%d", &aluno.idade);

        for (i2 = 0; i2 < 3; i2++)
        {
            printf("Digite a %do nota: ", i2+1);
            scanf("%f", &aluno.notas[i2]);
        }

        aluno.media = (aluno.notas[0] + aluno.notas[1] + aluno.notas[2])/3;
        
        printf("Nome: %s\n", aluno.nome);
        printf("Idade: %d\n", aluno.idade);
        printf("Media: %f\n", aluno.media);

        if (aluno.media >= 6)
        {    
            printf("Situacao: APROVADO\n");
        }
        else
        {
            printf("Situacao: REPROVADO\n");
        }
         
    }
    
    return 0;
}