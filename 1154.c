#include <stdio.h>

int main()
{
    int i=0,j=0;
    int soma=0,cont=0;
    int num;
    float media=0;
    scanf("%d",&num);
    while(num>=0){
        cont++;
        soma = soma +num;
        scanf("%d",&num);
    }
    media = (float)soma/ cont;
    printf("%.2f\n", media);
    return 0;
}