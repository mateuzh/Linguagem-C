#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>


int main(){
    struct tm *hora_inicio;
    time_t segundos;
    int minuto_limite = 0, segundo_limite = 0, hora_limite = 0;
    int numero_aleatorio = 0, acertos = 0, erros = 0;
    char usuario [25];
    char palavras[20][25] = {"ABACAXI", "MANGA", "KIWI",
                            "MORANGO","MAMAO","MIMOSA","LARANJA",
                            "GARRAFA","CORITIBA","MAIOR", "DO", "PARANA",
                            "O", "ESCRIVANINHA", "NOTEBOOK", "CADERNO",
                            "FACULDADE", "PROJETO", "ALGORITMOS", "C"};
    int i;

    time(&segundos);
    hora_inicio = localtime(&segundos);
    hora_limite = hora_inicio->tm_hour;
    minuto_limite = hora_inicio->tm_min + 1;
    segundo_limite = hora_inicio->tm_sec;
    srand(time(NULL));
    printf("Horario de inicio: %d:%d:%d\n", hora_inicio->tm_hour,hora_inicio->tm_min, hora_inicio->tm_sec);
    while (1)
    {

        time(&segundos);
        hora_inicio = localtime(&segundos);
        printf("Horario de inicio: %d:%d:%d\n", hora_inicio->tm_hour,hora_inicio->tm_min, hora_inicio->tm_sec);
        printf("Hora final: %d:%d:%d\n", hora_limite, minuto_limite, segundo_limite);
        printf("Acertos: %d\n", acertos);
        printf("Erros: %d\n", erros);
        numero_aleatorio = rand()%19;
        printf(" <<<%s>>> \n", palavras[numero_aleatorio]);
        printf("Escreva a palavra acima: ");
        scanf("%s", &usuario);
        if (strcmp(usuario, palavras[numero_aleatorio]) == 0)
        {
            
            acertos++;
            
        }
        else
        {
            erros++;
        }
        if (hora_inicio->tm_min >= minuto_limite)
        {
            if (hora_inicio->tm_sec >= segundo_limite)
            {
                break;
            }
            
        }
        
        system("cls");
        
    }
    
    printf("Quantidade de acertos: %d\n", acertos);
    printf("Quantidade de erros: %d\n", erros);
    return 0;
}