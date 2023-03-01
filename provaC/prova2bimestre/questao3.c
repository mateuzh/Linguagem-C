#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct CadastroProdutos
{
    char nome[100];
    int classificacao;
    float preco;
};

int main(){
    int usuario, i, qtdProdutosCad = 0, i3; 
    struct CadastroProdutos produtos[25];
    float somaPreco = 0, media = 0;

    while (1)
    {        
        printf("Menu - Mercadinho\n"
        "1 - Cadastro de produtos\n"
        "2 - Media dos precos\n"
        "3 - Listar os produtos cadastrados\n"
        "0 - Sair\n");
        scanf("%d", &usuario);
        if (usuario == 1)
        {
            qtdProdutosCad = CadProdutos(&produtos, qtdProdutosCad, &somaPreco);
            printf("A quantidade total de produtos cadastrados foi: %d\n", qtdProdutosCad);
            printf("A soma dos produtos foi: %f\n", somaPreco);
        }
        else if (usuario == 2)
        {   
            mediaPrecos(qtdProdutosCad, &somaPreco);
        }
        else if (usuario == 3)
        {
            for (i3 = 0; i3 < qtdProdutosCad; i3++)
            {
                listarProdutos(&produtos[i3], qtdProdutosCad);
            } 
        }
        else if (usuario == 0)
        {
            break;
        }
    }
    return 0;
}

int CadProdutos(struct CadastroProdutos *produtos, int qtdProdutosCad, float *somaPreco){
    int usuario;
    
    while (qtdProdutosCad < 25)
    {
        printf("Digite o nome do produto: ");
        scanf("%s", &produtos[qtdProdutosCad].nome);
        printf("0 - Perecivel\n"
                "1- Nao perecivel\n"
                "Resposta: ");
        scanf("%d", &produtos[qtdProdutosCad].classificacao);
        Sleep(1);
        printf("Preco: R$");
        scanf("%f", &produtos[qtdProdutosCad].preco);
        Sleep(1);
        *somaPreco = *somaPreco + produtos[qtdProdutosCad].preco;
        qtdProdutosCad++;
        printf("Cadastrar mais produtos?\n"
               "1 - Sim\n"
               "0 - Nao\n"
               "Resposta: ");
        scanf("%d", &usuario);
        Sleep(1);
        if (usuario == 0)
        {
            break;
        }
    }
    return qtdProdutosCad;
}

void mediaPrecos(int qtdeProdutosCadastrados, float *somaPreco){
    float media = 0;
    media = *somaPreco / qtdeProdutosCadastrados;
    printf("A media de preco dos produtos cadastrados foi: %f\n", media);
}

void listarProdutos(struct CadastroProdutos *produtos, int qtdeProdutos){
    printf("Produto: %s\n", produtos->nome);
    printf("Classificacao: ");
    if (produtos->classificacao == 0)
    {
        printf("Nao perecivel\n");
    }
    else{
        printf("Perecivel\n");
    }
    printf("Preco: %f\n", produtos->preco);
    printf("----------------------------------\n");
}