#include <stdio.h>

int main()
{
    int num;
     
    scanf("%d",&num);
    if(5<num && num<2000){
        if((num%2)==0){
            for(int i=2; i<=num; i+=2){
                printf("%d^2 = %d",i,i*i);
                printf("\n");
            }
        }else{
            for(int i=2; i<num; i+=2){
                printf("%d^2 = %d",i,i*i);
                printf("\n");
            }
        }
        
        
    }
    return 0;
}