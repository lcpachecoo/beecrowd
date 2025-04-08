#include <stdio.h>
int fatorial(int num ){ 
    int resultado =1;    
    if(num==0){
        return 1;
    }else{
        for(int i=num;i>0;i--){
            resultado = resultado*i;
        }
        return resultado;
    }
}
int main()
{
    int N; 
    scanf("%d", &N);
    printf("%d", fatorial(N));
    printf("\n");
    return 0;
}