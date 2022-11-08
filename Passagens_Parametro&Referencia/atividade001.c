#include <stdio.h>
#include <stdlib.h>

int ano = 0;
int mes = 0;
int validar = 0;

int main(){
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    anobissexto(&ano, &mes);
    return 0;
}

int anobissexto(int *p_ano, int *p_mes){
    int validar;
    if (*p_ano % 4 == 0)
    {
        if (*p_ano % 100 != 0)
        {
            validar = 1;
        }
        else{
            if (*p_ano % 400 == 0)
            {
                validar = 1;
            }
            else{
                validar = 0;
            }  
        } 
    }
    else{
        validar = 0;
    }
    /*
    switch (*p_mes)
    {
    case  1:
        printf("O mes informado tem 31 dias");
        break;
    case  2:
        if (anobissexto(*p_ano) == 0)
        {
            printf("O mes informado tem 28 dias");
        }
        else
        {
            printf("O mes informado tem 29 dias");
        }
        break;
    case  3:
        printf("O mes informado tem 31 dias");
        break;
    case  4:
        printf("O mes informado tem 30 dias");
        break;
    case  5:
        printf("O mes informado tem 31 dias");
        break;
    case  6:
        printf("O mes informado tem 31 dias");
        break;
    case  7:
        printf("O mes informado tem 30 dias");
        break;
    case  8:
        printf("O mes informado tem 31 dias");
        break;
    case  9:
        printf("O mes informado tem 30 dias");
        break;
    case  10:
        printf("O mes informado tem 31 dias");
        break;
    case  11:
        printf("O mes informado tem 30 dias");
        break;
    case 12:
        printf("O mes informado tem 31 dias");
        break;
    default:
        break;
    }
    */
   
    return dias;
}

