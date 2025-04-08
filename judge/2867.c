#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,a,b;
    double valor;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d %d", &a, &b);
        valor= powl(a,b);
        //printf("%.0lf %d %d ", valor, a, b);
        valor= (unsigned)log10(valor)+1;
        printf("%.0lf\n",  valor );
    }
     
    return 0;
}
