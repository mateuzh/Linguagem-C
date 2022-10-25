#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0;
    do
    {
        while (a<2)
        {
            printf("%d\n", (a+1));
            a++;
        }
        a +=1;
    } while (a<3);
    printf("%d", a);
    return 0;
}

//1 - Pois no primeiro loop do while, a ainda vale 0 no printf. Então ele vai mostrar a + 1.  
//2 - Pois no segundo loop do while, a vale 1 no printf. Então ele vai mostrar a + 1.
//3 - Ao sair do loop while, a vale 2. A soma irá ser 2 + 1, fazendo com que a condição do Do While seja falsa.