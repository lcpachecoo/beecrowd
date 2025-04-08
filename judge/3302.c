#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,x;
    char vet[20];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        printf("resposta %d: %d\n",i+1,x);
    }
     
    return 0;
}
