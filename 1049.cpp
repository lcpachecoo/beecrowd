#include <stdio.h>
#include <string.h>
int main()
{
    char valor1[22],valor2[22],valor3[22];
    scanf("%s", valor1);
    scanf("%s", valor2);
    scanf("%s", valor3);
    if(strcmp(valor1,"vertebrado")==0){
        //strcmp(valor2,"")==0
            if(strcmp(valor2,"ave")==0){
                if(strcmp(valor3,"carnivoro")==0){
                    printf("aguia\n");
                }else{
                    printf("pomba\n");
                }
            }else{
                //mamifero
                if(strcmp(valor3,"onivoro")==0){
                    printf("homem\n");
                }else{
                    printf("vaca\n");
                }
            }
        
    }else{
        //invertebrado
        if(strcmp(valor2,"inseto")==0){
            if(strcmp(valor3,"hematofago")==0 ){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            //anelideo
            if(strcmp(valor3,"hematofago")==0  ){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
