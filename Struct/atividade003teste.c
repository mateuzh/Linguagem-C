#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct usuarios
{
    char user[10];
    char password[10];
};

int contador = 0;

int main()
{

    //funcao 1: cadastrar usuario e senha
    //funcao 2: verificar se usuario já existe
    //funcao 3: sair do programa

    int escolha = 0;
    struct usuarios login[10];
    int i;
    char verificador_usuario[10];
    int comparador = 0;
    int i2;
    while (1)
    {
        printf("Menu:\n1- Cadastro de usuario\n2- Consultar usuario\n3- Sair\nOpcao: ");
        scanf("%d", &escolha);
        if (escolha == 1 && contador < 10)
        {
            printf("-=- Cadastro de usuarios -=- \n");
            printf("Usuario: ");
            scanf("%s", &login[contador].user);
            printf("Senha: ");
            scanf("%s", &login[contador].password);
        }
        else if (escolha == 2)
        {
            for (i = 0; i < 10; i++)
            {
                
                printf("Usuario: ");
                scanf("%s", &verificador_usuario);
            
                for (i2 = 0; i2 < 10; i2++)
                {
                    comparador = strcmp(*login[i2].user, verificador_usuario);
                    if (comparador == 0)
                    {
                        printf("O usuario existe!\n");
                    }   
                }
            }
        }
        else if (escolha == 3)
        {
            break;
        }     
        
    }

    return 0;
}