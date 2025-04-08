#include <stdlib.h>
#include <stdio.h>

int main()
{

    int n,cont,menor,num;
    scanf("%d", &n);
    scanf("%d", &num);
    menor=num;
    cont=0;
    for(int i=1;i<n;i++){
        scanf("%d", &num);
         
        if(menor>num){
            cont=i;
            menor=num;
        }
    }
   printf("Menor valor: %d\nPosicao: %d\n",menor,cont);

    return 0;
}
