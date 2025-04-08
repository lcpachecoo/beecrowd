#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int cont;
    while(scanf("%d", &n)!=EOF){
        int mat[n][n];
        cont=n-1;
        for(int i=0; i<n;i++){
           // mat[i][i]=1;
            //mat[i][cont]=2;
            
            for(int j=0; j<n;j++){
                if(mat[i][j]!=1 || mat[i][j]!=2){
                    mat[i][j]=3;
                }
                mat[i][i]=1;
                mat[i][cont]=2;
                
                
                printf("%d",mat[i][j]);
            }
            printf("\n");
            cont--;
            
        }
    }
    
    return 0;
}
