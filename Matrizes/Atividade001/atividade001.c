#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float tab_cf[201][2];
    float celsius = 0, farenheit = 0;
    int i, i2;
    int c, c2;

    for (i = 0; i < 201; i++)
    {
        farenheit = i-100;
        celsius = (farenheit-32)*5/9;
        for (i2 = 0; i2 < 2; i2++)
        {
            tab_cf[i][i2] = 0;
            if (i2 == 0)
            {
                tab_cf[i][i2] = farenheit;
            }
            else 
            {
                tab_cf[i][i2] = celsius;
            } 

        }
    }
    
    for (c = 0; c < 201; c++)
    {
        for (c2 = 0; c2 < 2; c2++)
        {
            if (c2 == 1)
            {
                printf("%f\n", tab_cf[c][c2]);
            }
            else
            {
                printf("%f --> ", tab_cf[c][c2]);
            }
        }
        
    }
    
    return 0;
}