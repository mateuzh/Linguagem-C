//Programa para armazenar dados de um estacionamento

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct dados_carro
    {
        char modelo[20];
        char placa[8];
    };

struct tipo_horario
{
    int horas_saida, horas_entrada, minutos_saida, minutos_entrada;
};

struct preco_tempo
{
    int tempo;
    float valor;
};

int main(){

    int escolha = 0;
    struct dados_carro carro;
    struct tipo_horario horarios;
    struct preco_tempo tp; //Variavel para tempo e valor
    while (1)
    {
        
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Digite a placa do carro: ");
        scanf("%s", &carro.placa);
        printf("Digite o modelo do carro: ");
        scanf("%s", &carro.modelo);
        printf("Horario da entrada: \n");
        printf("Hora: ");
        scanf("%d:%d", &horarios.horas_entrada, &horarios.minutos_entrada);
        printf("Horarios da saida: \n");
        printf("Horas: ");
        scanf("%d:%d", &horarios.horas_saida, &horarios.minutos_saida);

        tp.tempo = ((horarios.horas_saida * 60) + horarios.minutos_saida) - ((horarios.horas_entrada * 60) + horarios.minutos_entrada);
        
        if (tp.tempo >= 60)
        {
            tp.valor = (60 * 0.083333333) + ((tp.tempo-60) * 0.03333333);
        }
        else
        {
            tp.valor = tp.tempo *0.08333333;
        }

        printf("Placa: %s\n", carro.placa);
        printf("Modelo: %s\n", carro.modelo);
        printf("Tempo no estacionamento: %d\n", tp.tempo);
        printf("Valor: R$%f\n", tp.valor);
        printf("Cadastrar mais carros?\n");
        printf("1- Sim \n");
        printf("2- Nao \n");
        printf("->");
        scanf("%d", &escolha);
        
        if (escolha == 2)
        {
            
            printf("Finalizando");
            Sleep(405);
            printf(".");
            Sleep(405);
            printf(".");
            Sleep(405);
            printf(".");
            Sleep(405);
            system("cls");
            break;
        
        }
        else 
        {
            system("cls");
        }
        
    }
    return 0;
}
