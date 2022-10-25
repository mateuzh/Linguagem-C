#include <stdio.h>
#include <stdlib.h>

int usuario;

void Sequencia(){
    int i, i2;

    for (i = 2; i <= usuario+1; i++)
    {

        for (i2 = 1; i2 < i; i2++)
        {
            
            printf("%d ", i2);
            
        }
        printf("\n");
    }
}

int main(){
    printf("Digite um numero para vermos a sequencia: ");
    scanf("%d", &usuario);
    Sequencia(usuario);
    return 0;
}