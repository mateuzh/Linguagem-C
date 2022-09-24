//Sequecia Fibonacci até o 15ª termo

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1, t2, fi, c;
    t1 = 0;
    printf("%d ", t1);
    t2 = 1;
    printf("%d ", t2);
    for (c = 0; c <= 13; c++)
    {
        fi = t1 + t2;
        printf("%d ", fi);
        t1 = t2;
        t2 = fi;
    } 
    return 0;
}