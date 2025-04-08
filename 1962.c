#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,ano,cont=0,i=0; 
    
    scanf("%d", &x );
    for(int i=0; i<x;i++){
        scanf("%d", &ano);
        if(ano>=2015){
            cont= ((2015-ano)*-1)+1;
            if(cont==0){
                cont=1;
            }
            printf("%d A.C.\n",cont);
        }else{
            cont= 2015-ano;
            printf("%d D.C.\n",cont);
        }
    }

    return 0;
}
