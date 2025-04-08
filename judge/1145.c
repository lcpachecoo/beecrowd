#include <stdio.h>

int main()
{
    int  X,Y;
    int cont=1;
    scanf("%d", &X);
    scanf("%d", &Y);
    //(1 < X < 20) e (X < Y < 100000).
    if(1<X && X<20 && X<Y && Y<100000){
       for(int i=1;i<=Y;i++){
           printf("%d", cont);
           if((cont%X)==0){
               printf("\n");
           }else{
               printf(" ");
           }
           cont++;
       }
    }
    return 0;
}