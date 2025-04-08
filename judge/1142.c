#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int N;
    int cont=1;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        while((cont%4)!=0){
            printf("%d ",cont);
            cont++;
        }
        printf("PUM\n");
        cont++;
    }
    return 0;
}