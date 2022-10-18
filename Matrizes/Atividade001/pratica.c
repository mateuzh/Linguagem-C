#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float notas[2][2];
    float media;
    int i, i2; //I == contador 1 // i2 == contador 2

    for (i = 0; i < 2; i++)
    {

        for (i2 = 0; i2 < 2; i2++)
        {

            printf("Digite o valor para a posicao [%d][%d] ", i, i2);
            scanf("%f", &notas[i][i2]);

        }
        
    }
    

    media = (notas[0][0] + notas[0][1] + notas[1][0] + notas[1][1]) / 4;
    
    printf("Media: %f", media);

    return 0;
}