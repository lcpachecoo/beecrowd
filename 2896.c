#include <stdio.h>

int main()
{
    int N, garrafa_comprada, garrafa_vazia;
    int resto=0, qtd_garrafa=0;
    
    scanf("%d", &N);
    for(int i=0; i<N;i++){
        scanf("%d", &garrafa_comprada);
        scanf("%d", &garrafa_vazia);
        resto= garrafa_comprada%garrafa_vazia;
        qtd_garrafa=garrafa_comprada/garrafa_vazia;
        qtd_garrafa+=resto;
        printf("%d\n",qtd_garrafa);
    }
    return 0;
}
