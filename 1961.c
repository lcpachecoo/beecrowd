#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,n;
    scanf("%d", &p);
    scanf("%d", &n);
    int j[n], cont=0;
   
    
    for(int i=0; i<n; i++){
        scanf("%d", &j[i]);
        if(j[i]>j[i-1] && i>0){
            if(j[i]-j[i-1]>p){
                cont++;
            }
        }
        if(j[i]<j[i-1] && i>0){
            if(j[i-1]-j[i] >p){
                cont++;
            }
        }
    }
    if(cont==0){
        printf("YOU WIN\n");
        
    }else{
        printf("GAME OVER\n");
    }

    return 0;
}
