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

    int i = 0;
    int quantidade = 1;
    int escolha = 0;
    struct dados_carro carro[quantidade];
    struct tipo_horario horarios[quantidade];
    struct preco_tempo tp[quantidade]; //Variavel para tempo e valor
    while (1)
    {
        i = quantidade - 1;
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("%d\n", i);
        printf("Digite a placa do carro: ");
        scanf("%s", &carro[i].placa);
        printf("Digite o modelo do carro: ");
        scanf("%s", &carro[i].modelo);
        printf("Horario da entrada: \n");
        printf("Hora: ");
        scanf("%d:%d", &horarios[i].horas_entrada, &horarios[i].minutos_entrada);
        printf("Horarios da saida: \n");
        printf("Horas: ");
        scanf("%d:%d", &horarios[i].horas_saida, &horarios[i].minutos_saida);

        tp[i].tempo = ((horarios[i].horas_saida * 60) + horarios[i].minutos_saida) - ((horarios[i].horas_entrada * 60) + horarios[i].minutos_entrada);
        
        if (tp[i].tempo >= 60)
        {
            tp[i].valor = (60 * 0.083333333) + ((tp[i].tempo-60) * 0.03333333);
        }
        else
        {
            tp[i].valor = tp[i].tempo *0.08333333;
        }

        printf("Placa: %s\n", carro[i].placa);
        printf("Modelo: %s\n", carro[i].modelo);
        printf("Tempo no estacionamento: %d\n", tp[i].tempo);
        printf("Valor: R$%f\n", tp[i].valor);
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
            quantidade++;
        }
        
    }
    return 0;
}
