#include <stdio.h>
#include <stdlib.h> 
int xama(int n, int x){
    int y,cont=0,b=0;
    for(int i=1; i<n;i++){
		scanf("%d", &y);
		if(y<x && b==0){
			cont=i+1;
			b++;
		}
        x=y;
         
    } 
    return cont;
}
int main(){
    int n,x,y,cont=0,b=0;
     
    scanf("%d %d",&n,&x);
    cont= xama(n,x);
    printf("%d\n",cont);
     return 0;
}
