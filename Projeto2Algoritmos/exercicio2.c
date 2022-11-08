#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int main(){

    char palavras[10][50] = {"uma", "serie,","valores","aleatorios,","outro","valor","aleatorio","e","mais","um"};

    int i2;
    int n_aleatorio;
    srand(time(NULL));

    for (i2 = 0; i2 < 10; i2++)    
    {
        n_aleatorio = rand()%10;
        printf("%s\n", palavras[n_aleatorio]);
        sleep(3);
        system("cls");
        
    }
    
    return 0;
}