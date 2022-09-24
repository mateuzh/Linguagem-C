#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, c, i;
    for (c = 0; c <= 5; c++)
    {
        for (i = 0; i < c; i++)
        {
            printf(" %d", c);
        }      
    }
    
    return 0;
}