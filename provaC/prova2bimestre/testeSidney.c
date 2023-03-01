#include <stdio.h>
#include <stdlib.h>

/* Cadastrar Produtos em uma struct,  Listar produtos e ver a média dos valores. ter menu , e passar por parametro alguma função */

	struct produto
	{
		char nome[30];
		char classificacao[15];
		float preco;
	};
	
float mediaValores(float preco, int quantidade);

int main(int argc, char *argv[]) {
	int opcao;
	int count;
	float media = 0;
	int contador_produtos = 0;
	struct produto p[5];
	float total_preco = 0;
	while(1)
	{
		printf("Menu:\n1 - Cadastrar Produtos\n2 - Media dos precos\n3 - Listar todos os produtos\n4 - Sair do Menu\n");
		scanf("%i", &opcao);
	
			if(opcao == 1)
				{	
				
				cadastro(&p, &contador_produtos);
				
					
				}
			
			if(opcao == 2)
				{
					mediaValores(total_preco, contador_produtos);
															
					
				
				}
			if (opcao == 3)
			{	
				int count2;
				for(count2 = 1; count2 <= contador_produtos; count2++)
				{
					printf("%s  ", p[count2].nome);
					printf("%s  ", p[count2].classificacao);
					printf("%f\n", p[count2].preco);
	
				}
				
			}
		 
		if(opcao == 4)
		{
			printf("Finalizado");
            break;
		}
	}
		return 0;
	
}

	
float mediaValores(float preco, int quantidade)
{
	float m;
	m = preco/ quantidade;
	printf("A media foi de: %f", m);
	
}

void cadastro(struct produto *p, int *cont_produtos)
{
	int i;
    float total_preco = 0;
    int usuario;
	
	while (1)
    {
            
        printf("Nome do Produto:\n");
        scanf("%s", *p[*cont_produtos].nome);
        
        printf("Classificacao:\n");
        scanf("%s", *p[*cont_produtos].classificacao);
        
        printf("Preco do Produto:\n");
        scanf("%f", *p[*cont_produtos].preco);
        cont_produtos++;
        printf("%d\n", cont_produtos);

        total_preco += *p[*cont_produtos].preco;	

        printf("")
    }

}