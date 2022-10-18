#include <stdio.h>
#include <stdlib.h>

int main(){
    float numeros[10];
    int c;
    for (c = 0; c < 10; c++)
    {
        printf("Digite o valor [%d]", c+1);
        scanf("%f", &numeros[c]); 
    }
    for (c = 0; c < 10; c++)
    {
        if (numeros[c] % 2 == 0)
        {
            printf("%f", numeros[c]);
        }
        
    }
    return 0;
}