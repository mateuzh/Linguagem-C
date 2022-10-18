#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float matriz[5][4];
    float maior, menor;
    int c, c2, i, i2;
    maior = 0;
    menor = 0; 

    for (c = 0; c < 5; c++)
    {
        for (c2 = 0; c2 < 4; c2++)
        {
        
            printf("Digite o valor para a posicao [%d][%d]", c, c2);
            scanf("%f", &matriz[c][c2]);
            
        }
        
    }
    
    for (i = 0; i < 5; i++)
    {
        for (i2 = 0; i2 < 4; i2++)
        {
            if ((i == 0) && (i2 == 0))
            {
                maior = matriz[i][i2];
                menor = matriz[i][i2];
            } 
            else           
            {
                if (matriz[i][i2] > maior)
                {
                    maior = matriz[i][i2];
                }
                if (matriz[i][i2] < menor)
                {
                    menor = matriz[i][i2];
                }
            }
        
        }
    }

    printf("O maior valor digitado foi: %f\n", maior);
    printf("O menor valor digitado foi: %f", menor);

    return 0;
}