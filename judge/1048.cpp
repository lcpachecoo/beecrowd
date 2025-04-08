#include <stdio.h>

int main()
{
    float valor, ganhos;
    scanf("%f", &valor);
    if(valor<=400){
        printf("Novo salario: %.2f\n", valor*1.15);
        printf("Reajuste ganho: %.2f\n",(valor*1.15)-valor);
        printf("Em percentual: 15 %%\n");
    }else{
        if(valor<=800){
            printf("Novo salario: %.2f\n", valor*1.12);
            printf("Reajuste ganho: %.2f\n",(valor*1.12)-valor);
            printf("Em percentual: 12 %%\n");
        }else{
            if(valor<=1200){
                printf("Novo salario: %.2f\n", valor*1.1);
                printf("Reajuste ganho: %.2f\n",(valor*1.1)-valor);
                printf("Em percentual: 10 %%\n");
            }else{
                if(valor<=2000){
                    printf("Novo salario: %.2f\n", valor*1.07);
                    printf("Reajuste ganho: %.2f\n",(valor*1.07)-valor);
                    printf("Em percentual: 7 %%\n");  
                }else{
                    printf("Novo salario: %.2f\n", valor*1.04);
                    printf("Reajuste ganho: %.2f\n",(valor*1.04)-valor);
                    printf("Em percentual: 4 %%\n");
                }
            }
        }
    }
    return 0;
}
