#include <stdio.h>

int main()
{
    int  vet[100];
    int maior=0;
    for(int i=0;i<100;i++){
        scanf("%d", &vet[i]);
        if(vet[i]>=vet[maior]){
            maior = i;
        }
        
    }
    printf("%d\n%d\n",vet[maior],maior+1);
    return 0;
}