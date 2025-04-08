#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    float nota;
    float soma=0.0;
    scanf("%f", &nota);
    while(nota<0 || nota>10) {
        printf("nota invalida\n");
        scanf("%f", &nota);
    }
    soma+=nota;
    scanf("%f", &nota);
    while(nota<0 || nota>10) {
        printf("nota invalida\n");
        scanf("%f", &nota);
    }
    soma+=nota;
    printf("media = %.2f",soma/2);
    printf("\n");
    return 0;
}