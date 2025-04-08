#include <stdio.h>

int separador(int x,int y){
    int soma=0;
    if(x>y){
        y++;
        if(y%2==0){
           y++;
        }
        while(y<x){
            soma+=y;
            y+=2;
        }
    }else{
        if(y>x){
            x++;
            if(x%2==0){
                x++;
            }
            while(x<y){
                soma+=x;
                x+=2;
            }
        }
    }
    return soma;
}

int main()
{
    int n,x,y;
    int s;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        scanf("%d", &y);
        s=separador(x,y);
        printf("%d\n",s);
    }
    return 0;
}
