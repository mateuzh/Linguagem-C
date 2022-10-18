#include <stdio.h>
#include <stdlib.h>

int main(){
    float numeros[10];
    int c, r;
    for (c = 0; c < 10; c++)
    {
        printf("Digite o %d ", c);
        scanf("%f", &numeros[c]);
    }
    for (c = 0; c < 10; c++)
    {
        printf("%f\n", numeros[c]);
    }
    for (r = 10; r >= 0; r--)
    {
        printf("%f\n", numeros[r]);
    }
    return 0;
}