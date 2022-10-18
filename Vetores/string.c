#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char usuario[10];
    int i, vogais, consoante;
    vogais = 0;
    consoante = 0;
    printf("Digite uma palavra: ");
    scanf("%s", &usuario);
    for (i = 0; i < strlen(usuario); i++)
    {
        if (usuario[i] == 'a'|| usuario[i] == 'e' || usuario[i] == 'i' || usuario[i] == 'o' || usuario[i] == 'u' || usuario[i] == 'A' || usuario[i] == 'E'|| usuario[i] == 'I' || usuario[i] == 'O' || usuario[i] == 'U')
        {
            vogais++;
        }
        else{
            consoante++;
        }   
    }
    printf("%d, essa foi a quantidade de vogais!\n", vogais);
    printf("%d, essa foi a quantidade de consoantes!", consoante);
    return 0;
}