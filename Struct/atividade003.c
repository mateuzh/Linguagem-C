#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct usuarios
{
    char user[10];
    char password[10];
};

int contador = 0;



int main(){

    //funcao 1: cadastrar usuario e senha
    //funcao 2: verificar se usuario já existe
    //funcao 3: sair do programa
    int validar = 0;
    int escolha = 0;
    struct usuarios login[10];

    int i;
    char validacao_usuario[10];
    char validacao_senha[10];
    int validar_login = 0;

    while (1)
    {
        printf("Menu:\n1- Cadastro de usuario\n2- Consultar usuario\n3- Sair\nOpcao: ");
        scanf("%d", &escolha);
        if (escolha == 1 && contador < 10) //Cadastrar 
        {
            printf("-=- Cadastro de usuario-=-\n");
            printf("Usuario: ");
            scanf("%s", &validacao_usuario);
            validar = cadastrar(&login, &validacao_usuario);
            if (validar == 0)
            {
                printf("Esse usuario ja existe!");
            }
            else
            {
                printf("Usuario ainda nao utilizado! Voce pode cadastrar!\nUsuario: ");
                scanf("%s", &login[0].user);
            }
            
            printf("Senha: ");
            scanf("%s", &login[0].password);
            
            
        }
        else if (escolha == 2)// validar usuario
        {
            printf("Usuario: ");
            scanf("%s", &validacao_usuario);
            printf("Senha: ");
            scanf("%s", &validacao_senha);
            for (i = 0; i < 10; i++)
            {
                validar_login = consultar(validacao_usuario, validacao_senha, login[i]);
            }
            
        }
        else if (escolha == 3) // Sair do programa
        {
            for (i = 0; i < 10; i++)
            {
                printf("%d -> %s\n", i, login[i].user);
            }
            
            break;
        }     
        
    }

    return 0;
}

int cadastrar(struct usuarios *log, char *usuario_local[10]){
     
    int i, validar;
    int comparador;
    
    for (i = 0; i < 10; i++)
    {
        comparador = strcmp(usuario_local, *log[i].user);
        
        if (comparador == 0)
        {
            validar = 0;
            break;
        }
        else
        {
            validar = 1;
        }
    }
    
    return validar;
    
}

int consultar(char validacao_usuario[10], char validacao_senha[10], struct usuarios comp){
    int comparador, comparador2, validador;
    
    comparador = strcmp(validacao_usuario, comp.user);
    comparador2 = strcmp(validacao_senha, comp.password);
     
    if (comparador == 0 && comparador2 == 0)
    {
        printf("Usuario validado!\n");
    }
    return comparador;
}
