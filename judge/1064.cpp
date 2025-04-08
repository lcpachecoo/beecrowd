#include <stdio.h>

int main()
{
    float vet[6];
    int cont=0;
    float soma=0;
    for(int i=0; i<6;i++){
        scanf("%f", &vet[i]);
        if(vet[i]>0){
            cont++;
             soma+=vet[i];
        }
       
        
    }
    printf("%d valores positivos\n%.1f\n", cont,soma/cont);

    return 0;
}