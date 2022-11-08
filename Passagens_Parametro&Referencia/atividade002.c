#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador;
    float S=0;
    float resultado;
    float denominador = 1;
    int termos = 0;
    printf("Gostaria de ver ate quantos termos de PI? ");
    scanf("%d", &termos);

    for (contador = 0; contador < termos; contador++)
    {
        
        if ((contador % 2) == 0)
        {
            S=S+(1/(pow(denominador,3)));
            
        }
        else
        {
            S=S-(1/((pow(denominador,3))));
            
        }
        denominador=denominador+2;
        resultado=cbrt(S*32);
        printf("No %do termo, PI vale: %f\n", contador+1,resultado);
    }
    
    return 0;
}