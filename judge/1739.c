 #include <stdio.h>
#include <stdlib.h>

int separador(unsigned long long int fib){
    int cont=0;
    while(cont<60){
        if(fib==3){
            return 1;
        }else{
            if((fib%10)==3){
                return 1;
            }
        }
        fib=fib/10;
        cont++;
    }
    return 0;
}
int main()
{
    unsigned long long int   N=1,  valor=0;
    unsigned long long int aux=0;
    unsigned long long int x=1,fibonacci=2,pre=1, cont=0;

    while(N<=60){

        while(x==1){
            aux= fibonacci;
            fibonacci=pre+fibonacci;
            pre=aux;
            if((fibonacci%3)==0){
                x=0;
                valor=fibonacci;
            }else{
                if(separador(fibonacci)==1){
                    x=0;
                    valor=fibonacci;
                }
            }

        }
        printf("%llu\n",valor);
        x=1;

    N++;
    }

    return 0;
}
