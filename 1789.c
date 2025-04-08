#include <stdio.h>
#include <stdlib.h> 
int cama1(int y,int n1){
    if(y<10){
        n1++;
    }
    return n1;
}
int cama2(int y, int n2){
    if(y>=10 && y<20){
        n2++;
    }
    return n2;
}
int cama3(int y, int n3){
    if(y>=20){
        n3++;
    }
    return n3;
}
            
int main() {
 
    int x,y,cont=0,n1=0,n2=0,n3=0,valor=0;
    while(scanf("%d",&x)!=EOF){
        for(int i=0;i<x;i++){
            scanf("%d",&y);
            n1=cama1(y,n1);
            n2=cama2(y,n2);
            n3=cama3(y,n3);    
        }
        if(n3!=0){
            printf("3\n"); 
        }else{
            if(n2!=0){
                printf("2\n"); 
            }else{
                printf("1\n"); 
            }
        }
        n1=0;
        n2=0;
        n3=0;
    }
     
    
    return 0;
}
