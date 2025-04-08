#include <stdio.h>

int main()
{
    float valor,res=0,aux=0;
    scanf("%f", &valor);
    valor-=2000;
    if(valor<=0){
        printf("Isento\n");
        aux=1;
    }else{
        if(valor>1000){
            res=1000*0.08;
            valor-=1000;
            if(valor>1500){
                res=res+(1500*0.18);
                valor-=1500;
                if(valor>0){
                    res= res+(valor*0.28);
                }
            }else{
                if(valor>=0){
                    valor= valor*0.18;
                    res=res+valor;  
                } 
            }
        }else{
            res=valor*0.08;
        }
    }
    if(aux==0){
        printf("R$ %.2f\n", res);
    }
    return 0;
}