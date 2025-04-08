#include <stdio.h>



int main()
{
    int n,x,vet[14]={0,6,12,90,360,2040,10080,54810,290640,1588356,8676360,47977776,266378112,1488801600};
    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        printf("%d\n",vet[x-1]);
    }

    return 0;
}