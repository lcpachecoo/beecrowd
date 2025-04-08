#include <stdio.h>

void imprimir(int num){
    printf("%X\n",num);
}
int main()
{
    int n;
    scanf("%d", &n);
    imprimir(n);

    return 0;
}
