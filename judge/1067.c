#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(1<= num && num<=1000){
        if((num%2)!=0){
            for(int i=1; i<=num;  i+=2){
                printf("%d",i);
                printf("\n");
            }
        }else{
            for(int i=1; i<num;  i+=2){
                printf("%d",i);
                printf("\n");
            }
        }
    }
    return 0;
}