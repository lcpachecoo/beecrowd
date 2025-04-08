#include <stdio.h>

int main()
{
    int X,Y;
    int maior=0,menor=0;
    scanf("%d", &X);
    scanf("%d", &Y);
    if(X>=Y){
        maior=X;
        menor=Y+1;
    }
    if(Y>=X){
        maior=Y;
        menor=X+1;
    }
    while(menor<maior){
        if((menor%5)==2 || (menor%5)==3){
            printf("%d\n", menor);
        }
        menor++;
    }
    
    
    return 0;
}