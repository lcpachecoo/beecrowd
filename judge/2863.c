#include <stdio.h> 
int main()
{
    int n;
    float seg, menor_seg;
    while(scanf("%d", &n) != EOF)    
    {
        for(int i=0; i<n;i++){
            scanf("%f", &seg);
            if(menor_seg>seg || i==0)
                menor_seg=seg;
        }
        printf("%.2f\n", menor_seg);
    }
    return 0;
}
