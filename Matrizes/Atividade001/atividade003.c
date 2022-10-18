#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float matrizA[5][5];
    float matrizB[5][5];
    int c, c2, i, i2, co, co2, b, b2;
    
    ;

    for (c = 0; c < 5; c++)
    {
        for (c2 = 0; c2 < 5; c2++)
        {
            matrizA[c][c2] = c2;
        }
    }

    for (co = 0; co < 5; co++)
    {
        for (co2 = 0; co2 < 5; co2++)
        {
            if (co == co2)
            {
                matrizB[co][co2] = matrizA[co][co2]*3;
            }
            else
            {
                matrizB[co][co2] = matrizA[co][co2]*2;
            }
            
        }
        
    }
    
    printf("Matriz A:\n");
    for (i = 0; i < 5; i++)
    {
        for (i2 = 0; i2 < 5; i2++)
        {
            if (i2 == 4)
            {
                printf("[%f] \n", matrizA[i][i2]);
            }
            else
            {
                printf("[%f] ", matrizA[i][i2]);
            }
            
        }   
    }
    printf("Matriz B:\n");
    for (b = 0; b < 5; b++)
    {
        for (b2 = 0; b2 < 5; b2++)
        {
            if (b2 == 4)
            {
                printf("[%f]\n", matrizB[b][b2]);
            }
            else
            {
                printf("[%f] ", matrizB[b][b2]);
            }
            
            
        }
        
    }
    
    
    return 0;
}