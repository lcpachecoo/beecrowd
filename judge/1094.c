#include <stdio.h>

int main()
{
    int n,x;
    int c=0,r=0,s=0,total=0;
    char caracter;
    scanf("%d", &n);
    
    for(int i=0; i<n;i++){
        scanf("%d ", &x);
        caracter= getchar();
        getchar();
        //printf("%d", caracter);
        if(caracter == 'C'){
            c+=x;
            total+=x;
        }else{
            if(caracter == 'R'){
                r+=x;
                total+=x;
            }else{
                //sapo
                s+=x;
                total+=x;
            }
        }
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n", c*100/(float)total);
    printf("Percentual de ratos: %.2f %%\n",r*100/(float)total);
    printf("Percentual de sapos: %.2f %%\n",s*100/(float)total);
    return 0;
}