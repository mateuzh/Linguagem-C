//Programa para armazenar dados de um estacionamento

#include <stdio.h>
#include <stdlib.h>

struct dados_carro
    {
        char modelo[20];
        char placa[8];
    };

struct tipo_horario
{
    int horas_saida, horas_entrada, minutos_saida, minutos_entrada;
    int horario_entrada, horario_saida;
};

struct preco_tempo
{
    int tempo;
    float valor;
};

int main(){

    struct dados_carro carro;
    struct tipo_horario horarios;
    struct preco_tempo tp; //Variavel para tempo e valor
    char entrada[6], saida[6];


    printf("Digite o horario de entrada: ");
    scanf("%s", &entrada);
    printf("Digite o horario da saida: ");
    scanf("%s", &saida);
    printf("%s\n", entrada);
    printf("%s\n", saida);
    printf("Digite a placa do carro: ");
    scanf("%s", &carro.placa);
    printf("Digite o modelo do carro: ");
    scanf("%s", &carro.modelo);
    printf("Horario da entrada: \n");
    printf("Hora: ");
    scanf("%d", &horarios.horas_entrada);
    printf("Minuto: ");
    scanf("%d", &horarios.minutos_entrada);
    printf("Horarios da saida: \n");
    printf("Horas: ");
    scanf("%d", &horarios.horas_saida);
    printf("Minutos: ");
    scanf("%d", &horarios.minutos_saida);

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
    printf("Valor: R$%f", tp.valor);


    return 0;
}
