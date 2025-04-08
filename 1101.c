#include <stdio.h>

int main()
{
    int m,n;
    int flag=0,soma=0;
    
    while(flag!=1){
        scanf("%d %d\n", &m, &n);
        //printf("%d %d ", m,n);
        if(m<=0 || n<=0){
            flag=1;
        }
        if(m<n && flag!=1){
            while(m<=n){
                printf("%d ",m);
                soma+=m;
                m++;
            }
            printf("Sum=%d\n",soma);
        }else{
            if(n<m && flag!=1){
                while(n<=m){
                    printf("%d ",n);
                    soma+=n;
                    n++;
                }
                printf("Sum=%d\n",soma);
            }
        }
        soma=0;
    }
    return 0;
}