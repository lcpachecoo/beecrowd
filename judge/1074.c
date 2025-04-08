#include <stdio.h>

int main()
{ 
    int N,num; 
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d", &num);
        if(num==0){
            printf("NULL\n");
        }else{
            if(num>0 && (num%2)==0){
                printf("EVEN POSITIVE\n");
            }else{
                if(num>0 && (num%2)!=0){
                    printf("ODD POSITIVE\n");
                }else{
                    if(num<0 && (num%2)==0){
                        printf("EVEN NEGATIVE\n");
                    }else{
                        if(num<0 && (num%2)!=0){
                            printf("ODD NEGATIVE\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}