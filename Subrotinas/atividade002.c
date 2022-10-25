#include <stdio.h>
#include <stdlib.h>

int retantulo(int col, int lin){

    int i, i2, i3, i4;
   
    printf("+");
    for (i = 0; i < col; i++)
    {
        printf("-");
   
    }
    printf("+\n");

    for (i4 = 0; i4 < lin; i4++)
    {
    
        printf("|");
        for (i2 = 0; i2 < col; i2++)
        {
            printf(" "); 
        }
        printf("|\n");
        
    }

    printf("+");
    for (i3 = 0; i3 < col; i3++)
    {
        printf("-");
    }
    printf("+");

    return 0;
}

void main()
{
    int colunas, linhas;
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    retantulo(colunas, linhas);

}