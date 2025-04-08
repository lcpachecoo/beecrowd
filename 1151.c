#include <stdio.h>

int main()
{
    int N;
    int pre=0,pro=1,aux=1;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        printf("%d",pre);
        if(N<=2){
            pre=1;
        }else{
            pro=aux;
            aux=pre;
            pre= pre +pro;
        }
        if(i<(N-1))
        printf(" ");
        
    }
    printf("\n");
    return 0;
}