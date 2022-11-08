#include <stdio.h>
#include <stdlib.h>

typedef struct eletrodomesticos
    {
        char nome[50];
        char modelo[50];
        int garantia;
    } Eletrodomesticos;
    
    typedef struct pereciveis
    {
        char nome[50];
        char produtor[50];
        int validade;
    } Pereciveis;

int main()
{ 

    Eletrodomesticos Eletrodomesticos5[5];
    Pereciveis Pereciveis5[5];

    int c = 0;
    int i;

    printf("Gostaria de cadastrar quantos produtos pereciveis? ");
    scanf("%d", &c);
    for (i = 0 ; i < c; i++)
    {
    
        printf("%do produto\n", i+1);
        printf("Descricao: ");
        scanf("%s", &Pereciveis5[i].nome);
        printf("Produtor: ");
        scanf("%s", &Pereciveis5[i].produtor);
        printf("Validade: ");
        scanf("%d", &Pereciveis5[i].validade);
    
    }

    int c2 = 0;
    int i2;

    printf("Gostaria de cadastrar quantos Eletrodomesticos? ");
    scanf("%d", &c2);
    
    for (i2 = 0; i2 < c2; i2++)
    {

        printf("%do produto\n", i+1);
        printf("Descricao: ");
        scanf("%s", &Eletrodomesticos5[i].nome);
        printf("Modelo: ");
        scanf("%s", &Eletrodomesticos5[i].modelo);
        printf("Garantia: ");
        scanf("%d", &Eletrodomesticos5[i].garantia);

    }

    int i3;

    printf("Tabela de produtos pereciveis: \n");

    for (i3 = 0; i3 < c; i3++)
    {
        
        printf("Nome Produtor Validade\n");
        printf("%s ", Pereciveis5[i3].nome);
        printf("%s ", Pereciveis5[i3].produtor);
        printf("%d ", Pereciveis5[i3].validade);

    }
    
    

    return 0;
}