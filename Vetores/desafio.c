#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char alfabeto[26] = {'abcdefghijklmnopqrstuvwxyz'};
    char usuario[100];
    int qntLetras[26];
    int c = 0;
    int c2 = 0;
    int c3 = 0;
    printf("Digite uma palavra: ");
    scanf("%s", &usuario);
    for (c = 0; c < strlen(alfabeto); c++)
    {
        qntLetras[c] = 0;
        for (c2 = 0; c2 < strlen(usuario); c2++)
        {
            if (alfabeto[c] == usuario[c2])
            {
                qntLetras[c] = qntLetras[c] + 1;
            }
        }
    }
    for (c3 = 0; c3 < strlen(alfabeto); c3++)
    {
        printf("%d", c3);
        printf("%c: %d ", alfabeto[c3], qntLetras[c3]);
    }
    
    
    return 0;
}