#include <stdio.h>

int main()
{
    int x , y , num;
    float resultado=0;
    scanf("%d", &num);
   // num=num*2;
    for(int i=1; i<=num;i++){
        scanf("%d", &x);
        scanf("%d", &y);
        
            resultado= (float) x/y;
            if(y==0){
                printf("divisao impossivel");
            }else{
                printf("%.1f", resultado);
            }
        
        printf("\n");
    }
    return 0;
}