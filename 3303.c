#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char vet[20];
    scanf("%s", vet);
    if(strlen(vet)>=10){
        printf("palavrao\n");
    }else{
        printf("palavrinha\n");
    }
    return 0;
}
