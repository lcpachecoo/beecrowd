#include <stdio.h>

int main()
{ 
     
    int x,y;
    float valorj;
    for(float i=0;i<2;i=i+0.2){
        x=i;
        for( float j=1; j<=3;j++ ){
            valorj=i+j;
            y=i+j;
            if(i==0 || i==1 || i==2){
                printf("I=%d ",x);
            }else{
                printf("I=%.1f ",i);
            }
            if(valorj==1 || valorj==2 || valorj==3 || valorj==4 ||valorj==5){
                printf("J=%d\n",y);
            }else{
                printf("J=%.1f\n",i+j);
            }
              
         }
     }
     printf("I=2 J=3\nI=2 J=4\nI=2 J=5\n");
    return 0;
}