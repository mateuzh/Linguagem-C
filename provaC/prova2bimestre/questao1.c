#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[4][4] = {1, -1, 3, 5, 5, 1, -4, 6, 0, 2, 3, 1, 2, 1, 6, 4};
    int i, i2;
    for (i = 0; i < 4; i++)
    {
        for (i2 = 0; i2 < 4; i2++)
        {
            printf(" %d ", matriz[i][i2]);
        }
        printf("\n");
    }
    
    return 0;
}