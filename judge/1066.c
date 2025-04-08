#include <stdio.h>

int main()
{
    int vet[5];
    int contPAR=0, contIMPAR=0,contPOS=0,contNEG=0;
    
    for(int i=0; i<5;i++){
        scanf("%d", &vet[i]);
        if(vet[i]>0){
            contPOS++;
        }else{
            if(vet[i]<0){
                contNEG++;    
            }
            
        }
        if((vet[i]%2)==0){
            contPAR++;
        }else{
            contIMPAR++;
        }
       
        
    } 
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)",contPAR, contIMPAR, contPOS,contNEG);
    printf("\n");

    return 0;
}