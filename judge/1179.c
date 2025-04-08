#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vet[15];
    int par[15],impar[15];
    int contP=0, contI=0;
     int x=5,cont=0,y=5,j=0,k=0,contpp=0,contii=0,verif=0;
    for(int i=0; i<15;i++){
        scanf("%d", &vet[i]);  
        if((vet[i]%2)==0){
            par[contP]=vet[i];
            contP++;
            if(contP==5){
                while(contpp<5){
                    printf("par[%d] = %d\n", contpp,par[contpp]);
                    contpp++;
                }
                contpp=0;
                contP=0;
            }
        }else{
            impar[contI]=vet[i];
            contI++;
            if(contI==5){
                while(contii<5){
                    printf("impar[%d] = %d\n", contii,impar[contii]);
                    contii++;
                }
                contii=0;
                contI=0;
            }
        }
    }
     
        while(contii<contI){
            printf("impar[%d] = %d\n", contii,impar[contii]);
            contii++;
        }
        while(contpp<contP){
            printf("par[%d] = %d\n", contpp,par[contpp]);
            contpp++;
        }
     
   

    return 0;
}
