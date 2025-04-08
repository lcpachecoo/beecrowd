#include <stdio.h>

int main()
{
    int i=1, j=7;
    for(i=1; i<=9;i+=2){
        for(int k=0; k<3;k++){
            printf("I=%d J=%d\n",i,j);
            j--;
        }
        j+=5;
    }
    return 0;
}