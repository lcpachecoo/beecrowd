#include <stdio.h>
#include <string.h>
int main()
{
    char pernas[15];
    while(scanf("%s", pernas) != EOF)    
    {
        
        if(strcmp(pernas, "esquerda")==0){
            printf("ingles\n");
        }else{
            if(strcmp(pernas, "direita")==0){
                printf("frances\n");
            }else{
                if(strcmp(pernas, "nenhuma")==0){
                    printf("portugues\n");
                }else{
                    printf("caiu\n");
                    scanf("%s", pernas);
                }
            }
        }
    }
    return 0;
}
