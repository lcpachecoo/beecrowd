#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int cont=0, continter=0, contgremio=0, contempate=0;
    int inter, gremio, grenal;
    scanf("%d",&inter);
    scanf("%d",&gremio);
    printf("Novo grenal (1-sim 2-nao)");
    scanf("%d", &grenal);
    if(grenal==2){
        cont++;
    }else{
        if(inter>gremio){
            continter++;
        }else{
            if(gremio>inter){
                contgremio++;
            }else{
                if(inter==gremio){
                    contempate++;
                }
            }
        }
    }
    cont++;
    while(grenal==1){
        cont++;
        scanf("%d",&inter);
        scanf("%d",&gremio);
        printf("\nNovo grenal (1-sim 2-nao)");
        scanf("%d", &grenal);
        if(inter>gremio){
            continter++;
        }else{
            if(gremio>inter){
                contgremio++;
            }else{
                if(inter==gremio){
                    contempate++;
                }
            }
        }
    } 
    printf("\n%d grenais", cont);
    printf("\nInter:%d",continter);
    printf("\nGremio:%d\nEmpates:%d\n",contgremio,contempate);
        if(inter>gremio){
            printf("Inter venceu mais");
        }else{
            if(gremio>inter){
                printf("Gremio venceu mais");
            }else{
                if(inter==gremio){
                    printf("Nao houve vencedor");
                }
            }
        }
    
    printf("\n");
    return 0;
}
