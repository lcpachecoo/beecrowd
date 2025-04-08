#include <stdio.h>

int main()
{
    int num,x;
    int contInt=0, contOut=0;
    scanf("%d",&num);
    if( num<=10000){
        for(int i=0; i<num; i++){
            scanf("%d", &x);
            if(x>=10 && x<=20){
                contInt++;
            }else{
                contOut++;
            }
        }
        printf("%d in\n%d out\n",contInt,contOut);
    }
    return 0;
}